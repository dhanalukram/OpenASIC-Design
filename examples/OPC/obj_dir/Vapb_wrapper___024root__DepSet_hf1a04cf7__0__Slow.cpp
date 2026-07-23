// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vapb_wrapper.h for the primary calling header

#include "Vapb_wrapper__pch.h"
#include "Vapb_wrapper___024root.h"

VL_ATTR_COLD void Vapb_wrapper___024root___eval_static(Vapb_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_wrapper___024root___eval_static\n"); );
    Vapb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__apb_wrapper_tb__DOT__PCLK__0 
        = vlSelfRef.apb_wrapper_tb__DOT__PCLK;
    vlSelfRef.__Vtrigprevexpr___TOP__apb_wrapper_tb__DOT__PRESETn__0 
        = vlSelfRef.apb_wrapper_tb__DOT__PRESETn;
}

VL_ATTR_COLD void Vapb_wrapper___024root___eval_final(Vapb_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_wrapper___024root___eval_final\n"); );
    Vapb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vapb_wrapper___024root___dump_triggers__stl(Vapb_wrapper___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vapb_wrapper___024root___eval_phase__stl(Vapb_wrapper___024root* vlSelf);

VL_ATTR_COLD void Vapb_wrapper___024root___eval_settle(Vapb_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_wrapper___024root___eval_settle\n"); );
    Vapb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vapb_wrapper___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb/apb_wrapper_tb.v", 16, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vapb_wrapper___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vapb_wrapper___024root___dump_triggers__stl(Vapb_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_wrapper___024root___dump_triggers__stl\n"); );
    Vapb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void Vapb_wrapper___024root___act_sequent__TOP__0(Vapb_wrapper___024root* vlSelf);

VL_ATTR_COLD void Vapb_wrapper___024root___eval_stl(Vapb_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_wrapper___024root___eval_stl\n"); );
    Vapb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vapb_wrapper___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vapb_wrapper___024root___eval_triggers__stl(Vapb_wrapper___024root* vlSelf);

VL_ATTR_COLD bool Vapb_wrapper___024root___eval_phase__stl(Vapb_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_wrapper___024root___eval_phase__stl\n"); );
    Vapb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vapb_wrapper___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vapb_wrapper___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vapb_wrapper___024root___dump_triggers__act(Vapb_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_wrapper___024root___dump_triggers__act\n"); );
    Vapb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge apb_wrapper_tb.PCLK)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge apb_wrapper_tb.PRESETn)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vapb_wrapper___024root___dump_triggers__nba(Vapb_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_wrapper___024root___dump_triggers__nba\n"); );
    Vapb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge apb_wrapper_tb.PCLK)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge apb_wrapper_tb.PRESETn)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vapb_wrapper___024root___ctor_var_reset(Vapb_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_wrapper___024root___ctor_var_reset\n"); );
    Vapb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->apb_wrapper_tb__DOT__PCLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17379528540983223885ull);
    vlSelf->apb_wrapper_tb__DOT__PRESETn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7421460401563081304ull);
    vlSelf->apb_wrapper_tb__DOT__PSEL = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 743533283867171851ull);
    vlSelf->apb_wrapper_tb__DOT__PENABLE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6476540501668097173ull);
    vlSelf->apb_wrapper_tb__DOT__PWRITE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12887186529307231255ull);
    vlSelf->apb_wrapper_tb__DOT__PRDATA = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12707900062883424492ull);
    vlSelf->apb_wrapper_tb__DOT__write_en_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14054347361451957476ull);
    vlSelf->apb_wrapper_tb__DOT__read_en_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4166744643161967612ull);
    vlSelf->apb_wrapper_tb__DOT__rdata_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12430065149209204622ull);
    vlSelf->apb_wrapper_tb__DOT__dut__DOT__apb_access_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12441625270331648942ull);
    vlSelf->apb_wrapper_tb__DOT__dut__DOT__apb_write_access_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2894121907463173669ull);
    vlSelf->apb_wrapper_tb__DOT__dut__DOT__apb_read_access_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13969936499251662468ull);
    vlSelf->__Vtrigprevexpr___TOP__apb_wrapper_tb__DOT__PCLK__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17300796762250594903ull);
    vlSelf->__Vtrigprevexpr___TOP__apb_wrapper_tb__DOT__PRESETn__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18314460043279945549ull);
}
