module mux (
    input logic tick,
    input logic time_out,
    input logic cmd_seq,
    output logic mux_out
);

    always_comb
      unique case(cmd_seq)
      1'b1 : mux_out = tick;
      1'b0 : mux_out = time_out;
      default: mux_out = 1'b0;
    endcase

endmodule
