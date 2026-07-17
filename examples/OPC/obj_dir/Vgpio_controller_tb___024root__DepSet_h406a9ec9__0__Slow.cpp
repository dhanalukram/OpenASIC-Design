// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vgpio_controller_tb.h for the primary calling header

#include "Vgpio_controller_tb__pch.h"
#include "Vgpio_controller_tb___024root.h"

VL_ATTR_COLD void Vgpio_controller_tb___024root___eval_static(Vgpio_controller_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio_controller_tb___024root___eval_static\n"); );
    Vgpio_controller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__gpio_controller_tb__DOT__gpio_data_i__0 
        = vlSelfRef.gpio_controller_tb__DOT__gpio_data_i;
    vlSelfRef.__Vtrigprevexpr___TOP__gpio_controller_tb__DOT__gpio_dir_i__0 
        = vlSelfRef.gpio_controller_tb__DOT__gpio_dir_i;
    vlSelfRef.__Vtrigprevexpr___TOP__gpio_controller_tb__DOT__gpio_in_i__0 
        = vlSelfRef.gpio_controller_tb__DOT__gpio_in_i;
    vlSelfRef.__Vtrigprevexpr___TOP__gpio_controller_tb__DOT__gpio_input_o__0 
        = vlSelfRef.gpio_controller_tb__DOT__gpio_input_o;
    vlSelfRef.__Vtrigprevexpr___TOP__gpio_controller_tb__DOT__gpio_out_o__0 
        = vlSelfRef.gpio_controller_tb__DOT__gpio_out_o;
    vlSelfRef.__Vtrigprevexpr___TOP__gpio_controller_tb__DOT__rst_n__0 
        = vlSelfRef.gpio_controller_tb__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__gpio_controller_tb__DOT__clk__0 
        = vlSelfRef.gpio_controller_tb__DOT__clk;
}

VL_ATTR_COLD void Vgpio_controller_tb___024root___eval_final(Vgpio_controller_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio_controller_tb___024root___eval_final\n"); );
    Vgpio_controller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vgpio_controller_tb___024root___eval_settle(Vgpio_controller_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio_controller_tb___024root___eval_settle\n"); );
    Vgpio_controller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vgpio_controller_tb___024root___dump_triggers__act(Vgpio_controller_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio_controller_tb___024root___dump_triggers__act\n"); );
    Vgpio_controller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @( gpio_controller_tb.gpio_data_i)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @( gpio_controller_tb.gpio_dir_i)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @( gpio_controller_tb.gpio_in_i)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @( gpio_controller_tb.gpio_input_o)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @( gpio_controller_tb.gpio_out_o)\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @( gpio_controller_tb.rst_n)\n");
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @(posedge gpio_controller_tb.clk)\n");
    }
    if ((0x80ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @(negedge gpio_controller_tb.rst_n)\n");
    }
    if ((0x100ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vgpio_controller_tb___024root___dump_triggers__nba(Vgpio_controller_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio_controller_tb___024root___dump_triggers__nba\n"); );
    Vgpio_controller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @( gpio_controller_tb.gpio_data_i)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @( gpio_controller_tb.gpio_dir_i)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @( gpio_controller_tb.gpio_in_i)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @( gpio_controller_tb.gpio_input_o)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @( gpio_controller_tb.gpio_out_o)\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @( gpio_controller_tb.rst_n)\n");
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @(posedge gpio_controller_tb.clk)\n");
    }
    if ((0x80ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @(negedge gpio_controller_tb.rst_n)\n");
    }
    if ((0x100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vgpio_controller_tb___024root___ctor_var_reset(Vgpio_controller_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio_controller_tb___024root___ctor_var_reset\n"); );
    Vgpio_controller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->gpio_controller_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7588499142847301894ull);
    vlSelf->gpio_controller_tb__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10757482413499118323ull);
    vlSelf->gpio_controller_tb__DOT__gpio_data_i = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3685502384878712114ull);
    vlSelf->gpio_controller_tb__DOT__gpio_dir_i = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6718169646464879394ull);
    vlSelf->gpio_controller_tb__DOT__gpio_in_i = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15045845550942202210ull);
    vlSelf->gpio_controller_tb__DOT__gpio_out_o = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 49177104433376342ull);
    vlSelf->gpio_controller_tb__DOT__gpio_input_o = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1264650754812629318ull);
    vlSelf->gpio_controller_tb__DOT__uut__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4814109188242103420ull);
    vlSelf->__Vtrigprevexpr___TOP__gpio_controller_tb__DOT__gpio_data_i__0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8923990194493662591ull);
    vlSelf->__Vtrigprevexpr___TOP__gpio_controller_tb__DOT__gpio_dir_i__0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1229977440981447893ull);
    vlSelf->__Vtrigprevexpr___TOP__gpio_controller_tb__DOT__gpio_in_i__0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2056974190612097440ull);
    vlSelf->__Vtrigprevexpr___TOP__gpio_controller_tb__DOT__gpio_input_o__0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16774585194026963232ull);
    vlSelf->__Vtrigprevexpr___TOP__gpio_controller_tb__DOT__gpio_out_o__0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10515516728700920143ull);
    vlSelf->__Vtrigprevexpr___TOP__gpio_controller_tb__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6720455402088619503ull);
    vlSelf->__Vtrigprevexpr___TOP__gpio_controller_tb__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11759324727735849097ull);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
