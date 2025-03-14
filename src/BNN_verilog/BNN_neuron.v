// This module implements one BNN neuron with 8 binary inputs.
// 'in' and 'weight' are 8-bit vectors (each bit representing a binary value)
// The neuron computes the XNOR between each corresponding bit of in and weight,
// then sums (popcounts) the results and compares the sum to a threshold.
// If the popcount is greater than or equal to the threshold, the output is 1;
// otherwise, the output is 0.
module BNN_Neuron #(
    parameter KERNEL_LEN = 3                                // kernel side length
)(
    input  wire [KERNEL_SIZE-1:0] in,                       // Input vector 
    input  wire [KERNEL_SIZE-1:0] weight,                   // Weight vector 
    input  wire [THRESHOLD_WIDTH-1:0] threshold,      // Threshold for activation (popcount comparison)
    output wire out                                         // Neuron output (binary)
);  

    parameter KERNEL_SIZE = KERNEL_LEN*KERNEL_LEN;          // kernel buffer size
    parameter THRESHOLD_WIDTH = $clog2(KERNEL_SIZE+1);

    // Compute bitwise XNOR: output bit is 1 if in and weight are equal, 0 otherwise.
    wire [KERNEL_SIZE-1:0] xnor_out;
    genvar i, j;
    generate
        for (i=0; i<KERNEL_SIZE; i=i+1) begin : xnor_loop
            assign xnor_out[i] = ~(in[i] ^ weight[i]);
        end
    endgenerate

    // Popcount: sum the bits of xnor_out. Assume KERNEL_SIZE = 9
    wire [$clog2(KERNEL_SIZE+1)-1:0] popcount;
    assign popcount = xnor_out[0] + xnor_out[1] + xnor_out[2] + 
                      xnor_out[3] + xnor_out[4] + xnor_out[5] + 
                      xnor_out[6] + xnor_out[7] + xnor_out[8];

    // Compare the popcount to the threshold.
    // If popcount is greater than or equal to threshold, output is 1.
    assign out = (popcount >= threshold);

endmodule