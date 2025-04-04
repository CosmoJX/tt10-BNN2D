/*
    BNN Layer
    Implemented using BNN neurons
*/
`include "BNN_neuron.v"

module BNN_Layer #(
    parameter IMG_WIDTH = 30,       // 28x28 image, padding=1
    parameter KERNEL_LEN = 3        // 3x3 kenel
)(
    input wire [IMG_IN_SIZE-1:0] img_buf,
    input wire [KERNEL_SIZE-1:0] kernel_buf,
    input wire [THRESHOLD_WIDTH-1:0] threshold,
    output wire [IMG_OUT_SIZE-1:0] out
);
    parameter IMG_IN_SIZE = IMG_WIDTH*IMG_WIDTH;            // input image size
    parameter IMG_OUT_LEN = IMG_WIDTH-KERNEL_LEN+1;         // output image side len
    parameter IMG_OUT_SIZE = IMG_OUT_LEN*IMG_OUT_LEN;       // output image size
    parameter KERNEL_SIZE = KERNEL_LEN*KERNEL_LEN;          // kernel size
    parameter THRESHOLD_WIDTH = $clog2(KERNEL_SIZE+1);      // threshold len

    genvar row, col;
    generate 
        for (row=0; row<IMG_OUT_LEN; row=row+1) begin 
            for (col=0; col<IMG_OUT_LEN; col=col+1) begin 
                wire [KERNEL_SIZE-1:0] patch;
                assign patch[0] = img_buf[(row*IMG_WIDTH + col)];            // (row, col)
                assign patch[1] = img_buf[(row*IMG_WIDTH + col + 1)];        // (row, col+1)
                assign patch[2] = img_buf[(row*IMG_WIDTH + col + 2)];        // (row, col+2)
                assign patch[3] = img_buf[((row+1)*IMG_WIDTH + col)];        // (row+1, col)
                assign patch[4] = img_buf[((row+1)*IMG_WIDTH + col + 1)];    // (row+1, col+1)
                assign patch[5] = img_buf[((row+1)*IMG_WIDTH + col + 2)];    // (row+1, col+2)
                assign patch[6] = img_buf[((row+2)*IMG_WIDTH + col)];        // (row+2, col)
                assign patch[7] = img_buf[((row+2)*IMG_WIDTH + col + 1)];    // (row+2, col+1)
                assign patch[8] = img_buf[((row+2)*IMG_WIDTH + col + 2)];    // (row+2, col+2)

                wire neuron_out;
                BNN_Neuron #(.KERNEL_LEN(KERNEL_LEN)) neuron_inst(
                    .in(patch),
                    .weight(kernel_buf),
                    .threshold(threshold),
                    .out(neuron_out)
                );

                assign out[row*IMG_OUT_LEN+col] = neuron_out;
            end
        end
    endgenerate

endmodule