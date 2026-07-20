// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconfiguration_register_block_tb.h for the primary calling header

#include "Vconfiguration_register_block_tb__pch.h"
#include "Vconfiguration_register_block_tb__Syms.h"
#include "Vconfiguration_register_block_tb___024root.h"

extern const VlWide<8>/*255:0*/ Vconfiguration_register_block_tb__ConstPool__CONST_hc631b9ba_0;

VL_ATTR_COLD void Vconfiguration_register_block_tb___024root___eval_initial__TOP(Vconfiguration_register_block_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfiguration_register_block_tb___024root___eval_initial__TOP\n"); );
    Vconfiguration_register_block_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.configuration_register_block_tb__DOT__clk = 0U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(8, Vconfiguration_register_block_tb__ConstPool__CONST_hc631b9ba_0));
    vlSymsp->_traceDumpOpen();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfiguration_register_block_tb___024root___dump_triggers__stl(Vconfiguration_register_block_tb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vconfiguration_register_block_tb___024root___eval_triggers__stl(Vconfiguration_register_block_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfiguration_register_block_tb___024root___eval_triggers__stl\n"); );
    Vconfiguration_register_block_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vconfiguration_register_block_tb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
