module top #(
    parameter WIDTH = 16
)(
  input  logic             clk,      // clock 
  input  logic             rst,      // reset
  input  logic             en,       // enable signal
  input  logic [WIDTH-1:0] N, 
  output logic [7:0] data_out
);

logic second;

clktick one_second(
    .clk(clk),
    .rst(rst),
    .en(en),
    .N(N),
    .tick(second)
);

f1_fsm statemachine (
    .clk(clk),
    .rst(rst),
    .en(second),
    .data_out(data_out)
);

endmodule
