module MLP_Neuron #(
    parameter INPUT_SIZE = 10
    parameter THRESHOLD_WIDTH = 4
)(
    input  wire [N-1:0] in,         // N-bit binary input vector (each bit represents a binary value)
    input  wire [N-1:0] weight,     // N-bit binary weight vector
    input  wire [THRESHOLD_WIDTH-1:0] threshold, // Threshold for activation
    output wire out                 // 1-bit output (activation)
);
    wire [N-1:0] xnor_out;
    genvar i;
    generate
        for (i = 0; i < N; i = i + 1) begin : xnor_loop
            assign xnor_out[i] = ~(in[i] ^ weight[i]);
        end
    endgenerate

    reg [THRESHOLD_WIDTH-1:0] popcount;
    integer j;
    always @(*) begin
        popcount = 0;
        for (j = 0; j < N; j = j + 1) begin
            popcount = popcount + xnor_out[j];
        end
    end

    assign out = (popcount >= threshold) ? 1'b1 : 1'b0;

endmodule