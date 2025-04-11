import h5py
import torchvision.io as io
import os
import torch

dataset_path = "D:\\LargeFileDownload\\dataset"
output_root = "resource"
images_per_digit = 10772

tensors = []

# read image from dataset folder
for i in range(10):
    for j in range(images_per_digit+1):
        image_path = os.path.join(dataset_path, f"{i}", f"{i}", f"{j}.png")
        # image is a tensor of shape (2, 28, 28), index 0 has all 0's so only use index 1
        image = io.read_image(image_path, mode=io.ImageReadMode.GRAY_ALPHA)[1]
        # normalized the image to have value of only 1 or 0
        norm_image = image.apply_(lambda x: x>0)
        #print(norm_image)
        # append tensor to list
        tensors.append(norm_image)

        print(norm_image)
        exit()


# stack tensors into one tensor
data = torch.stack(tuple(tensors))

# prepare label
label = []
for i in range(10):
    label.extend([i]*images_per_digit)
label = torch.tensor(label)

'''
# save data to file
file_path = os.path.join(output_root, "h5_dataset")
with h5py.File(file_path, "w") as f:
    f.create_dataset("data", data=data.numpy(), compression="gzip")
    f.create_dataset("label", data=label.numpy(), compression="gzip")
'''
