import bnn_IOBinary as bnn
from dataloader import Dataloader
from trainer import Trainer
import torch
import torch.optim as optim
import torch.nn as nn


data_path = "resource\\h5_dataset"
data = Dataloader(data_path)



device = torch.device("cuda" if torch.cuda.is_available() else "cpu")
print(f"device is {device}")
model = bnn.BNN_ImageRecognition(num_classes=10).to(device)


criterion = nn.CrossEntropyLoss()
optimizer = optim.SGD(model.parameters(), lr=0.01, momentum=0.9)


num_epochs = 20


for epoch in range(num_epochs):
    train_loader = data.train_dataloader(epoch)
    val_loader = data.val_dataloader(epoch)
    model.train()       # set model to training mode
    running_loss = 0.0
    correct = 0
    total = 0

    # Loop over batches in the dataloader
    for batch_idx, (inputs, targets) in enumerate(train_loader):
        # Move inputs and targets to the device (GPU or CPU)
        inputs, targets = inputs.to(device), targets.to(device)

        # Zero the gradients from the previous iteration
        optimizer.zero_grad()

        # Forward pass: compute predictions
        outputs = model(inputs)

        # Compute the loss (note: outputs are logits)
        loss = criterion(outputs, targets)
        running_loss += loss.item()

        # Backward pass: compute gradient of the loss with respect to parameters
        loss.backward()

        # Update parameters using the optimizer
        optimizer.step()

        # compute accuracy for this batch
        _, predicted = outputs.max(1)
        total += targets.size(0)
        correct += predicted.eq(targets).sum().item()
    

    train_loss = running_loss / len(train_loader)
    train_acc = 100. * correct / total

    # Evaluate on the validation set
    model.eval()  # set model to evaluation mode
    val_loss = 0.0
    correct_val = 0
    total_val = 0
    with torch.no_grad():
        for inputs, targets in val_loader:
            inputs, targets = inputs.to(device), targets.to(device)
            outputs = model(inputs)
            loss = criterion(outputs, targets)
            val_loss += loss.item()
            _, predicted = outputs.max(1)
            total_val += targets.size(0)
            correct_val += predicted.eq(targets).sum().item()

    val_loss = val_loss / len(val_loader)
    val_acc = 100. * correct_val / total_val

    print(f"Epoch [{epoch+1}/{num_epochs}]: "
          f"Train Loss: {train_loss:.3f}, Train Acc: {train_acc:.2f}% | "
          f"Val Loss: {val_loss:.3f}, Val Acc: {val_acc:.2f}%")

# test
test_loader = data.test_dataloader()
model.eval()
test_loss = 0.0
correct_test = 0
total_test = 0
with torch.no_grad():
    for inputs, targets in test_loader:
        inputs, targets = inputs.to(device), targets.to(device)
        outputs = model(inputs)
        loss = criterion(outputs, targets)
        test_loss += loss.item()
        _, predicted = outputs.max(1)
        total_test += targets.size(0)
        correct_test += predicted.eq(targets).sum().item()
    
test_loss = test_loss / len(test_loader)
test_acc = 100. * correct_test / total_test

print("="*20)
print(f"Test Loss: {test_loss:.3f}, Test Acc: {test_acc:.2f}%")

# save weights
torch.save(model.state_dict(), "bnn_weights2.pth")


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

# write weights to file
torch.set_printoptions(threshold=20_000)
bnn1_weight = Binarize.apply(model.conv1.conv.weight).reshape(-1)
bnn2_weight = Binarize.apply(model.conv2.conv.weight).reshape(-1)
mlp1_weight = Binarize.apply(model.fc1.weight).reshape(-1)
mlp2_weight = Binarize.apply(model.fc2.weight).reshape(-1)
bn1_weight = model.bn1.weight.reshape(-1)
bn1_bias = model.bn1.bias.reshape(-1)
bn2_weight = model.bn2.weight.reshape(-1)
bn2_bias = model.bn2.bias.reshape(-1)
bn3_weight = model.bn3.weight.reshape(-1)
bn3_bias = model.bn3.bias.reshape(-1)
bn1_offset = []
for i in range(bn1_weight.size(dim=0)):
    bn1_offset.append((-bn1_bias[i]/bn1_weight[i]).item())
bn2_offset = []
for i in range(bn2_weight.size(dim=0)):
    bn2_offset.append((-bn2_bias[i]/bn2_weight[i]).item())
bn3_offset = []
for i in range(bn3_weight.size(dim=0)):
    bn3_offset.append((-bn3_bias[i]/bn3_weight[i]).item())

weight_lst = [bnn1_weight, bnn2_weight, mlp1_weight, mlp2_weight]
plst = []
for weight in weight_lst:
    lst = []
    for i in range(weight.size(dim=0)):
        lst.append('0' if weight[i] == -1 else '1')
    
    plst.append(''.join(lst))

with open("BNN weights.txt", "w") as file:
    print("bnn1_weight", file=file)
    print(f"shape is: {bnn1_weight.shape}", file=file)
    # print(bnn1_weight, file=file)
    print(plst[0], file=file)

    print("bnn2_weight", file=file)
    print(f"shape is: {bnn2_weight.shape}", file=file)
    #print(bnn2_weight, file=file)
    print(plst[1], file=file)

    print("mlp1_weight", file=file)
    print(f"shape is: {mlp1_weight.shape}", file=file)
    #print(mlp1_weight, file=file)
    print(plst[2], file=file)

    print("mlp2_weight", file=file)
    print(f"shape is: {mlp2_weight.shape}", file=file)
    #print(mlp2_weight, file=file)
    print(plst[3], file=file)

    print("bn1_offset", file=file)
    print(f"shape is: {len(bn1_offset)}", file=file)
    print(bn1_offset, file=file)

    print("bn2_offset", file=file)
    print(f"shape is: {len(bn2_offset)}", file=file)
    print(bn2_offset, file=file)

    print("bn3_offset", file=file)
    print(f"shape is: {len(bn3_offset)}", file=file)
    print(bn3_offset, file=file)