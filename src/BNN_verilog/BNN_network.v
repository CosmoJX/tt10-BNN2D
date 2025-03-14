/*
    BNN Network
    Implemented using BNN_Layer and MLP_Layer
    Top-level module of BNN module
*/

module BNN_Network #(
    parameter IMG_WIDTH = 30,
    parameter BNN1_CHANL = 8,
    parameter BNN2_CHANL = 16,
    parameter KERNEL_WIDTH = 3
) (
    input wire [IMG_SIZE-1:0] buff,
    input wire [KERNEL_SIZE*BNN1_CHANL-1:0] bnn_layer1_kernel_in,
    input wire [KERNEL_SIZE*BNN1_CHANL*BNN2_CHANL-1:0] bnn_layer2_kernel_in,

);
    parameter IMG_SIZE = IMG_WIDTH*IMG_WIDTH;
    parameter KERNEL_SIZE = KERNEL_WIDTH*KERNEL_WIDTH;
    
    genvar i;
    wire [BNN1_CHANL-1:0] bnn_layer1_kernel [KERNEL_SIZE-1:0];
    generate

    endgenerate

endmodule