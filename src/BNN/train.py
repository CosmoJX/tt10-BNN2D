import bnn
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


num_epochs = 10


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