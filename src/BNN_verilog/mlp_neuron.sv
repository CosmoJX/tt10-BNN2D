// MLP_Neuron: A single neuron in a binary MLP.
// It compares a binary input vector with a binary weight vector using XNOR,
// computes the popcount (number of matching bits),
// and outputs 1 if the popcount is greater than or equal to the threshold.
module MLP_Neuron #(
    parameter int INPUT_SIZE = 784,
    parameter int THRESHOLD_WIDTH = $clog2(INPUT_SIZE+1)
)(
    input  logic [INPUT_SIZE-1:0] in,        // Binary input vector.
    input  logic [INPUT_SIZE-1:0] weight,    // Binary weight vector.
    input  logic [THRESHOLD_WIDTH-1:0] threshold, // Threshold value.
    output logic out                       // 1-bit binary output.
);

    // Intermediate signal: bitwise XNOR result.
    // For each bit, XNOR returns 1 if in and weight are equal.
    logic [INPUT_SIZE-1:0] xnor_out;
    genvar j;
    generate
        for (j = 0; j < INPUT_SIZE; j = j + 1) begin : xnor_loop
            // XNOR implemented as equality comparison.
            assign xnor_out[j] = ~(in[j] ^ weight[j]);
        end
    endgenerate

    // Popcount: sum the bits of xnor_out.
    // The maximum value is INPUT_SIZE; we use THRESHOLD_WIDTH bits.
    logic [THRESHOLD_WIDTH-1:0] popcount;
    integer i;
    always_comb begin
        popcount = 0;
        for (i = 0; i < INPUT_SIZE; i = i + 1) begin
            if (xnor_out[i])
                popcount = popcount + 1;
        end
    end

    // Compare the popcount against the threshold.
    // If popcount >= threshold, output is 1; else 0.
    assign out = (popcount >= threshold) ? 1'b1 : 1'b0;

endmodule