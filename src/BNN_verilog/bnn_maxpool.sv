//-----------------------------------------------------------------------------
// Module: BNN_MaxPool2D_MultiChan
// Description: This module implements binary max-pooling for a multi-channel
//              2D image. For each channel, it divides the image into non-
//              overlapping windows of size POOL_SIZE x POOL_SIZE (with stride STRIDE)
//              and performs a max pooling operation (logical OR in binary).
// Parameters:
//   NUM_CHANNELS  : Number of input (and output) channels.
//   IMG_WIDTH     : Width of the input image (per channel).
//   IMG_HEIGHT    : Height of the input image (per channel).
//   POOL_SIZE     : Size of the pooling window (assumed square).
//   STRIDE        : Stride of the pooling operation (set equal to POOL_SIZE for non-overlap).
//   IMG_OUT_SIZE  : Computed output image size (IMG_WIDTH/STRIDE)
//-----------------------------------------------------------------------------
module BNN_maxpool2d #(
    parameter int NUM_CHANNELS = 3,
    parameter int IMG_WIDTH    = 28,
    parameter int IMG_HEIGHT   = 28,
    parameter int POOL_SIZE    = 2,
    parameter int STRIDE       = 2,
    parameter int IMG_OUT_SIZE = IMG_WIDTH / STRIDE   // assume IMG_WIDTH is an integer multiple of STRIDE
)(
    // Flattened multi-channel input.
    // Total bits = NUM_CHANNELS * IMG_WIDTH * IMG_HEIGHT.
    input  logic [NUM_CHANNELS*IMG_WIDTH*IMG_HEIGHT - 1:0] in_image,
    // Flattened output, which will be a concatenation of NUM_CHANNELS feature maps,
    // each of size IMG_OUT_SIZE x IMG_OUT_SIZE (1 bit per pixel).
    output logic [NUM_CHANNELS*IMG_OUT_SIZE*IMG_OUT_SIZE - 1:0] out_feature
);

    // We use generate loops to perform pooling on each channel, row and column.
    genvar ch, r, c, pr, pc;
    generate
        for (ch = 0; ch < NUM_CHANNELS; ch = ch + 1) begin : chan_loop
            // For each channel, process each output pixel coordinate.
            for (r = 0; r < IMG_OUT_SIZE; r = r + 1) begin : row_loop
                for (c = 0; c < IMG_OUT_SIZE; c = c + 1) begin : col_loop
                    // For the current output pixel (r, c) in channel ch,
                    // the input patch originates at:
                    // row index = r * STRIDE, column index = c * STRIDE.
                    // The patch covers a POOL_SIZE x POOL_SIZE block.
                    localparam int WINDOW_SIZE = POOL_SIZE * POOL_SIZE;
                    logic [WINDOW_SIZE-1:0] pool_window;
                    
                    // Use nested for loops (generate) to collect the bits of the pooling window.
                    // Note: Within generate blocks we can instantiate additional loops with genvar.
                    for (pr = 0; pr < POOL_SIZE; pr = pr + 1) begin : pool_row
                        for (pc = 0; pc < POOL_SIZE; pc = pc + 1) begin : pool_col
                            // Calculate the input image row and column for this pixel:
                            // in_row = r*STRIDE + pr, in_col = c*STRIDE + pc.
                            // The flattened index for a pixel in channel ch is:
                            //   idx = ch* (IMG_WIDTH*IMG_HEIGHT) + (in_row * IMG_WIDTH + in_col)
                            localparam int dummy = 0; // workaround; we use arithmetic in an assign.
                            wire [$clog2(IMG_WIDTH*IMG_HEIGHT)-1:0] offset;
                            assign offset = ( (r*STRIDE + pr) * IMG_WIDTH ) + (c*STRIDE + pc);
                            wire [31:0] pixel_index; // 32-bit to cover max index.
                            assign pixel_index = ch * (IMG_WIDTH*IMG_HEIGHT) + offset;
                            // Determine the index inside the pool window vector.
                            // pool_index = pr*POOL_SIZE + pc.
                            localparam int pool_index = 0; // will be computed by generate slicing below.
                            // We now assign the corresponding bit from in_image to the pool window.
                            // Using bit slicing syntax [expression +: width] is allowed.
                            // Use a temporary generate variable for the pool index:
                            assign pool_window[pr*POOL_SIZE + pc] = in_image[pixel_index];
                        end
                    end
                    
                    // The binary max-pooling operation: since inputs are binary (0/1),
                    // max pooling is equivalent to a logical OR of all bits in the pool window.
                    // Use the reduction OR operator.
                    wire pool_result;
                    assign pool_result = |pool_window;
                    
                    // Map pool_result to the flattened output at the appropriate index.
                    // For channel ch, row r, column c:
                    // out_index = ch*(IMG_OUT_SIZE * IMG_OUT_SIZE) + (r * IMG_OUT_SIZE) + c.
                    assign out_feature[ch*(IMG_OUT_SIZE*IMG_OUT_SIZE) + r*IMG_OUT_SIZE + c] = pool_result;
                end
            end
        end
    endgenerate

endmodule
