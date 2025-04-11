import bnn_IOBinary as bnn
from dataloader import Dataloader
from trainer import Trainer
import torch
import torch.optim as optim
import torch.nn as nn


file = open("eval_outputs.txt", "w")
torch.set_printoptions(threshold=200_000)
torch.set_printoptions(linewidth=2000)


data_path = "resource\\h5_dataset"
data = Dataloader(data_path)
test_loader = iter(data.test_dataloader())
img, label = next(test_loader)
print("image is :", file=file)
print(img[0], file=file)


model = bnn.BNN_ImageRecognition(num_classes=10)
model.load_state_dict(torch.load("bnn_weights2.pth"))
model.eval()


def print_hook(module, input, output):
    # You could just print the shape or the whole output if it's small.
    print(f"{module.__class__.__name__} input shape: {input[0].shape}", file=file)
    # Uncomment the next line if you want to see the entire output tensor.
    print(f"Input: {input[0][0]}", file=file)

# Register hooks for layers of interest.
model.conv2.register_forward_hook(print_hook)
model.fc1.register_forward_hook(print_hook)
model.fc2.register_forward_hook(print_hook)


with torch.no_grad():
    output = model(img)

print("Final classification logits:", output)

file.close()