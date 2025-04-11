// MLP_Neuron: A single neuron in a binary MLP.
// It compares a binary input vector with a binary weight vector using XNOR,
// computes the popcount (number of matching bits),
// and outputs 1 if the popcount is greater than or equal to the threshold.
module MLP_Classification_Neuron #(
    parameter int INPUT_SIZE = 784,
    parameter int THRESHOLD_WIDTH = $clog2(INPUT_SIZE+1)
)(
    input  logic [INPUT_SIZE-1:0] in,        // Binary input vector.
    input  logic [INPUT_SIZE-1:0] weight,    // Binary weight vector.
    output  logic [THRESHOLD_WIDTH-1:0] out  // popcount out
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

    assign out = popcount;

endmodule

// MLP_Layer: A fully connected binary layer (MLP layer)
// Parameters:
//   INPUT_SIZE    : Number of binary inputs (e.g., 784 for a flattened 28x28 image).
//   NUM_NEURONS   : Number of neurons (output size).
//   THRESHOLD_WIDTH: Bit width required to represent thresholds (typically $clog2(INPUT_SIZE+1)).
module MLP_Classification #(
    parameter int INPUT_SIZE = 784,
    parameter int NUM_NEURONS = 10,
    parameter int THRESHOLD_WIDTH = $clog2(INPUT_SIZE+1)
)(
    input  logic [INPUT_SIZE-1:0] in_vector, // INPUT_SIZE-bit binary vector input.
    // Weight matrix: concatenation of NUM_NEURONS weight vectors, each INPUT_SIZE bits.
    input  logic [NUM_NEURONS*INPUT_SIZE-1:0] weights,
    output logic [NUM_NEURONS*THRESHOLD_WIDTH-1:0] out
);

    genvar neuron;
    generate
        for (neuron = 0; neuron < NUM_NEURONS; neuron = neuron + 1) begin : neuron_inst
            // Extract weight vector for this neuron.
            logic [INPUT_SIZE-1:0] neuron_weight;
            assign neuron_weight = weights[neuron*INPUT_SIZE +: INPUT_SIZE];

            // Instantiate the binary MLP neuron.
            MLP_Classification_Neuron #(
                .INPUT_SIZE(INPUT_SIZE),
                .THRESHOLD_WIDTH(THRESHOLD_WIDTH)
            ) neuron_inst (
                .in(in_vector),
                .weight(neuron_weight),
                .out(out[neuron*THRESHOLD_WIDTH +: THRESHOLD_WIDTH])
            );
        end
    endgenerate

endmodule


module Comparator #(
    parameter int NUM_INPUTS = 10,
    parameter int INPUT_WIDTH = 8,

    parameter int OUTPUT_WIDTH = $clog2(NUM_INPUTS)
)(
    input   logic [NUM_INPUTS*INPUT_WIDTH-1:0] in,
    output  logic [OUTPUT_WIDTH-1:0] out
);
    logic [INPUT_WIDTH-1:0] val;
    logic [OUTPUT_WIDTH-1:0] ind_max;
    integer i;
    always_comb begin
        val = 0;
        for (i=0; i<NUM_INPUTS; i=i+1) begin 
            if (in[i*INPUT_WIDTH +: INPUT_WIDTH] > val) begin
                val = in[i*INPUT_WIDTH +: INPUT_WIDTH];
                ind_max = i;
            end
        end
    end

    assign out = ind_max;

endmodule