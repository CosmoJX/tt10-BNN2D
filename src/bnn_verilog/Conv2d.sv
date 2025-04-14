/*
    nn.Conv2d module 
        kernel_size = 3x3
        stride = 1
        padding = 0
    
    accepts binarized input
    weights are kept as 32bit float

    performs convolution of one input channel in each cycle
    outputs the output channel after IC cycles
*/


module Conv2d #(
    parameter int KERNEL_SIZE = 3,
    parameter int IC = 4,
    parameter int OC = 8,
    parameter int IMG_IN_SIZE = 30,
    parameter int IMG_OUT_SIZE = IMG_IN_SIZE-KERNEL_SIZE+1
)(
    input logic clk,
    input logic rstn,

    input logic img_in [0:IMG_IN_SIZE*IMG_IN_SIZE-1],
    input real weights [0:KERNEL_SIZE*KERNEL_SIZE-1],

    output logic img_out [0:IMG_OUT_SIZE*IMG_OUT_SIZE-1],
    output logic done
);

    real temp_out [0:IMG_OUT_SIZE*IMG_OUT_SIZE-1];  // accumulates value for each input channel convolution
    integer oc;
    
    always_ff @(posedge clk) begin
        if (!rstn) begin
            for (int i=0; i<IMG_OUT_SIZE*IMG_OUT_SIZE; i=i+1) begin
                temp_out[i] = 0;
                img_out[i] = 0;
            end
            oc <= 0;
            done <= 0;
        end
        else begin
            for (int row=0; row<IMG_OUT_SIZE; row=row+1) begin
                for (int col=0; col<IMG_OUT_SIZE; col=col+1) begin
                    logic patch [0:KERNEL_SIZE*KERNEL_SIZE-1];
                    for (int kr=0; kr<KERNEL_SIZE; kr=kr+1) begin
                        for (int kc=0; kc<KERNEL_SIZE; kc=kc+1) begin
                            patch[kr*KERNEL_SIZE+kc] = img_in[(row+kr)*IMG_IN_SIZE+(col+kc)];
                        end
                    end
                    // assume 3x3 kernel
                    temp_out[row*IMG_OUT_SIZE+col] = temp_out[row*IMG_OUT_SIZE+col] + 
                                                    (weights[0]?patch[0]:0) +
                                                    (weights[1]?patch[1]:0) +
                                                    (weights[2]?patch[2]:0) +
                                                    (weights[3]?patch[3]:0) +
                                                    (weights[4]?patch[4]:0) +
                                                    (weights[5]?patch[5]:0) +
                                                    (weights[6]?patch[6]:0) +
                                                    (weights[7]?patch[7]:0) +
                                                    (weights[8]?patch[8]:0);
                end
            end
            oc <= oc+1;
            if (oc == OC-1) begin
                for (int i=0; i<IMG_OUT_SIZE*IMG_OUT_SIZE; i=i+1) begin
                    img_out[i] = (temp_out[i] > 0)?1:0;
                end
                done <= 1;
            end
        end
    end

endmodule