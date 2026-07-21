// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vopc_top_tb.h for the primary calling header

#include "Vopc_top_tb__pch.h"
#include "Vopc_top_tb__Syms.h"
#include "Vopc_top_tb___024root.h"

VL_ATTR_COLD void Vopc_top_tb___024root___eval_initial__TOP(Vopc_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopc_top_tb___024root___eval_initial__TOP\n"); );
    Vopc_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    vlSelfRef.opc_top_tb__DOT__clk = 0U;
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x5f746f70U;
    __Vtemp_1[2U] = 0x6f7063U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vopc_top_tb___024root___dump_triggers__stl(Vopc_top_tb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vopc_top_tb___024root___eval_triggers__stl(Vopc_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopc_top_tb___024root___eval_triggers__stl\n"); );
    Vopc_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vopc_top_tb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
