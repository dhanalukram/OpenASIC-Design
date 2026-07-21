// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vopc_top_tb.h for the primary calling header

#include "Vopc_top_tb__pch.h"
#include "Vopc_top_tb___024root.h"

VL_ATTR_COLD void Vopc_top_tb___024root___eval_static(Vopc_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopc_top_tb___024root___eval_static\n"); );
    Vopc_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__opc_top_tb__DOT__clk__0 
        = vlSelfRef.opc_top_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__opc_top_tb__DOT__rst_n__0 
        = vlSelfRef.opc_top_tb__DOT__rst_n;
}

VL_ATTR_COLD void Vopc_top_tb___024root___eval_final(Vopc_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopc_top_tb___024root___eval_final\n"); );
    Vopc_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vopc_top_tb___024root___dump_triggers__stl(Vopc_top_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vopc_top_tb___024root___eval_phase__stl(Vopc_top_tb___024root* vlSelf);

VL_ATTR_COLD void Vopc_top_tb___024root___eval_settle(Vopc_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopc_top_tb___024root___eval_settle\n"); );
    Vopc_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vopc_top_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb/opc_top_tb.v", 20, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vopc_top_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vopc_top_tb___024root___dump_triggers__stl(Vopc_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopc_top_tb___024root___dump_triggers__stl\n"); );
    Vopc_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void Vopc_top_tb___024root___act_comb__TOP__0(Vopc_top_tb___024root* vlSelf);

VL_ATTR_COLD void Vopc_top_tb___024root___eval_stl(Vopc_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopc_top_tb___024root___eval_stl\n"); );
    Vopc_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vopc_top_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vopc_top_tb___024root___eval_triggers__stl(Vopc_top_tb___024root* vlSelf);

VL_ATTR_COLD bool Vopc_top_tb___024root___eval_phase__stl(Vopc_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopc_top_tb___024root___eval_phase__stl\n"); );
    Vopc_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vopc_top_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vopc_top_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vopc_top_tb___024root___dump_triggers__act(Vopc_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopc_top_tb___024root___dump_triggers__act\n"); );
    Vopc_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge opc_top_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge opc_top_tb.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vopc_top_tb___024root___dump_triggers__nba(Vopc_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopc_top_tb___024root___dump_triggers__nba\n"); );
    Vopc_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge opc_top_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge opc_top_tb.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vopc_top_tb___024root___ctor_var_reset(Vopc_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopc_top_tb___024root___ctor_var_reset\n"); );
    Vopc_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->opc_top_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 167864843637129619ull);
    vlSelf->opc_top_tb__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6902350752780038861ull);
    vlSelf->opc_top_tb__DOT__write_en_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3977091644622260922ull);
    vlSelf->opc_top_tb__DOT__read_en_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7694736309590126213ull);
    vlSelf->opc_top_tb__DOT__addr_i = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12649227631421824428ull);
    vlSelf->opc_top_tb__DOT__wdata_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6768531353069016160ull);
    vlSelf->opc_top_tb__DOT__rdata_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5305905881327439757ull);
    vlSelf->opc_top_tb__DOT__gpio_in_i = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14983074434353568172ull);
    vlSelf->opc_top_tb__DOT__gpio_out_o = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17042144946526487679ull);
    vlSelf->opc_top_tb__DOT__gpio_input_o = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10821987964428263728ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->opc_top_tb__DOT__dut__DOT__u_crb__DOT__reg_file[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13904997963673771048ull);
    }
    vlSelf->opc_top_tb__DOT__dut__DOT__u_crb__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7075618456190946575ull);
    vlSelf->opc_top_tb__DOT__dut__DOT__u_gpio__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14647719720117145724ull);
    vlSelf->__Vtrigprevexpr___TOP__opc_top_tb__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1781631333905676728ull);
    vlSelf->__Vtrigprevexpr___TOP__opc_top_tb__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1943059809176932994ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
