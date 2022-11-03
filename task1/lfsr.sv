module lfsr (
    input logic clk,
    input logic en,
    input logic rst,
    output [7:1] data_out
);

    logic [7:1] sreg;

    always_ff @(posedge clk, posedge rst)
        if (rst)
            sreg <= 7'b1;
        else if (en)
            sreg <= {sreg[6:1], sreg[1] ^ sreg[5]};
        else 
            sreg <= sreg;

    assign data_out = sreg;

endmodule