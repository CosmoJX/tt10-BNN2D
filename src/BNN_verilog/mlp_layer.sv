`include "mlp_neuron.sv"
// MLP_Layer: A fully connected binary layer (MLP layer)
// Parameters:
//   INPUT_SIZE    : Number of binary inputs (e.g., 784 for a flattened 28x28 image).
//   NUM_NEURONS   : Number of neurons (output size).
//   THRESHOLD_WIDTH: Bit width required to represent thresholds (typically $clog2(INPUT_SIZE+1)).
module MLP_layer #(
    parameter int INPUT_SIZE = 784,
    parameter int NUM_NEURONS = 10,
    parameter int THRESHOLD_WIDTH = $clog2(INPUT_SIZE+1)
)(
    input  logic [INPUT_SIZE-1:0] in_vector, // INPUT_SIZE-bit binary vector input.
    // Weight matrix: concatenation of NUM_NEURONS weight vectors, each INPUT_SIZE bits.
    input  logic [NUM_NEURONS*INPUT_SIZE-1:0] weights,
    // Threshold vector: concatenation of NUM_NEURONS thresholds.
    input  logic [NUM_NEURONS*THRESHOLD_WIDTH-1:0] thresholds,
    output logic [NUM_NEURONS-1:0] out_vector  // NUM_NEURONS-bit output vector.
);

    genvar neuron;
    generate
        for (neuron = 0; neuron < NUM_NEURONS; neuron = neuron + 1) begin : neuron_inst
            // Extract weight vector for this neuron.
            logic [INPUT_SIZE-1:0] neuron_weight;
            assign neuron_weight = weights[neuron*INPUT_SIZE +: INPUT_SIZE];

            // Extract threshold for this neuron.
            logic [THRESHOLD_WIDTH-1:0] neuron_threshold;
            assign neuron_threshold = thresholds[neuron*THRESHOLD_WIDTH +: THRESHOLD_WIDTH];

            // Instantiate the binary MLP neuron.
            MLP_Neuron #(
                .INPUT_SIZE(INPUT_SIZE),
                .THRESHOLD_WIDTH(THRESHOLD_WIDTH)
            ) neuron_inst (
                .in(in_vector),
                .weight(neuron_weight),
                .threshold(neuron_threshold),
                .out(out_vector[neuron])
            );
        end
    endgenerate

endmodule