// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconfiguration_register_block_tb.h for the primary calling header

#include "Vconfiguration_register_block_tb__pch.h"
#include "Vconfiguration_register_block_tb___024root.h"

VL_ATTR_COLD void Vconfiguration_register_block_tb___024root___eval_static(Vconfiguration_register_block_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfiguration_register_block_tb___024root___eval_static\n"); );
    Vconfiguration_register_block_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__configuration_register_block_tb__DOT__clk__0 
        = vlSelfRef.configuration_register_block_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__configuration_register_block_tb__DOT__rst_n__0 
        = vlSelfRef.configuration_register_block_tb__DOT__rst_n;
}

VL_ATTR_COLD void Vconfiguration_register_block_tb___024root___eval_final(Vconfiguration_register_block_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfiguration_register_block_tb___024root___eval_final\n"); );
    Vconfiguration_register_block_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfiguration_register_block_tb___024root___dump_triggers__stl(Vconfiguration_register_block_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vconfiguration_register_block_tb___024root___eval_phase__stl(Vconfiguration_register_block_tb___024root* vlSelf);

VL_ATTR_COLD void Vconfiguration_register_block_tb___024root___eval_settle(Vconfiguration_register_block_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfiguration_register_block_tb___024root___eval_settle\n"); );
    Vconfiguration_register_block_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vconfiguration_register_block_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb/configuration_register_block_tb.v", 20, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vconfiguration_register_block_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfiguration_register_block_tb___024root___dump_triggers__stl(Vconfiguration_register_block_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfiguration_register_block_tb___024root___dump_triggers__stl\n"); );
    Vconfiguration_register_block_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vconfiguration_register_block_tb___024root___act_comb__TOP__0(Vconfiguration_register_block_tb___024root* vlSelf);

VL_ATTR_COLD void Vconfiguration_register_block_tb___024root___eval_stl(Vconfiguration_register_block_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfiguration_register_block_tb___024root___eval_stl\n"); );
    Vconfiguration_register_block_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vconfiguration_register_block_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vconfiguration_register_block_tb___024root___eval_triggers__stl(Vconfiguration_register_block_tb___024root* vlSelf);

VL_ATTR_COLD bool Vconfiguration_register_block_tb___024root___eval_phase__stl(Vconfiguration_register_block_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfiguration_register_block_tb___024root___eval_phase__stl\n"); );
    Vconfiguration_register_block_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vconfiguration_register_block_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vconfiguration_register_block_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfiguration_register_block_tb___024root___dump_triggers__act(Vconfiguration_register_block_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfiguration_register_block_tb___024root___dump_triggers__act\n"); );
    Vconfiguration_register_block_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge configuration_register_block_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge configuration_register_block_tb.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfiguration_register_block_tb___024root___dump_triggers__nba(Vconfiguration_register_block_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfiguration_register_block_tb___024root___dump_triggers__nba\n"); );
    Vconfiguration_register_block_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge configuration_register_block_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge configuration_register_block_tb.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vconfiguration_register_block_tb___024root___ctor_var_reset(Vconfiguration_register_block_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfiguration_register_block_tb___024root___ctor_var_reset\n"); );
    Vconfiguration_register_block_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->configuration_register_block_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12037770718675076612ull);
    vlSelf->configuration_register_block_tb__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17165414886747796364ull);
    vlSelf->configuration_register_block_tb__DOT__write_en_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7336508516335928297ull);
    vlSelf->configuration_register_block_tb__DOT__read_en_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12654699090578098768ull);
    vlSelf->configuration_register_block_tb__DOT__addr_i = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14351477913503751374ull);
    vlSelf->configuration_register_block_tb__DOT__wdata_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9070951713062469219ull);
    vlSelf->configuration_register_block_tb__DOT__rdata_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13184136078163824677ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->configuration_register_block_tb__DOT__dut__DOT__reg_file[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5751399023529087305ull);
    }
    vlSelf->__Vtrigprevexpr___TOP__configuration_register_block_tb__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7717324328385086224ull);
    vlSelf->__Vtrigprevexpr___TOP__configuration_register_block_tb__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3098086388918478581ull);
}
