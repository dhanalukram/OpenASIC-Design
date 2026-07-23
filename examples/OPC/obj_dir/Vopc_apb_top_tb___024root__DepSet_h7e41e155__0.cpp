// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vopc_apb_top_tb.h for the primary calling header

#include "Vopc_apb_top_tb__pch.h"
#include "Vopc_apb_top_tb__Syms.h"
#include "Vopc_apb_top_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vopc_apb_top_tb___024root___eval_initial__TOP__Vtiming__1(Vopc_apb_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopc_apb_top_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vopc_apb_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "tb/opc_apb_top_tb.v", 
                                             103);
        vlSelfRef.opc_apb_top_tb__DOT__PCLK = (1U & 
                                               (~ (IData)(vlSelfRef.opc_apb_top_tb__DOT__PCLK)));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vopc_apb_top_tb___024root___dump_triggers__act(Vopc_apb_top_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vopc_apb_top_tb___024root___eval_triggers__act(Vopc_apb_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopc_apb_top_tb___024root___eval_triggers__act\n"); );
    Vopc_apb_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.opc_apb_top_tb__DOT__PCLK) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__opc_apb_top_tb__DOT__PCLK__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSelfRef.opc_apb_top_tb__DOT__PRESETn)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__opc_apb_top_tb__DOT__PRESETn__0)));
    vlSelfRef.__VactTriggered.setBit(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__opc_apb_top_tb__DOT__PCLK__0 
        = vlSelfRef.opc_apb_top_tb__DOT__PCLK;
    vlSelfRef.__Vtrigprevexpr___TOP__opc_apb_top_tb__DOT__PRESETn__0 
        = vlSelfRef.opc_apb_top_tb__DOT__PRESETn;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vopc_apb_top_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
