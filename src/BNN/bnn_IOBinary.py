import torch
import torch.nn as nn
import torch.nn.functional as F
import math

BNN_Layer1_Padding = 1
BNN_Layer2_Padding = 0
BNN_Layer1_OutputChannel = 16
BNN_Layer2_OutputChannel = 32
MLP_OutputChannel = 64
Output_Image_Size = 5+BNN_Layer1_Padding+BNN_Layer2_Padding

# Custom binarization function with STE.
class Binarize(torch.autograd.Function):
    @staticmethod
    def forward(ctx, input):
        # Save input for use in the backward pass.
        ctx.save_for_backward(input)
        # Binarize activations: map positive to +1 and negative to -1.
        return input.sign()

    @staticmethod
    def backward(ctx, grad_output):
        input, = ctx.saved_tensors
        # Use the straight-through estimator (STE) by approximating the gradient:
        grad_input = grad_output.clone()
        # Optionally, you can clip the gradient for |input| > 1 (or use other schemes).
        grad_input[input.abs() > 1] = 0
        return grad_input

# Binary Linear layer which binarizes its weights before the forward computation.
class BinaryLinear(nn.Module):
    def __init__(self, in_features, out_features, bias=False):
        super(BinaryLinear, self).__init__()
        self.in_features = in_features
        self.out_features = out_features
        # Initialize real-valued weights and bias
        self.weight = nn.Parameter(torch.Tensor(out_features, in_features))
        if bias:
            self.bias = nn.Parameter(torch.Tensor(out_features))
        else:
            self.register_parameter('bias', None)
        self.reset_parameters()
    
    def reset_parameters(self):
        # Using Kaiming initialization
        nn.init.kaiming_uniform_(self.weight, a=math.sqrt(5))
        if self.bias is not None:
            fan_in, _ = nn.init._calculate_fan_in_and_fan_out(self.weight)
            bound = 1 / math.sqrt(fan_in)
            nn.init.uniform_(self.bias, -bound, bound)
    
    def forward(self, input):
        # Binarize the weights using our custom function
        binary_weight = Binarize.apply(self.weight)
        # Perform the linear operation with binarized weights
        return F.linear(input, binary_weight, self.bias)

# Example Binary Neural Network Model for image recognition.
# For simplicity, here is a small CNN that uses binary convolutional layers.
# (A production-quality BNN for image recognition might replace all full-precision convs and FCs.)
class BinaryConv2d(nn.Module):
    def __init__(self, in_channels, out_channels, kernel_size, stride=1, padding=0, bias=False):
        super(BinaryConv2d, self).__init__()
        self.conv = nn.Conv2d(in_channels, out_channels, kernel_size,
                              stride=stride, padding=padding, bias=bias)
    
    def forward(self, input):
        input = input.float()
        # Binarize weights before applying convolution
        binary_weight = Binarize.apply(self.conv.weight)
        # Use the binary weights for convolution; note that input may also be binarized
        return F.conv2d(input, binary_weight, self.conv.bias, 
                        stride=self.conv.stride, padding=self.conv.padding)

class BNN_ImageRecognition(nn.Module):
    def __init__(self, num_classes=10):
        super(BNN_ImageRecognition, self).__init__()
        # Example architecture: a couple of binary convolutional layers and a binary linear layer.
        self.conv1 = BinaryConv2d(1, BNN_Layer1_OutputChannel, kernel_size=3, padding=BNN_Layer1_Padding)  
        self.bn1 = nn.BatchNorm2d(BNN_Layer1_OutputChannel)
        self.pool = nn.MaxPool2d(2, 2)
        self.conv2 = BinaryConv2d(BNN_Layer1_OutputChannel, BNN_Layer2_OutputChannel, kernel_size=3, padding=BNN_Layer2_Padding)
        self.bn2 = nn.BatchNorm2d(BNN_Layer2_OutputChannel)
        # Fully connected part uses BinaryLinear layers.
        self.fc1 = BinaryLinear(BNN_Layer2_OutputChannel * Output_Image_Size * Output_Image_Size, MLP_OutputChannel)  # for 28x28 images after 2 poolings
        self.bn3 = nn.BatchNorm1d(MLP_OutputChannel)
        self.fc2 = BinaryLinear(MLP_OutputChannel, num_classes)
    
    def forward(self, x):
        # Optionally binarize activations too; here we use HardTanh as an approximation
        x = self.pool(Binarize.apply(F.hardtanh(self.bn1(self.conv1(x)))))
        x = self.pool(Binarize.apply(F.hardtanh(self.bn2(self.conv2(x)))))
        x = x.view(x.size(0), -1)
        x = Binarize.apply(F.hardtanh(self.bn3(self.fc1(x))))
        x = self.fc2(x)
        # For classification, you can return logits directly (to be used with CrossEntropyLoss)
        return x



if __name__ == "__main__":
    # Instantiate and use the model
    device = torch.device("cuda" if torch.cuda.is_available() else "cpu")
    model = BNN_ImageRecognition(num_classes=10).to(device)

    # Example forward pass with a dummy input (batch of 16 images, 3x32x32)
    dummy_input = torch.randn(16, 3, 32, 32).to(device)
    logits = model(dummy_input)
    print("Output logits shape:", logits.shape)  # Expected: [16, 10]
