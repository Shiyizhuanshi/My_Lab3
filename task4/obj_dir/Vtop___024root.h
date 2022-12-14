// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(N,6,0);
    VL_IN8(trigger,0,0);
    VL_OUT8(data_out,7,0);
    VL_OUT8(test,0,0);
    CData/*0:0*/ top__DOT__cmd_seq;
    CData/*0:0*/ top__DOT__cmd_delay;
    CData/*0:0*/ top__DOT__tick;
    CData/*0:0*/ top__DOT__time_out;
    CData/*4:0*/ top__DOT__second__DOT__count;
    CData/*6:0*/ top__DOT__lfsr1__DOT__sreg;
    CData/*6:0*/ top__DOT__one_delay__DOT__count;
    CData/*6:0*/ __Vdly__top__DOT__lfsr1__DOT__sreg;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst;
    IData/*31:0*/ top__DOT__fsm__DOT__current_state;
    IData/*31:0*/ top__DOT__fsm__DOT__next_state;
    IData/*31:0*/ top__DOT__one_delay__DOT__current_state;
    IData/*31:0*/ top__DOT__one_delay__DOT__next_state;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
