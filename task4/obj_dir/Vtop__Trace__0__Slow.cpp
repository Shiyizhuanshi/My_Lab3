// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+10,"clk", false,-1);
    tracep->declBit(c+11,"rst", false,-1);
    tracep->declBus(c+12,"N", false,-1, 6,0);
    tracep->declBit(c+13,"trigger", false,-1);
    tracep->declBus(c+14,"data_out", false,-1, 7,0);
    tracep->declBit(c+15,"test", false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+21,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+10,"clk", false,-1);
    tracep->declBit(c+11,"rst", false,-1);
    tracep->declBus(c+12,"N", false,-1, 6,0);
    tracep->declBit(c+13,"trigger", false,-1);
    tracep->declBus(c+14,"data_out", false,-1, 7,0);
    tracep->declBit(c+15,"test", false,-1);
    tracep->declBit(c+6,"cmd_seq", false,-1);
    tracep->declBit(c+7,"cmd_delay", false,-1);
    tracep->declBit(c+1,"tick", false,-1);
    tracep->declBit(c+2,"time_out", false,-1);
    tracep->declBit(c+16,"mux_out", false,-1);
    tracep->declBus(c+8,"k", false,-1, 7,1);
    tracep->declBit(c+9,"random", false,-1);
    tracep->pushNamePrefix("fsm ");
    tracep->declBit(c+11,"rst", false,-1);
    tracep->declBit(c+16,"en", false,-1);
    tracep->declBit(c+10,"clk", false,-1);
    tracep->declBit(c+13,"trigger", false,-1);
    tracep->declBit(c+7,"cmd_delay", false,-1);
    tracep->declBit(c+6,"cmd_seq", false,-1);
    tracep->declBus(c+14,"data_out", false,-1, 7,0);
    tracep->declBus(c+17,"current_state", false,-1, 31,0);
    tracep->declBus(c+18,"next_state", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lfsr1 ");
    tracep->declBit(c+10,"clk", false,-1);
    tracep->declBit(c+22,"en", false,-1);
    tracep->declBit(c+11,"rst", false,-1);
    tracep->declBus(c+8,"data_out", false,-1, 7,1);
    tracep->declBus(c+8,"random", false,-1, 7,1);
    tracep->declBus(c+8,"sreg", false,-1, 7,1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux ");
    tracep->declBit(c+1,"tick", false,-1);
    tracep->declBit(c+2,"time_out", false,-1);
    tracep->declBit(c+6,"cmd_seq", false,-1);
    tracep->declBit(c+16,"mux_out", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("one_delay ");
    tracep->declBus(c+21,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+10,"clk", false,-1);
    tracep->declBit(c+11,"rst", false,-1);
    tracep->declBit(c+7,"trigger", false,-1);
    tracep->declBus(c+8,"n", false,-1, 6,0);
    tracep->declBit(c+2,"time_out", false,-1);
    tracep->declBus(c+3,"count", false,-1, 6,0);
    tracep->declBus(c+4,"current_state", false,-1, 31,0);
    tracep->declBus(c+19,"next_state", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("second ");
    tracep->declBus(c+23,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+10,"clk", false,-1);
    tracep->declBit(c+11,"rst", false,-1);
    tracep->declBit(c+6,"en", false,-1);
    tracep->declBus(c+20,"N", false,-1, 4,0);
    tracep->declBit(c+1,"tick", false,-1);
    tracep->declBus(c+5,"count", false,-1, 4,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->top__DOT__tick));
    bufp->fullBit(oldp+2,(vlSelf->top__DOT__time_out));
    bufp->fullCData(oldp+3,(vlSelf->top__DOT__one_delay__DOT__count),7);
    bufp->fullIData(oldp+4,(vlSelf->top__DOT__one_delay__DOT__current_state),32);
    bufp->fullCData(oldp+5,(vlSelf->top__DOT__second__DOT__count),5);
    bufp->fullBit(oldp+6,(vlSelf->top__DOT__cmd_seq));
    bufp->fullBit(oldp+7,(vlSelf->top__DOT__cmd_delay));
    bufp->fullCData(oldp+8,(vlSelf->top__DOT__lfsr1__DOT__sreg),7);
    bufp->fullBit(oldp+9,((1U & (IData)(vlSelf->top__DOT__lfsr1__DOT__sreg))));
    bufp->fullBit(oldp+10,(vlSelf->clk));
    bufp->fullBit(oldp+11,(vlSelf->rst));
    bufp->fullCData(oldp+12,(vlSelf->N),7);
    bufp->fullBit(oldp+13,(vlSelf->trigger));
    bufp->fullCData(oldp+14,(vlSelf->data_out),8);
    bufp->fullBit(oldp+15,(vlSelf->test));
    bufp->fullBit(oldp+16,(((IData)(vlSelf->top__DOT__cmd_seq)
                             ? (IData)(vlSelf->top__DOT__tick)
                             : ((~ (IData)(vlSelf->top__DOT__cmd_seq)) 
                                & (IData)(vlSelf->top__DOT__time_out)))));
    bufp->fullIData(oldp+17,(vlSelf->top__DOT__fsm__DOT__current_state),32);
    bufp->fullIData(oldp+18,((((((((((0U == vlSelf->top__DOT__fsm__DOT__current_state) 
                                     | (1U == vlSelf->top__DOT__fsm__DOT__current_state)) 
                                    | (2U == vlSelf->top__DOT__fsm__DOT__current_state)) 
                                   | (3U == vlSelf->top__DOT__fsm__DOT__current_state)) 
                                  | (4U == vlSelf->top__DOT__fsm__DOT__current_state)) 
                                 | (5U == vlSelf->top__DOT__fsm__DOT__current_state)) 
                                | (6U == vlSelf->top__DOT__fsm__DOT__current_state)) 
                               | (7U == vlSelf->top__DOT__fsm__DOT__current_state))
                               ? ((0U == vlSelf->top__DOT__fsm__DOT__current_state)
                                   ? ((IData)(vlSelf->trigger)
                                       ? 1U : vlSelf->top__DOT__fsm__DOT__current_state)
                                   : ((1U == vlSelf->top__DOT__fsm__DOT__current_state)
                                       ? 2U : ((2U 
                                                == vlSelf->top__DOT__fsm__DOT__current_state)
                                                ? 3U
                                                : (
                                                   (3U 
                                                    == vlSelf->top__DOT__fsm__DOT__current_state)
                                                    ? 4U
                                                    : 
                                                   ((4U 
                                                     == vlSelf->top__DOT__fsm__DOT__current_state)
                                                     ? 5U
                                                     : 
                                                    ((5U 
                                                      == vlSelf->top__DOT__fsm__DOT__current_state)
                                                      ? 6U
                                                      : 
                                                     ((6U 
                                                       == vlSelf->top__DOT__fsm__DOT__current_state)
                                                       ? 7U
                                                       : 8U)))))))
                               : 0U)),32);
    bufp->fullIData(oldp+19,(((0U == vlSelf->top__DOT__one_delay__DOT__current_state)
                               ? ((IData)(vlSelf->top__DOT__cmd_delay)
                                   ? 1U : vlSelf->top__DOT__one_delay__DOT__current_state)
                               : ((1U == vlSelf->top__DOT__one_delay__DOT__current_state)
                                   ? ((0U == (IData)(vlSelf->top__DOT__one_delay__DOT__count))
                                       ? 2U : vlSelf->top__DOT__one_delay__DOT__current_state)
                                   : ((2U == vlSelf->top__DOT__one_delay__DOT__current_state)
                                       ? ((IData)(vlSelf->top__DOT__cmd_delay)
                                           ? 3U : 0U)
                                       : ((3U == vlSelf->top__DOT__one_delay__DOT__current_state)
                                           ? ((IData)(vlSelf->top__DOT__cmd_delay)
                                               ? vlSelf->top__DOT__one_delay__DOT__current_state
                                               : 0U)
                                           : 0U))))),32);
    bufp->fullCData(oldp+20,((0x1fU & (IData)(vlSelf->N))),5);
    bufp->fullIData(oldp+21,(7U),32);
    bufp->fullBit(oldp+22,(1U));
    bufp->fullIData(oldp+23,(5U),32);
}
