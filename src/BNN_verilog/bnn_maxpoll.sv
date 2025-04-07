module BNN_maxpool #(
    parameter int IMG_WIDTH   = 28,
    parameter int IMG_HEIGHT  = 28,
    parameter int POOL_SIZE   = 2,
    parameter int OUT_WIDTH   = IMG_WIDTH  / POOL_SIZE,
    parameter int OUT_HEIGHT  = IMG_HEIGHT / POOL_SIZE
)(
    // Flattened input image: IMG_WIDTH x IMG_HEIGHT bits
    input  logic [IMG_WIDTH*IMG_HEIGHT-1:0] in_image,
    // Flattened output image: OUT_WIDTH x OUT_HEIGHT bits
    output logic [OUT_WIDTH*OUT_HEIGHT-1:0] out_image
);

    //--------------------------------------------------------------------------
    // Function: pool_block
    // Description: For a given pooling window (starting at row 'r' and col 'c'),
    //              perform a logical OR (max pooling) over all POOL_SIZE x POOL_SIZE
    //              pixels.
    //--------------------------------------------------------------------------
    function automatic logic pool_block (
        input int r, 
        input int c, 
        input logic [IMG_WIDTH*IMG_HEIGHT-1:0] image
    );
        logic result;
        int i, j;
        begin
            result = 1'b0;
            // Loop over the pooling window.
            for (i = 0; i < POOL_SIZE; i = i + 1) begin
                for (j = 0; j < POOL_SIZE; j = j + 1) begin
                    // Calculate the pixel index in the flattened image.
                    // Row index: r*POOL_SIZE + i, Column index: c*POOL_SIZE + j.
                    result = result | image[((r * POOL_SIZE + i) * IMG_WIDTH) + (c * POOL_SIZE + j)];
                end
            end
            pool_block = result;
        end
    endfunction

    // Use an always_comb block to compute the output feature map.
    integer row, col;
    always_comb begin
        for (row = 0; row < OUT_HEIGHT; row = row + 1) begin
            for (col = 0; col < OUT_WIDTH; col = col + 1) begin
                out_image[row*OUT_WIDTH + col] = pool_block(row, col, in_image);
            end
        end
    end

endmodule
