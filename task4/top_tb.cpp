#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vtop.h"

#include "vbuddy.cpp"     // include vbuddy code
#define MAX_SIM_CYC 100000

int main(int argc, char **argv, char **env) {
  int simcyc;     // simulation clock count
  int tick;       // each clk cycle has two ticks for two edges
  // int lights = 0; // state to toggle LED lights

  Verilated::commandArgs(argc, argv);
  // init top verilog instance
  Vtop * top = new Vtop;
  // init trace dump
  Verilated::traceEverOn(true);
  VerilatedVcdC* tfp = new VerilatedVcdC;
  top->trace (tfp, 99);
  tfp->open ("top.vcd");
 
  // init Vbuddy
  if (vbdOpen()!=1) return(-1);
  vbdHeader("L3T4:Reaction");
  vbdSetMode(1);        // Flag mode set to one-shot

  // initialize simulation inputs
  top->clk = 1;
  top->rst = 0;
  top->trigger = 0;
  top->N = 25;
  int state = 0;
  
  // run simulation for MAX_SIM_CYC clock cycles
  for (simcyc=0; simcyc<MAX_SIM_CYC; simcyc++) {
    // dump variables into VCD file and toggle clock
    for (tick=0; tick<2; tick++) {
      tfp->dump (2*simcyc+tick);
      top->clk = !top->clk;
      top->eval ();
    }
    top->N = vbdValue();
    vbdBar(top->data_out & 0xFF);
    // vbdHex(1, top->test & 0xF);
    // vbdHex(2, (top->random >> 4) & 0xF);

    // Display toggle neopixel
    // if (top->time_out) {
    //   vbdBar(lights);
    //   lights = lights ^ 0xFF;
    // }
    // set up input signals of testbench


    if (state == 1){
      vbdInitWatch();
      while(vbdFlag() == 0){}
              // ++++ Send count to Vbuddy
      vbdHex(4, (int(vbdElapsed()) >> 16) & 0xF);
      vbdHex(3, (int(vbdElapsed()) >> 8) & 0xF);
      vbdHex(2, (int(vbdElapsed()) >> 4) & 0xF);
      vbdHex(1, int(vbdElapsed()) & 0xF);
    } 


    if (top->test == 1){
      state = 1;
    }
    if (top->test == 0){
      state =0;
    }

    top->rst = (simcyc < 2);    // assert reset for 1st cycle
    top->trigger = vbdFlag();
    vbdCycle(simcyc);

    if (Verilated::gotFinish())  exit(0);
  }

  vbdClose();     // ++++
  tfp->close(); 
  exit(0);
}
