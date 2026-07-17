// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vgpio_controller_tb.h for the primary calling header

#include "Vgpio_controller_tb__pch.h"
#include "Vgpio_controller_tb__Syms.h"
#include "Vgpio_controller_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vgpio_controller_tb___024root___eval_initial__TOP__Vtiming__1(Vgpio_controller_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio_controller_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vgpio_controller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x6c6c6572U;
    __Vtemp_1[2U] = 0x6e74726fU;
    __Vtemp_1[3U] = 0x6f5f636fU;
    __Vtemp_1[4U] = 0x677069U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(5, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    VL_WRITEF_NX("==============================================\n GPIO Controller Testbench\n==============================================\n",0);
    vlSelfRef.gpio_controller_tb__DOT__rst_n = 0U;
    vlSelfRef.gpio_controller_tb__DOT__gpio_data_i = 0U;
    vlSelfRef.gpio_controller_tb__DOT__gpio_dir_i = 0U;
    vlSelfRef.gpio_controller_tb__DOT__gpio_in_i = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/gpio_controller_tb.v", 
                                         92);
    vlSelfRef.gpio_controller_tb__DOT__rst_n = 1U;
    VL_WRITEF_NX("Test Case 1 : Output Mode\n",0);
    vlSelfRef.gpio_controller_tb__DOT__gpio_dir_i = 0xffU;
    vlSelfRef.gpio_controller_tb__DOT__gpio_data_i = 0xa5U;
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/gpio_controller_tb.v", 
                                         105);
    VL_WRITEF_NX("Test Case 2 : Input Mode\n",0);
    vlSelfRef.gpio_controller_tb__DOT__gpio_dir_i = 0U;
    vlSelfRef.gpio_controller_tb__DOT__gpio_in_i = 0x3cU;
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/gpio_controller_tb.v", 
                                         117);
    VL_WRITEF_NX("Test Case 3 : Mixed Mode\n",0);
    vlSelfRef.gpio_controller_tb__DOT__gpio_dir_i = 0xf0U;
    vlSelfRef.gpio_controller_tb__DOT__gpio_data_i = 0xa0U;
    vlSelfRef.gpio_controller_tb__DOT__gpio_in_i = 0xfU;
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/gpio_controller_tb.v", 
                                         130);
    VL_WRITEF_NX("----------------------------------------------\nGPIO Controller Verification Completed\n----------------------------------------------\n",0);
    VL_FINISH_MT("tb/gpio_controller_tb.v", 140, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vgpio_controller_tb___024root___dump_triggers__act(Vgpio_controller_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vgpio_controller_tb___024root___eval_triggers__act(Vgpio_controller_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio_controller_tb___024root___eval_triggers__act\n"); );
    Vgpio_controller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.gpio_controller_tb__DOT__gpio_data_i) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__gpio_controller_tb__DOT__gpio_data_i__0)));
    vlSelfRef.__VactTriggered.setBit(1U, ((IData)(vlSelfRef.gpio_controller_tb__DOT__gpio_dir_i) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__gpio_controller_tb__DOT__gpio_dir_i__0)));
    vlSelfRef.__VactTriggered.setBit(2U, ((IData)(vlSelfRef.gpio_controller_tb__DOT__gpio_in_i) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__gpio_controller_tb__DOT__gpio_in_i__0)));
    vlSelfRef.__VactTriggered.setBit(3U, ((IData)(vlSelfRef.gpio_controller_tb__DOT__gpio_input_o) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__gpio_controller_tb__DOT__gpio_input_o__0)));
    vlSelfRef.__VactTriggered.setBit(4U, ((IData)(vlSelfRef.gpio_controller_tb__DOT__gpio_out_o) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__gpio_controller_tb__DOT__gpio_out_o__0)));
    vlSelfRef.__VactTriggered.setBit(5U, ((IData)(vlSelfRef.gpio_controller_tb__DOT__rst_n) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__gpio_controller_tb__DOT__rst_n__0)));
    vlSelfRef.__VactTriggered.setBit(6U, ((IData)(vlSelfRef.gpio_controller_tb__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__gpio_controller_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(7U, ((~ (IData)(vlSelfRef.gpio_controller_tb__DOT__rst_n)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__gpio_controller_tb__DOT__rst_n__0)));
    vlSelfRef.__VactTriggered.setBit(8U, vlSelfRef.__VdlySched.awaitingCurrentTime());
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
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.setBit(0U, 1U);
        vlSelfRef.__VactTriggered.setBit(1U, 1U);
        vlSelfRef.__VactTriggered.setBit(2U, 1U);
        vlSelfRef.__VactTriggered.setBit(3U, 1U);
        vlSelfRef.__VactTriggered.setBit(4U, 1U);
        vlSelfRef.__VactTriggered.setBit(5U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vgpio_controller_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vgpio_controller_tb___024root___nba_sequent__TOP__0(Vgpio_controller_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio_controller_tb___024root___nba_sequent__TOP__0\n"); );
    Vgpio_controller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)))))) {
        VL_WRITEF_NX("Time=%0t | rst_n=%b | dir=%b | data=%b | gpio_in=%b | gpio_out=%b | sampled=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,1,
                     (IData)(vlSelfRef.gpio_controller_tb__DOT__rst_n),
                     8,vlSelfRef.gpio_controller_tb__DOT__gpio_dir_i,
                     8,(IData)(vlSelfRef.gpio_controller_tb__DOT__gpio_data_i),
                     8,vlSelfRef.gpio_controller_tb__DOT__gpio_in_i,
                     8,(IData)(vlSelfRef.gpio_controller_tb__DOT__gpio_out_o),
                     8,vlSelfRef.gpio_controller_tb__DOT__gpio_input_o);
    }
}
