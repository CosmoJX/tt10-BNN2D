import torch
import torchvision.io as io
import os
import h5py

data_path = "resource\\h5_dataset"
images_per_digit_in_dataset = 10772

class Dataloader:

    images_per_digit = 10000    # only read 10000 samples from dataset for each digit

    def __init__(self, data_root, num_shifts=4, num_workers=10, batch_size=32):
        
        self.data_root = data_root
        self.num_workers = num_workers
        self.batch_size = batch_size
        self.num_shifts = num_shifts

        # load tensor from data root
        with h5py.File(data_root, "r") as f:
            data_lst = []
            label_lst = []
            test_data = []
            test_label = []
            for i in range(self.num_shifts): 
                data_lst.append([])
                label_lst.append([])
            for i in range(10):
                # for each digit, load {images_per_digit/num_shifts} samples into each data lst
                shift_size = Dataloader.images_per_digit//self.num_shifts
                for j in range(num_shifts):
                    start_ind = i*images_per_digit_in_dataset + j*shift_size
                    end_ind = i*images_per_digit_in_dataset + (j+1)*shift_size
                    data_lst[j].append(f["data"][start_ind:end_ind])
                    label_lst[j].append(f["label"][start_ind:end_ind])
                
                # read the rest of samples as test data/label
                start_ind = i*images_per_digit_in_dataset + Dataloader.images_per_digit
                end_ind = (i+1)*images_per_digit_in_dataset
                test_data.append(f["data"][start_ind:end_ind])      
                test_label.append(f["label"][start_ind:end_ind])    

        # turn each sample into pytorch tensor
        self.data_lst = []
        self.label_lst = []
        
        for i in range(num_shifts):
            self.data_lst.append(torch.cat(tuple([torch.from_numpy(sample) for sample in data_lst[i]]))) 
            self.data_lst[i] = self.data_lst[i].unsqueeze(1)   # each data_lst entry should be a tensor with shape (shift_size, 1, 28, 28)
            self.label_lst.append(torch.cat(tuple([torch.from_numpy(sample) for sample in label_lst[i]]))) 
        
        self.test_data = torch.cat(tuple([torch.from_numpy(sample) for sample in test_data]))   # tensor with shape (n, 1, 28, 28)
        self.test_label = torch.cat(tuple([torch.from_numpy(sample) for sample in test_label]))
        self.test_data = self.test_data.unsqueeze(1)
    
    
    """
    get a tensorloader from torch.utils.data
    param:
        tensors: a tuple of (data, label) tensors
        train: boolean for train/eval
    return:
        torch.utils.data.DataLoader
    """
    def get_tensorloader(self, tensors, train):
        dataset = torch.utils.data.TensorDataset(*tensors)
        return torch.utils.data.DataLoader(dataset, self.batch_size, shuffle=train)
    

    def train_dataloader(self, epoch=0):
        eval_ind = epoch%self.num_shifts
        data_tensor = torch.cat(tuple([self.data_lst[i] for i in range(self.num_shifts) if i != eval_ind]))
        label_tensor = torch.cat(tuple([self.label_lst[i] for i in range(self.num_shifts) if i != eval_ind]))
        return self.get_tensorloader((data_tensor, label_tensor), train=True)
    
    
    def val_dataloader(self, epoch=0):
        eval_ind = epoch%self.num_shifts
        data_tensor = self.data_lst[eval_ind]
        label_tensor = self.label_lst[eval_ind]
        return self.get_tensorloader((data_tensor, label_tensor), train=False)
    
    
    def test_dataloader(self):
        return self.get_tensorloader((self.test_data, self.test_label), train=False)

                 
def main():
    data = Dataloader(data_path)
    train_loader = data.train_dataloader()
    val_loader = data.val_dataloader()
    test_loader = data.test_dataloader()
    X, y = next(iter(test_loader))
    torch.set_printoptions(threshold=200_000)
    print(X[0])
    print(y[0])
    
if __name__ == "__main__":
    main()