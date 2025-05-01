/*
    binary convolutional module, accepts binary input, 
    performs xnor with float32 weights
        kenel_size = 3x3
        padding = 0
        stride = 1
*/

module ConvCore#(
    parameter int IC = 8,
    parameter int IMG_IN_SIZE = 30,
    parameter int IMG_OUT_SIZE = IMG_IN_SIZE-2
)(
    input logic clk,
    input logic data_in_ready,
    input logic [IMG_IN_SIZE*IMG_IN_SIZE-1:0] img_in [0:IC-1],
    input logic [IC*9-1:0] weights,  // 3x3 kernel
    output logic [IMG_OUT_SIZE*IMG_OUT_SIZE-1:0] img_out,
    output logic data_out_ready
);

    logic signed [7:0] popcount;
    integer cur_ic, row, col, adder_count;

    logic signed [7:0] patch_val;
    always_comb begin
    case (adder_count)
        0: patch_val = (img_in[cur_ic][row*IMG_IN_SIZE+col] == weights[cur_ic*9 + 0]) ? 8'sh01 : 8'shFF;
        1: patch_val = (img_in[cur_ic][row*IMG_IN_SIZE+col+1] == weights[cur_ic*9 + 1]) ? 8'sh01 : 8'shFF;
        2: patch_val = (img_in[cur_ic][row*IMG_IN_SIZE+col+2] == weights[cur_ic*9+2])?8'sh01 : 8'shFF;
        3: patch_val = (img_in[cur_ic][(row+1)*IMG_IN_SIZE+col] == weights[cur_ic*9+3])?8'sh01 : 8'shFF;
        4: patch_val = (img_in[cur_ic][(row+1)*IMG_IN_SIZE+col+1] == weights[cur_ic*9+4])?8'sh01 : 8'shFF;
        5: patch_val = (img_in[cur_ic][(row+1)*IMG_IN_SIZE+col+2] == weights[cur_ic*9+5])?8'sh01 : 8'shFF;
        6: patch_val = (img_in[cur_ic][(row+2)*IMG_IN_SIZE+col] == weights[cur_ic*9+6])?8'sh01 : 8'shFF;
        7: patch_val = (img_in[cur_ic][(row+2)*IMG_IN_SIZE+col+1] == weights[cur_ic*9+7])?8'sh01 : 8'shFF;
        8: patch_val = (img_in[cur_ic][(row+2)*IMG_IN_SIZE+col+2] == weights[cur_ic*9 + 8]) ? 8'sh01 : 8'shFF;
        default:    patch_val = 0;
    endcase
    end

    always_ff @(posedge clk) begin
        if (!data_in_ready) begin
            img_out <= 0;
            data_out_ready <= 0;
            cur_ic <= 0;
            row <= 0;
            col <= 0;
            popcount <= 0;
            adder_count <= 0;
        end
        else if (data_out_ready) begin 
            data_out_ready <= 0;
        end
        else begin
            if (adder_count == 9) begin
                adder_count <= 0;
                if (cur_ic == IC-1) begin
                    cur_ic <= 0;
                    img_out[row*IMG_OUT_SIZE+col] <= (popcount[7]?1'b0:1'b1);
                    popcount <= 0;
                    if (col == IMG_OUT_SIZE-1) begin
                        col <= 0;
                        if (row == IMG_OUT_SIZE-1) begin
                            row <= 0;
                            data_out_ready <= 1;
                        end
                        else begin
                            row <= row + 1;
                        end
                    end
                    else begin
                        col <= col + 1;
                    end
                end
                else begin
                    cur_ic <= cur_ic + 1;
                end
            end
            else begin
                popcount <= popcount + patch_val;
                adder_count <= adder_count + 1;
            end
        end
    end

endmodule

/*
    genvar row, col;
    generate
    for (row=0; row<IMG_OUT_SIZE; row=row+1) begin: out_row_gen
        for (col=0; col<IMG_OUT_SIZE; col=col+1) begin: out_col_gen
            always_ff @(posedge clk) begin
                if (!data_in_ready) begin
                    popcount[row*IMG_OUT_SIZE+col] <= 0;
                end
                else if (data_out_ready) begin end
                else begin
                    popcount[row*IMG_OUT_SIZE+col] <= popcount[row*IMG_OUT_SIZE+col] + 
                                                    ((img_in[cur_ic][row*IMG_IN_SIZE+col] == weights[cur_ic*9+0])?8'sh01 : 8'shFF) + 
                                                    ((img_in[cur_ic][row*IMG_IN_SIZE+col+1] == weights[cur_ic*9+1])?8'sh01 : 8'shFF) + 
                                                    ((img_in[cur_ic][row*IMG_IN_SIZE+col+2] == weights[cur_ic*9+2])?8'sh01 : 8'shFF) + 
                                                    ((img_in[cur_ic][(row+1)*IMG_IN_SIZE+col] == weights[cur_ic*9+3])?8'sh01 : 8'shFF) + 
                                                    ((img_in[cur_ic][(row+1)*IMG_IN_SIZE+col+1] == weights[cur_ic*9+4])?8'sh01 : 8'shFF) + 
                                                    ((img_in[cur_ic][(row+1)*IMG_IN_SIZE+col+2] == weights[cur_ic*9+5])?8'sh01 : 8'shFF) + 
                                                    ((img_in[cur_ic][(row+2)*IMG_IN_SIZE+col] == weights[cur_ic*9+6])?8'sh01 : 8'shFF) + 
                                                    ((img_in[cur_ic][(row+2)*IMG_IN_SIZE+col+1] == weights[cur_ic*9+7])?8'sh01 : 8'shFF) + 
                                                    ((img_in[cur_ic][(row+2)*IMG_IN_SIZE+col+2] == weights[cur_ic*9+8])?8'sh01 : 8'shFF);
                end
            end
        end
    end
    endgenerate
*/
/*
    // logic signed [7:0] popcount [0:IMG_OUT_SIZE-1][0:IMG_OUT_SIZE-1];
    genvar row, col, ic, kr, kc;
    generate
        for (row=0; row<IMG_OUT_SIZE; row=row+1) begin: out_row_gen
            for (col=0; col<IMG_OUT_SIZE; col=col+1) begin: out_col_gen
                logic [IC*9-1:0] patch; // image patch for one convolution
                for (ic=0; ic<IC; ic=ic+1) begin: ic_gen
                    for (kr=0; kr<3; kr=kr+1) begin: kr_gen
                        for (kc=0; kc<3; kc=kc+1) begin: kc_gen
                            assign patch[ic*9+kr*3+kc] = img_in[ic][(row+kr)*IMG_IN_SIZE+(col+kc)];
                        end
                    end
                end
                logic signed [7:0] popcount;
                always_comb begin: adder_block
                    popcount = 8'b0;
                    for (int i=0; i<IC*9; i=i+1) begin: loop_add
                        popcount = popcount + ((patch[i] == weights[i])?8'h1:-8'h1);
                    end
                end   
                assign img_out[row*IMG_OUT_SIZE+col] = ((popcount[7])?1'b0:1'b1);
            end
        end
    endgenerate
*/
