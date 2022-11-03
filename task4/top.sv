module top #(
    parameter WIDTH = 7
)(
    input logic clk, 
    input logic rst,
    input logic [WIDTH-1:0] N, 
    input logic trigger,
    output logic [7:0] data_out,
    output logic test
);

logic cmd_seq;
logic cmd_delay;
logic tick;
logic time_out;
logic mux_out;
logic [4:1] k;

assign test = time_out;

// assign random = k;
// assign mux_out = cmd_seq ? tick : time_out;

f1_fsm fsm(
    .clk(clk),
    .rst(rst),
    .trigger(trigger),
    .cmd_delay(cmd_delay),
    .cmd_seq(cmd_seq),
    .en(mux_out),
    .data_out(data_out)
);

mux mux(
    .tick(tick),
    .time_out(time_out),
    .cmd_seq(cmd_seq),
    .mux_out(mux_out)
);


clktick second(
    .clk(clk),
    .rst(rst),
    .N(N),
    .en(cmd_seq),
    .tick(tick)
);

lfsr lfsr1(
    .en(1),
    .rst(rst),
    .clk(clk),
    .data_out(k),
    .random(random)
);

delay one_delay(
    .clk(clk),
    .rst(rst),
    .trigger(cmd_delay),
    .n(k),
    .time_out(time_out)
);

endmodule
