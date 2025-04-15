`include "Conv2d.sv"
`include "MaxPool2d.sv"

module dut ();
    parameter int CONV1_IC = 1;
    parameter int CONV1_OC = 10;
    parameter int CONV2_OC = 8;
    parameter int CONV1_IMG_IN_SIZE = 30;
    parameter int CONV1_IMG_OUT_SIZE = CONV1_IMG_IN_SIZE-2;
    parameter int POOL1_IMG_OUT_SIZE = CONV1_IMG_OUT_SIZE/2;
    parameter int CONV2_IMG_OUT_SIZE = POOL1_IMG_OUT_SIZE-2;
    parameter int POOL2_IMG_OUT_SIZE = CONV2_IMG_OUT_SIZE/2;

    logic [CONV1_IMG_IN_SIZE*CONV1_IMG_IN_SIZE-1:0] conv1_img_in [0:CONV1_IC-1] = {900'h38000001f8000007f800001860000060c00001838000070700001c1c000030300000e0c00001830000071e00000e7800001fc000003f0000000000000000000000000000000000000000000000000000000000000000000000000000000};
    logic [CONV1_IC*9-1:0] conv1_weights [0:CONV1_OC-1] = {9'hde, 9'h183, 9'h98, 9'h3e, 9'h1d6, 9'h6e, 9'h17c, 9'hf9, 9'hc9, 9'h18a};
    logic [CONV1_OC*9-1:0] conv2_weights [0:CONV2_OC-1] = {90'h1eecfbdb3c7b7800819e, 90'h224e92fb00d30024868, 90'h5a00381c70144e800003d, 90'h882d020940a259200179, 90'hb8e07048ff6638000182, 90'h2ffcda1933be868401a8, 90'he1b86120106c28800b0, 90'hf4e1b0881d2e444001b6};
    // logic signed [15:0] threshold [0:OC-1] = {-16'd31, -16'd73, -16'd16, -16'd33, -16'd13, -16'd3, -16'd1543, -16'd4, -16'd8, -16'd14};
    logic [CONV1_IMG_OUT_SIZE*CONV1_IMG_OUT_SIZE-1:0] conv1_img_out [0:CONV1_OC-1];
    logic [POOL1_IMG_OUT_SIZE*POOL1_IMG_OUT_SIZE-1:0] pool1_img_out [0:CONV1_OC-1];
    logic [CONV2_IMG_OUT_SIZE*CONV2_IMG_OUT_SIZE-1:0] conv2_img_out [0:CONV2_OC-1];
    logic [POOL2_IMG_OUT_SIZE*POOL2_IMG_OUT_SIZE-1:0] pool2_img_out [0:CONV2_OC-1];

    Conv2d #(
        .IC(CONV1_IC),
        .OC(CONV1_OC),
        .IMG_IN_SIZE(CONV1_IMG_IN_SIZE)
    ) conv1 (
        .img_in(conv1_img_in),
        .weights(conv1_weights),
        // .threshold(threshold),
        .img_out(conv1_img_out)
    );

    MaxPool2d #(
        .IC(CONV1_OC),
        .IMG_IN_SIZE(CONV1_IMG_OUT_SIZE)
    ) pool1 (
        .img_in(conv1_img_out),
        .img_out(pool1_img_out)
    );

    Conv2d #(
        .IC(CONV1_OC),
        .OC(CONV2_OC),
        .IMG_IN_SIZE(POOL1_IMG_OUT_SIZE)
    ) conv2 (
        .img_in(pool1_img_out),
        .weights(conv2_weights),
        // .threshold(threshold),
        .img_out(conv2_img_out)
    );

    MaxPool2d #(
        .IC(CONV2_OC),
        .IMG_IN_SIZE(CONV2_IMG_OUT_SIZE)
    ) pool2 (
        .img_in(conv2_img_out),
        .img_out(pool2_img_out)
    );

    wire _unused_ok = &{pool2_img_out};

endmodule
