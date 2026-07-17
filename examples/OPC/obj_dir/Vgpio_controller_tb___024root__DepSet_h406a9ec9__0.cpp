// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vgpio_controller_tb.h for the primary calling header

#include "Vgpio_controller_tb__pch.h"
#include "Vgpio_controller_tb___024root.h"

VlCoroutine Vgpio_controller_tb___024root___eval_initial__TOP__Vtiming__0(Vgpio_controller_tb___024root* vlSelf);
VlCoroutine Vgpio_controller_tb___024root___eval_initial__TOP__Vtiming__1(Vgpio_controller_tb___024root* vlSelf);

void Vgpio_controller_tb___024root___eval_initial(Vgpio_controller_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio_controller_tb___024root___eval_initial\n"); );
    Vgpio_controller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vgpio_controller_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vgpio_controller_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vgpio_controller_tb___024root___eval_initial__TOP__Vtiming__0(Vgpio_controller_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio_controller_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vgpio_controller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gpio_controller_tb__DOT__clk = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "tb/gpio_controller_tb.v", 
                                             64);
        vlSelfRef.gpio_controller_tb__DOT__clk = (1U 
                                                  & (~ (IData)(vlSelfRef.gpio_controller_tb__DOT__clk)));
    }
}

void Vgpio_controller_tb___024root___eval_act(Vgpio_controller_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio_controller_tb___024root___eval_act\n"); );
    Vgpio_controller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vgpio_controller_tb___024root___nba_sequent__TOP__0(Vgpio_controller_tb___024root* vlSelf);
void Vgpio_controller_tb___024root___nba_sequent__TOP__1(Vgpio_controller_tb___024root* vlSelf);

void Vgpio_controller_tb___024root___eval_nba(Vgpio_controller_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio_controller_tb___024root___eval_nba\n"); );
    Vgpio_controller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x3fULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vgpio_controller_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0xc0ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vgpio_controller_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vgpio_controller_tb___024root___nba_sequent__TOP__1(Vgpio_controller_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio_controller_tb___024root___nba_sequent__TOP__1\n"); );
    Vgpio_controller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.gpio_controller_tb__DOT__rst_n) {
        vlSelfRef.gpio_controller_tb__DOT__gpio_input_o 
            = vlSelfRef.gpio_controller_tb__DOT__gpio_in_i;
        vlSelfRef.gpio_controller_tb__DOT__gpio_out_o 
            = ((IData)(vlSelfRef.gpio_controller_tb__DOT__gpio_data_i) 
               & (IData)(vlSelfRef.gpio_controller_tb__DOT__gpio_dir_i));
    } else {
        vlSelfRef.gpio_controller_tb__DOT__gpio_input_o = 0U;
        vlSelfRef.gpio_controller_tb__DOT__gpio_out_o = 0U;
    }
}

void Vgpio_controller_tb___024root___timing_resume(Vgpio_controller_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio_controller_tb___024root___timing_resume\n"); );
    Vgpio_controller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x100ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vgpio_controller_tb___024root___eval_triggers__act(Vgpio_controller_tb___024root* vlSelf);

bool Vgpio_controller_tb___024root___eval_phase__act(Vgpio_controller_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio_controller_tb___024root___eval_phase__act\n"); );
    Vgpio_controller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<9> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vgpio_controller_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vgpio_controller_tb___024root___timing_resume(vlSelf);
        Vgpio_controller_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vgpio_controller_tb___024root___eval_phase__nba(Vgpio_controller_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio_controller_tb___024root___eval_phase__nba\n"); );
    Vgpio_controller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vgpio_controller_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vgpio_controller_tb___024root___dump_triggers__nba(Vgpio_controller_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vgpio_controller_tb___024root___dump_triggers__act(Vgpio_controller_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vgpio_controller_tb___024root___eval(Vgpio_controller_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio_controller_tb___024root___eval\n"); );
    Vgpio_controller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vgpio_controller_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/gpio_controller_tb.v", 23, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vgpio_controller_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/gpio_controller_tb.v", 23, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vgpio_controller_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vgpio_controller_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vgpio_controller_tb___024root___eval_debug_assertions(Vgpio_controller_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio_controller_tb___024root___eval_debug_assertions\n"); );
    Vgpio_controller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
