`include "bnn_layer.sv"
`include "mlp_layer.sv"
`include "bnn_maxpool.sv"
`include "mlp_classification.sv"


module BNN_network #(
    parameter int IMG_SIZE = 30,
    parameter int BNN1_CHANL = 8,
    parameter int BNN2_CHANL = 16,
    parameter int KERNEL_SIZE = 3,
    parameter int MAXPOOL_KERNEL_SIZE = 2,
    parameter int MAXPOOL_STRIDE = 2,
    parameter int MLP_CHANL = 32,
    parameter int NUM_CLASS = 10,

    parameter int BNN1_IMG_SIZE = IMG_SIZE-KERNEL_SIZE+1,
    parameter int MAXPOOL1_IMG_SIZE = BNN1_IMG_SIZE/MAXPOOL_STRIDE,
    parameter int BNN2_IMG_SIZE = MAXPOOL1_IMG_SIZE-KERNEL_SIZE+1,
    parameter int MAXPOOL2_IMG_SIZE = BNN2_IMG_SIZE/MAXPOOL_STRIDE
)(
    input  logic [IMG_SIZE*IMG_SIZE] in_image,
    input  logic [KERNEL_SIZE*KERNEL_SIZE*BNN1_CHANL] bnn1_weights,
    input  logic [KERNEL_SIZE*KERNEL_SIZE*BNN1_CHANL*BNN2_CHANL] bnn2_weights,
    input  logic [BNN2_CHANL*MAXPOOL2_IMG_SIZE*MAXPOOL2_IMG_SIZE*MLP_CHANL] mlp1_weights,
    input  logic [MLP_CHANL*NUM_CLASS] mlp2_weights,
    input  logic [31:0] bnn1_threshold,
    input  logic [111:0] bnn2_threshold,
    input  logic [319:0] mlp1_threshold,
    output logic [$clog2(NUM_CLASS)-1:0] out
);
    logic [BNN1_CHANL*BNN1_IMG_SIZE*BNN1_IMG_SIZE-1:0] bnn1_out;
    logic [BNN1_CHANL*MAXPOOL1_IMG_SIZE*MAXPOOL1_IMG_SIZE-1:0] maxpool1_out;
    logic [BNN2_CHANL*BNN2_IMG_SIZE*BNN2_IMG_SIZE-1:0] bnn2_out;
    logic [BNN2_CHANL*MAXPOOL2_IMG_SIZE*MAXPOOL2_IMG_SIZE-1:0] maxpool2_out;
    logic [MLP_CHANL-1:0] mlp1_out;
    logic [59:0] classification_out;

    BNN_layer #(
        .IMG_IN_SIZE(IMG_SIZE),
        .KERNEL_SIZE(KERNEL_SIZE),
        .BNN_IN_CHANL(1),
        .BNN_OUT_CHANL(BNN1_CHANL)
    ) bnn1 (
        .in_image(in_image),
        .weights(bnn1_weights),
        .thresholds(bnn1_threshold),
        .out_feature_maps(bnn1_out)
    );

    BNN_maxpool2d #(
        .NUM_CHANNELS(BNN1_CHANL),
        .IMG_WIDTH(BNN1_IMG_SIZE),
        .IMG_HEIGHT(BNN1_IMG_SIZE),
        .POOL_SIZE(MAXPOOL_KERNEL_SIZE),
        .STRIDE(MAXPOOL_STRIDE)
    ) maxpool1 (
        .in_image(bnn1_out),
        .out_feature(maxpool1_out)
    );
    
    BNN_layer #(
        .IMG_IN_SIZE(MAXPOOL1_IMG_SIZE),
        .KERNEL_SIZE(KERNEL_SIZE),
        .BNN_IN_CHANL(BNN1_CHANL),
        .BNN_OUT_CHANL(BNN2_CHANL)
    ) bnn2 (
        .in_image(maxpool1_out),
        .weights(bnn2_weights),
        .thresholds(bnn2_threshold),
        .out_feature_maps(bnn2_out)
    );

    BNN_maxpool2d #(
        .NUM_CHANNELS(BNN2_CHANL),
        .IMG_WIDTH(BNN2_IMG_SIZE),
        .IMG_HEIGHT(BNN2_IMG_SIZE),
        .POOL_SIZE(MAXPOOL_KERNEL_SIZE),
        .STRIDE(MAXPOOL_STRIDE)
    ) maxpool2 (
        .in_image(bnn2_out),
        .out_feature(maxpool2_out)
    );

    MLP_layer #(
        .INPUT_SIZE(BNN2_CHANL*MAXPOOL2_IMG_SIZE*MAXPOOL2_IMG_SIZE),
        .NUM_NEURONS(MLP_CHANL)
    ) mlp1 (
        .in_vector(maxpool2_out),
        .weights(mlp1_weights),
        .thresholds(mlp1_threshold),
        .out_vector(mlp1_out)
    );

    MLP_Classification #(
        .INPUT_SIZE(MLP_CHANL),
        .NUM_NEURONS(NUM_CLASS)
    ) mlp2 (
        .in_vector(mlp1_out),
        .weights(mlp2_weights),
        .out(classification_out)
    );

    Comparator #(
        .NUM_INPUTS(NUM_CLASS),
        .INPUT_WIDTH(6)
    ) compare (
        .in(classification_out),
        .out(out)   
    );

endmodule