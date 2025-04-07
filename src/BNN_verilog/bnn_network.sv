module BNN_network #(
    parameter int IMG_SIZE = 30,
    parameter int BNN1_CHANL = 8,
    parameter int BNN2_CHANL = 16,
    parameter int KERNEL_SIZE = 3,
    parameter int MLP_CHANL = 16,
    parameter int NUM_CLASS = 10,
    parameter int BNN1_IMG_SIZE = (IMG_SIZE-2)/2
    parameter int BNN2_IMG_SIZE = (BNN1_IMG_SIZE-2)/2
)(
    input logic [IMG_SIZE*IMG_SIZE] in_image,
    input logic [KERNEL_SIZE*KERNEL_SIZE*BNN1_CHANL] bnn1_weights,
    input logic [KERNEL_SIZE*KERNEL_SIZE*BNN1_CHANL*BNN2_CHANL] bnn2_weights,
    input logic [BNN2_CHANL*OUT_IMG_SIZE*OUT_IMG_SIZE*MLP_CHANL] mlp1_weights,
    input logic [MLP_CHANL*NUM_CLASS] mlp2_weights
)
    logic [BNN1_CHANL*BNN1_IMG_SIZE*BNN1_IMG_SIZE-1:0] bnn1_out;
    

    BNN_layer #(
        .IMG_IN_SIZE(IMG_SIZE),
        .KERNEL_SIZE(KERNEL_SIZE),
        .BNN_IN_CHANL(1),
        .BNN_OUT_CHANL(BNN1_CHANL),
        .THRESHOLD_WIDTH(8)
    ) bnn1 (
        .in_image(in_image),
        .weights(bnn1_weights),
        .threshold(bnn1_threshold),
        .out_feature_maps(bnn1_out)
    );

endmodule