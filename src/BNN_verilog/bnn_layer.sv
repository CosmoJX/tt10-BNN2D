//-----------------------------------------------------------------------------
// Module: BNN_ConvLayer_MultiChan
// Description: A convolutional BNN layer for images.
//   - The input is a multi-channel image of size IMG_IN_SIZE x IMG_IN_SIZE for each channel,
//     flattened into a vector of bits.
//   - For each output position, a patch is extracted (of size:
//       BNN_IN_CHANL x KERNEL_SIZE x KERNEL_SIZE bits)
//   - For each output channel (filter), a binary convolution is performed:
//       1. Compute bitwise XNOR between the patch and the filter weights.
//       2. Popcount the result.
//       3. Compare the popcount against a per-filter threshold.
//   - The output for each output channel is an image (feature map) of size
//       IMG_OUT_SIZE x IMG_OUT_SIZE (1 bit per pixel).
//-----------------------------------------------------------------------------
module BNN_layer #(
    parameter int IMG_IN_SIZE   = 28,   // Input image width/height per channel
    parameter int KERNEL_SIZE   = 3,    // Kernel size (assumed square)
    parameter int BNN_IN_CHANL  = 1,    // Number of input channels
    parameter int BNN_OUT_CHANL = 16,   // Number of output channels (filters)
    // For stride 1 and no padding, IMG_OUT_SIZE = IMG_IN_SIZE - KERNEL_SIZE + 1.
    parameter int IMG_OUT_SIZE  = IMG_IN_SIZE - KERNEL_SIZE + 1,
    // Total bits in a patch: for each output pixel, we take a patch of size:
    // BNN_IN_CHANL x KERNEL_SIZE x KERNEL_SIZE.
    parameter int NUM_INPUT_BITS = BNN_IN_CHANL * KERNEL_SIZE * KERNEL_SIZE,
    // Bit-width for the threshold per neuron (range 0 to NUM_INPUT_BITS)
    parameter int THRESHOLD_WIDTH = $clog2(NUM_INPUT_BITS+1)
)(
    // Multi-channel input image: flattened vector of bits.
    // The total number of bits is BNN_IN_CHANL * IMG_IN_SIZE * IMG_IN_SIZE.
    input  logic [BNN_IN_CHANL*IMG_IN_SIZE*IMG_IN_SIZE - 1 : 0] in_image,
    // Filter weights: for each output channel, a weight vector of NUM_INPUT_BITS bits.
    input  logic [BNN_OUT_CHANL*NUM_INPUT_BITS - 1 : 0] weights,
    // Thresholds: one threshold per output channel.
    input  logic [BNN_OUT_CHANL*THRESHOLD_WIDTH - 1 : 0] thresholds,
    // Output feature maps: for each output channel, an image of size IMG_OUT_SIZE x IMG_OUT_SIZE.
    output logic [BNN_OUT_CHANL*IMG_OUT_SIZE*IMG_OUT_SIZE - 1 : 0] out_feature_maps
);

    // For each output pixel position (row, col) and each output channel,
    // we compute a binary convolution result.
    genvar r, c, oc, ic, kr, kc;
    generate
        for (r = 0; r < IMG_OUT_SIZE; r = r + 1) begin : row_loop
            for (c = 0; c < IMG_OUT_SIZE; c = c + 1) begin : col_loop
                // For each output position, extract a patch from all input channels.
                // The patch is a vector of NUM_INPUT_BITS bits.
                logic [NUM_INPUT_BITS-1:0] patch;
                // For each input channel and kernel window, assign the corresponding pixel.
                for (ic = 0; ic < BNN_IN_CHANL; ic = ic + 1) begin : chan_loop
                    for (kr = 0; kr < KERNEL_SIZE; kr = kr + 1) begin : krow_loop
                        for (kc = 0; kc < KERNEL_SIZE; kc = kc + 1) begin : kcol_loop
                            // Calculate the index in the input image for channel ic.
                            // Pixel position: row index = r + kr, col index = c + kc.
                            localparam int IMAGE_SIZE = IMG_IN_SIZE;
                            // The flattened index of a pixel in channel ic is:
                            //   ic * (IMAGE_SIZE*IMAGE_SIZE) + ( (r+kr) * IMAGE_SIZE + (c+kc) )
                            // Calculate patch index for this pixel:
                            localparam int patch_index = ic*(KERNEL_SIZE*KERNEL_SIZE) + kr*KERNEL_SIZE + kc;
                            assign patch[patch_index] =
                                in_image[ ic * (IMAGE_SIZE*IMAGE_SIZE) + ((r+kr)*IMAGE_SIZE + (c+kc)) ];
                        end
                    end
                end

                // For each output channel (i.e. each filter), compute the neuron output.
                for (oc = 0; oc < BNN_OUT_CHANL; oc = oc + 1) begin : out_chan_loop
                    // Extract the weight vector for this output channel.
                    logic [NUM_INPUT_BITS-1:0] weight_vec;
                    assign weight_vec = weights[oc*NUM_INPUT_BITS +: NUM_INPUT_BITS];
                    // Extract the threshold for this output channel.
                    logic [THRESHOLD_WIDTH-1:0] thr;
                    assign thr = thresholds[oc*THRESHOLD_WIDTH +: THRESHOLD_WIDTH];

                    // Compute the popcount: count the number of bits where patch and weight match.
                    // Use an always_comb block with a for-loop.
                    logic [$clog2(NUM_INPUT_BITS+1)-1:0] popcount;
                    integer j;
                    always_comb begin
                        popcount = 0;
                        for (j = 0; j < NUM_INPUT_BITS; j = j + 1) begin
                            // Use an equality check to simulate XNOR.
                            if (patch[j] == weight_vec[j])
                                popcount = popcount + 1;
                        end
                    end

                    // Binary neuron: output 1 if popcount >= threshold, else 0.
                    logic neuron_out;
                    assign neuron_out = (popcount >= thr) ? 1'b1 : 1'b0;

                    // Map neuron_out to the proper position in the flattened output feature maps.
                    // The overall output index is: 
                    //   (oc * (IMG_OUT_SIZE*IMG_OUT_SIZE)) + (r * IMG_OUT_SIZE) + c.
                    assign out_feature_maps[ oc*(IMG_OUT_SIZE*IMG_OUT_SIZE) + r*IMG_OUT_SIZE + c ] = neuron_out;
                end // output channel loop
            end // col_loop
        end // row_loop
    endgenerate

endmodule