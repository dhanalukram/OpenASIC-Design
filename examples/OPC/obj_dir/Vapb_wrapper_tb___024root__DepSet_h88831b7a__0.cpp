// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vapb_wrapper_tb.h for the primary calling header

#include "Vapb_wrapper_tb__pch.h"
#include "Vapb_wrapper_tb___024root.h"

VlCoroutine Vapb_wrapper_tb___024root___eval_initial__TOP__Vtiming__0(Vapb_wrapper_tb___024root* vlSelf);
VlCoroutine Vapb_wrapper_tb___024root___eval_initial__TOP__Vtiming__1(Vapb_wrapper_tb___024root* vlSelf);

void Vapb_wrapper_tb___024root___eval_initial(Vapb_wrapper_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_wrapper_tb___024root___eval_initial\n"); );
    Vapb_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vapb_wrapper_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vapb_wrapper_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vapb_wrapper_tb___024root___eval_initial__TOP__Vtiming__0(Vapb_wrapper_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_wrapper_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vapb_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.apb_wrapper_tb__DOT__PCLK = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "tb/apb_wrapper_tb.v", 
                                             96);
        vlSelfRef.apb_wrapper_tb__DOT__PCLK = (1U & 
                                               (~ (IData)(vlSelfRef.apb_wrapper_tb__DOT__PCLK)));
    }
}

void Vapb_wrapper_tb___024root___act_sequent__TOP__0(Vapb_wrapper_tb___024root* vlSelf);

void Vapb_wrapper_tb___024root___eval_act(Vapb_wrapper_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_wrapper_tb___024root___eval_act\n"); );
    Vapb_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vapb_wrapper_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vapb_wrapper_tb___024root___act_sequent__TOP__0(Vapb_wrapper_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_wrapper_tb___024root___act_sequent__TOP__0\n"); );
    Vapb_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.apb_wrapper_tb__DOT__dut__DOT__apb_access_w 
        = ((IData)(vlSelfRef.apb_wrapper_tb__DOT__PENABLE) 
           & (IData)(vlSelfRef.apb_wrapper_tb__DOT__PSEL));
    vlSelfRef.apb_wrapper_tb__DOT__dut__DOT__apb_write_access_w 
        = ((IData)(vlSelfRef.apb_wrapper_tb__DOT__dut__DOT__apb_access_w) 
           & (IData)(vlSelfRef.apb_wrapper_tb__DOT__PWRITE));
    vlSelfRef.apb_wrapper_tb__DOT__dut__DOT__apb_read_access_w 
        = ((~ (IData)(vlSelfRef.apb_wrapper_tb__DOT__PWRITE)) 
           & (IData)(vlSelfRef.apb_wrapper_tb__DOT__dut__DOT__apb_access_w));
}

void Vapb_wrapper_tb___024root___nba_sequent__TOP__0(Vapb_wrapper_tb___024root* vlSelf);
void Vapb_wrapper_tb___024root___nba_sequent__TOP__1(Vapb_wrapper_tb___024root* vlSelf);
void Vapb_wrapper_tb___024root___nba_sequent__TOP__2(Vapb_wrapper_tb___024root* vlSelf);

void Vapb_wrapper_tb___024root___eval_nba(Vapb_wrapper_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_wrapper_tb___024root___eval_nba\n"); );
    Vapb_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vapb_wrapper_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vapb_wrapper_tb___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vapb_wrapper_tb___024root___nba_sequent__TOP__2(vlSelf);
    }
}

VL_INLINE_OPT void Vapb_wrapper_tb___024root___nba_sequent__TOP__0(Vapb_wrapper_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_wrapper_tb___024root___nba_sequent__TOP__0\n"); );
    Vapb_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.apb_wrapper_tb__DOT__dut__DOT__apb_access_w 
        = ((IData)(vlSelfRef.apb_wrapper_tb__DOT__PENABLE) 
           & (IData)(vlSelfRef.apb_wrapper_tb__DOT__PSEL));
}

VL_INLINE_OPT void Vapb_wrapper_tb___024root___nba_sequent__TOP__1(Vapb_wrapper_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_wrapper_tb___024root___nba_sequent__TOP__1\n"); );
    Vapb_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.apb_wrapper_tb__DOT__PSLVERR = 0U;
    if (vlSelfRef.apb_wrapper_tb__DOT__PRESETn) {
        vlSelfRef.apb_wrapper_tb__DOT__write_en_o = 0U;
        vlSelfRef.apb_wrapper_tb__DOT__read_en_o = 0U;
        if ((1U & (~ (IData)(vlSelfRef.apb_wrapper_tb__DOT__dut__DOT__apb_write_access_w)))) {
            if (vlSelfRef.apb_wrapper_tb__DOT__dut__DOT__apb_read_access_w) {
                vlSelfRef.apb_wrapper_tb__DOT__read_en_o = 1U;
                vlSelfRef.apb_wrapper_tb__DOT__PRDATA 
                    = vlSelfRef.apb_wrapper_tb__DOT__rdata_i;
            }
        }
        vlSelfRef.apb_wrapper_tb__DOT__PREADY = 0U;
        if (vlSelfRef.apb_wrapper_tb__DOT__dut__DOT__apb_write_access_w) {
            vlSelfRef.apb_wrapper_tb__DOT__write_en_o = 1U;
            vlSelfRef.apb_wrapper_tb__DOT__wdata_o 
                = vlSelfRef.apb_wrapper_tb__DOT__PWDATA;
            vlSelfRef.apb_wrapper_tb__DOT__PREADY = 1U;
            vlSelfRef.apb_wrapper_tb__DOT__addr_o = 
                (0xffU & (vlSelfRef.apb_wrapper_tb__DOT__PADDR 
                          >> 2U));
        } else if (vlSelfRef.apb_wrapper_tb__DOT__dut__DOT__apb_read_access_w) {
            vlSelfRef.apb_wrapper_tb__DOT__PREADY = 1U;
            vlSelfRef.apb_wrapper_tb__DOT__addr_o = 
                (0xffU & (vlSelfRef.apb_wrapper_tb__DOT__PADDR 
                          >> 2U));
        }
    } else {
        vlSelfRef.apb_wrapper_tb__DOT__write_en_o = 0U;
        vlSelfRef.apb_wrapper_tb__DOT__wdata_o = 0U;
        vlSelfRef.apb_wrapper_tb__DOT__read_en_o = 0U;
        vlSelfRef.apb_wrapper_tb__DOT__PREADY = 0U;
        vlSelfRef.apb_wrapper_tb__DOT__addr_o = 0U;
        vlSelfRef.apb_wrapper_tb__DOT__PRDATA = 0U;
    }
}

VL_INLINE_OPT void Vapb_wrapper_tb___024root___nba_sequent__TOP__2(Vapb_wrapper_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_wrapper_tb___024root___nba_sequent__TOP__2\n"); );
    Vapb_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.apb_wrapper_tb__DOT__dut__DOT__apb_read_access_w 
        = ((~ (IData)(vlSelfRef.apb_wrapper_tb__DOT__PWRITE)) 
           & (IData)(vlSelfRef.apb_wrapper_tb__DOT__dut__DOT__apb_access_w));
    vlSelfRef.apb_wrapper_tb__DOT__dut__DOT__apb_write_access_w 
        = ((IData)(vlSelfRef.apb_wrapper_tb__DOT__dut__DOT__apb_access_w) 
           & (IData)(vlSelfRef.apb_wrapper_tb__DOT__PWRITE));
}

void Vapb_wrapper_tb___024root___timing_resume(Vapb_wrapper_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_wrapper_tb___024root___timing_resume\n"); );
    Vapb_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h77c768b5__0.resume(
                                                   "@(posedge apb_wrapper_tb.PCLK)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vapb_wrapper_tb___024root___timing_commit(Vapb_wrapper_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_wrapper_tb___024root___timing_commit\n"); );
    Vapb_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h77c768b5__0.commit(
                                                   "@(posedge apb_wrapper_tb.PCLK)");
    }
}

void Vapb_wrapper_tb___024root___eval_triggers__act(Vapb_wrapper_tb___024root* vlSelf);

bool Vapb_wrapper_tb___024root___eval_phase__act(Vapb_wrapper_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_wrapper_tb___024root___eval_phase__act\n"); );
    Vapb_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vapb_wrapper_tb___024root___eval_triggers__act(vlSelf);
    Vapb_wrapper_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vapb_wrapper_tb___024root___timing_resume(vlSelf);
        Vapb_wrapper_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vapb_wrapper_tb___024root___eval_phase__nba(Vapb_wrapper_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_wrapper_tb___024root___eval_phase__nba\n"); );
    Vapb_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vapb_wrapper_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vapb_wrapper_tb___024root___dump_triggers__nba(Vapb_wrapper_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vapb_wrapper_tb___024root___dump_triggers__act(Vapb_wrapper_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vapb_wrapper_tb___024root___eval(Vapb_wrapper_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_wrapper_tb___024root___eval\n"); );
    Vapb_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vapb_wrapper_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/apb_wrapper_tb.v", 16, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vapb_wrapper_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/apb_wrapper_tb.v", 16, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vapb_wrapper_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vapb_wrapper_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vapb_wrapper_tb___024root___eval_debug_assertions(Vapb_wrapper_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_wrapper_tb___024root___eval_debug_assertions\n"); );
    Vapb_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
