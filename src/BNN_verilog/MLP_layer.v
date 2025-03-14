/*
    BNN MLP Layer
    Implemeted using BNN_neuron
*/

module MLP_Layer #(
    parameter INPUT_SIZE = 6*6*8,
    parameter OUTPUT_SIZE = 8
)(
    input wire [INPUT_SIZE] in,
    input wire [INPUT_SIZE*OUTPUT_SIZE] weight,
    input wire [INPUT_SIZE*THRESHOLD_WIDTH] threshold,
    output wire [OUTPUT_SIZE] out
);
    parameter THRESHOLD_WIDTH = $clog2(INPUT_SIZE+1);

    genvar i;
    generate
        for (i=0; i<OUTPUT_SIZE; i=i+1) begin : neuron_inst
            // Extract the weight vector for neuron i from the concatenated weights
            wire [INPUT_SIZE-1:0] neuron_weight;
            assign neuron_weight = weights[i*INPUT_SIZE +: INPUT_SIZE];

            // Extract the threshold for neuron i from the concatenated thresholds
            wire [THRESHOLD_WIDTH-1:0] neuron_threshold;
            assign neuron_threshold = thresholds[i*THRESHOLD_WIDTH +: THRESHOLD_WIDTH];

            // Instantiate a BNN neuron
            MLP_Neuron #(.N(INPUT_SIZE)) neuron (
                .in(in),
                .weight(neuron_weight),
                .threshold(neuron_threshold),
                .out(out[i])
            );
        end
    endgenerate

endmodule