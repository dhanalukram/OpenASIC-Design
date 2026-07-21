// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vopc_top_tb.h for the primary calling header

#include "Vopc_top_tb__pch.h"
#include "Vopc_top_tb___024root.h"

VL_ATTR_COLD void Vopc_top_tb___024root___eval_initial__TOP(Vopc_top_tb___024root* vlSelf);
VlCoroutine Vopc_top_tb___024root___eval_initial__TOP__Vtiming__0(Vopc_top_tb___024root* vlSelf);
VlCoroutine Vopc_top_tb___024root___eval_initial__TOP__Vtiming__1(Vopc_top_tb___024root* vlSelf);

void Vopc_top_tb___024root___eval_initial(Vopc_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopc_top_tb___024root___eval_initial\n"); );
    Vopc_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vopc_top_tb___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vopc_top_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vopc_top_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vopc_top_tb___024root___eval_initial__TOP__Vtiming__0(Vopc_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopc_top_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vopc_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_opc_top_tb__DOT__reset_dut__0__opc_top_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_opc_top_tb__DOT__reset_dut__0__opc_top_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*7:0*/ __Vtask_opc_top_tb__DOT__write_register__1__address;
    __Vtask_opc_top_tb__DOT__write_register__1__address = 0;
    IData/*31:0*/ __Vtask_opc_top_tb__DOT__write_register__1__data;
    __Vtask_opc_top_tb__DOT__write_register__1__data = 0;
    CData/*7:0*/ __Vtask_opc_top_tb__DOT__write_register__2__address;
    __Vtask_opc_top_tb__DOT__write_register__2__address = 0;
    IData/*31:0*/ __Vtask_opc_top_tb__DOT__write_register__2__data;
    __Vtask_opc_top_tb__DOT__write_register__2__data = 0;
    CData/*7:0*/ __Vtask_opc_top_tb__DOT__read_register__3__address;
    __Vtask_opc_top_tb__DOT__read_register__3__address = 0;
    CData/*7:0*/ __Vtask_opc_top_tb__DOT__write_register__4__address;
    __Vtask_opc_top_tb__DOT__write_register__4__address = 0;
    IData/*31:0*/ __Vtask_opc_top_tb__DOT__write_register__4__data;
    __Vtask_opc_top_tb__DOT__write_register__4__data = 0;
    CData/*7:0*/ __Vtask_opc_top_tb__DOT__write_register__5__address;
    __Vtask_opc_top_tb__DOT__write_register__5__address = 0;
    IData/*31:0*/ __Vtask_opc_top_tb__DOT__write_register__5__data;
    __Vtask_opc_top_tb__DOT__write_register__5__data = 0;
    // Body
    VL_WRITEF_NX("\n==========================================\n      OPC TOP Integration Test\n==========================================\n",0);
    __Vtask_opc_top_tb__DOT__reset_dut__0__opc_top_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    vlSelfRef.opc_top_tb__DOT__rst_n = 0U;
    vlSelfRef.opc_top_tb__DOT__write_en_i = 0U;
    vlSelfRef.opc_top_tb__DOT__read_en_i = 0U;
    vlSelfRef.opc_top_tb__DOT__addr_i = 0U;
    vlSelfRef.opc_top_tb__DOT__wdata_i = 0U;
    vlSelfRef.opc_top_tb__DOT__gpio_in_i = 0U;
    co_await vlSelfRef.__VtrigSched_h8e2d5b20__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge opc_top_tb.clk)", 
                                                         "tb/opc_top_tb.v", 
                                                         108);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_opc_top_tb__DOT__reset_dut__0__opc_top_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h8e2d5b20__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge opc_top_tb.clk)", 
                                                         "tb/opc_top_tb.v", 
                                                         108);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_opc_top_tb__DOT__reset_dut__0__opc_top_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    vlSelfRef.opc_top_tb__DOT__rst_n = 1U;
    co_await vlSelfRef.__VtrigSched_h8e2d5b20__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge opc_top_tb.clk)", 
                                                         "tb/opc_top_tb.v", 
                                                         112);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((0U == (IData)(vlSelfRef.opc_top_tb__DOT__gpio_out_o))) {
        VL_WRITEF_NX("PASS : Reset\n",0);
    } else {
        VL_WRITEF_NX("FAIL : Reset\n",0);
    }
    __Vtask_opc_top_tb__DOT__write_register__1__data = 0xffU;
    __Vtask_opc_top_tb__DOT__write_register__1__address = 4U;
    co_await vlSelfRef.__VtrigSched_h8e2d5b20__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge opc_top_tb.clk)", 
                                                         "tb/opc_top_tb.v", 
                                                         128);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.opc_top_tb__DOT__write_en_i = 1U;
    vlSelfRef.opc_top_tb__DOT__addr_i = __Vtask_opc_top_tb__DOT__write_register__1__address;
    vlSelfRef.opc_top_tb__DOT__wdata_i = __Vtask_opc_top_tb__DOT__write_register__1__data;
    co_await vlSelfRef.__VtrigSched_h8e2d5b20__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge opc_top_tb.clk)", 
                                                         "tb/opc_top_tb.v", 
                                                         134);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.opc_top_tb__DOT__write_en_i = 0U;
    vlSelfRef.opc_top_tb__DOT__addr_i = 0U;
    vlSelfRef.opc_top_tb__DOT__wdata_i = 0U;
    if ((0U == (IData)(vlSelfRef.opc_top_tb__DOT__gpio_out_o))) {
        VL_WRITEF_NX("PASS : GPIO Direction\n",0);
    } else {
        VL_WRITEF_NX("FAIL : GPIO Direction\n",0);
    }
    __Vtask_opc_top_tb__DOT__write_register__2__data = 0xa5U;
    __Vtask_opc_top_tb__DOT__write_register__2__address = 0U;
    co_await vlSelfRef.__VtrigSched_h8e2d5b20__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge opc_top_tb.clk)", 
                                                         "tb/opc_top_tb.v", 
                                                         128);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.opc_top_tb__DOT__write_en_i = 1U;
    vlSelfRef.opc_top_tb__DOT__addr_i = __Vtask_opc_top_tb__DOT__write_register__2__address;
    vlSelfRef.opc_top_tb__DOT__wdata_i = __Vtask_opc_top_tb__DOT__write_register__2__data;
    co_await vlSelfRef.__VtrigSched_h8e2d5b20__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge opc_top_tb.clk)", 
                                                         "tb/opc_top_tb.v", 
                                                         134);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.opc_top_tb__DOT__write_en_i = 0U;
    vlSelfRef.opc_top_tb__DOT__addr_i = 0U;
    vlSelfRef.opc_top_tb__DOT__wdata_i = 0U;
    co_await vlSelfRef.__VtrigSched_h8e2d5b20__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge opc_top_tb.clk)", 
                                                         "tb/opc_top_tb.v", 
                                                         207);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((0xa5U == (IData)(vlSelfRef.opc_top_tb__DOT__gpio_out_o))) {
        VL_WRITEF_NX("PASS : GPIO Output\n",0);
    } else {
        VL_WRITEF_NX("FAIL : GPIO Output\nExpected = A5\nActual   = %x\n",0,
                     8,vlSelfRef.opc_top_tb__DOT__gpio_out_o);
    }
    __Vtask_opc_top_tb__DOT__read_register__3__address = 0U;
    co_await vlSelfRef.__VtrigSched_h8e2d5b20__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge opc_top_tb.clk)", 
                                                         "tb/opc_top_tb.v", 
                                                         153);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.opc_top_tb__DOT__read_en_i = 1U;
    vlSelfRef.opc_top_tb__DOT__addr_i = __Vtask_opc_top_tb__DOT__read_register__3__address;
    co_await vlSelfRef.__VtrigSched_h8e2d5b20__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge opc_top_tb.clk)", 
                                                         "tb/opc_top_tb.v", 
                                                         158);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.opc_top_tb__DOT__read_en_i = 0U;
    vlSelfRef.opc_top_tb__DOT__addr_i = 0U;
    if ((0xa5U == vlSelfRef.opc_top_tb__DOT__rdata_o)) {
        VL_WRITEF_NX("PASS : Register Read\n",0);
    } else {
        VL_WRITEF_NX("FAIL : Register Read\n",0);
    }
    vlSelfRef.opc_top_tb__DOT__gpio_in_i = 0x3cU;
    co_await vlSelfRef.__VtrigSched_h8e2d5b20__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge opc_top_tb.clk)", 
                                                         "tb/opc_top_tb.v", 
                                                         234);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((0x3cU == (IData)(vlSelfRef.opc_top_tb__DOT__gpio_input_o))) {
        VL_WRITEF_NX("PASS : GPIO Input\n",0);
    } else {
        VL_WRITEF_NX("FAIL : GPIO Input\n",0);
    }
    __Vtask_opc_top_tb__DOT__write_register__4__data = 0xf0U;
    __Vtask_opc_top_tb__DOT__write_register__4__address = 4U;
    co_await vlSelfRef.__VtrigSched_h8e2d5b20__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge opc_top_tb.clk)", 
                                                         "tb/opc_top_tb.v", 
                                                         128);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.opc_top_tb__DOT__write_en_i = 1U;
    vlSelfRef.opc_top_tb__DOT__addr_i = __Vtask_opc_top_tb__DOT__write_register__4__address;
    vlSelfRef.opc_top_tb__DOT__wdata_i = __Vtask_opc_top_tb__DOT__write_register__4__data;
    co_await vlSelfRef.__VtrigSched_h8e2d5b20__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge opc_top_tb.clk)", 
                                                         "tb/opc_top_tb.v", 
                                                         134);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.opc_top_tb__DOT__write_en_i = 0U;
    vlSelfRef.opc_top_tb__DOT__addr_i = 0U;
    vlSelfRef.opc_top_tb__DOT__wdata_i = 0U;
    __Vtask_opc_top_tb__DOT__write_register__5__data = 0xaaU;
    __Vtask_opc_top_tb__DOT__write_register__5__address = 0U;
    co_await vlSelfRef.__VtrigSched_h8e2d5b20__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge opc_top_tb.clk)", 
                                                         "tb/opc_top_tb.v", 
                                                         128);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.opc_top_tb__DOT__write_en_i = 1U;
    vlSelfRef.opc_top_tb__DOT__addr_i = __Vtask_opc_top_tb__DOT__write_register__5__address;
    vlSelfRef.opc_top_tb__DOT__wdata_i = __Vtask_opc_top_tb__DOT__write_register__5__data;
    co_await vlSelfRef.__VtrigSched_h8e2d5b20__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge opc_top_tb.clk)", 
                                                         "tb/opc_top_tb.v", 
                                                         134);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.opc_top_tb__DOT__write_en_i = 0U;
    vlSelfRef.opc_top_tb__DOT__addr_i = 0U;
    vlSelfRef.opc_top_tb__DOT__wdata_i = 0U;
    if ((0xa0U == (IData)(vlSelfRef.opc_top_tb__DOT__gpio_out_o))) {
        VL_WRITEF_NX("PASS : Mixed Direction\n",0);
    } else {
        VL_WRITEF_NX("FAIL : Mixed Direction\n",0);
    }
    VL_WRITEF_NX("\n==========================================\n OPC TOP Integration Completed\n==========================================\n",0);
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/opc_top_tb.v", 
                                         262);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("tb/opc_top_tb.v", 264, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

void Vopc_top_tb___024root___act_comb__TOP__0(Vopc_top_tb___024root* vlSelf);

void Vopc_top_tb___024root___eval_act(Vopc_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopc_top_tb___024root___eval_act\n"); );
    Vopc_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((5ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vopc_top_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vopc_top_tb___024root___act_comb__TOP__0(Vopc_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopc_top_tb___024root___act_comb__TOP__0\n"); );
    Vopc_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelfRef.opc_top_tb__DOT__write_en_i) 
                       | (IData)(vlSelfRef.opc_top_tb__DOT__read_en_i)) 
                      & (0U != (3U & (IData)(vlSelfRef.opc_top_tb__DOT__addr_i))))))) {
        VL_WRITEF_NX("WARNING: CRB - Unaligned register access at address %x\n",0,
                     8,vlSelfRef.opc_top_tb__DOT__addr_i);
    }
    vlSelfRef.opc_top_tb__DOT__rdata_o = 0U;
    if (vlSelfRef.opc_top_tb__DOT__read_en_i) {
        vlSelfRef.opc_top_tb__DOT__rdata_o = vlSelfRef.opc_top_tb__DOT__dut__DOT__u_crb__DOT__reg_file
            [(7U & ((IData)(vlSelfRef.opc_top_tb__DOT__addr_i) 
                    >> 2U))];
    }
}

void Vopc_top_tb___024root___nba_sequent__TOP__0(Vopc_top_tb___024root* vlSelf);
void Vopc_top_tb___024root___nba_comb__TOP__0(Vopc_top_tb___024root* vlSelf);
void Vopc_top_tb___024root___nba_comb__TOP__1(Vopc_top_tb___024root* vlSelf);

void Vopc_top_tb___024root___eval_nba(Vopc_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopc_top_tb___024root___eval_nba\n"); );
    Vopc_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vopc_top_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vopc_top_tb___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vopc_top_tb___024root___nba_comb__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vopc_top_tb___024root___nba_sequent__TOP__0(Vopc_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopc_top_tb___024root___nba_sequent__TOP__0\n"); );
    Vopc_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__opc_top_tb__DOT__dut__DOT__u_crb__DOT__reg_file__v0;
    __VdlyVal__opc_top_tb__DOT__dut__DOT__u_crb__DOT__reg_file__v0 = 0;
    CData/*2:0*/ __VdlyDim0__opc_top_tb__DOT__dut__DOT__u_crb__DOT__reg_file__v0;
    __VdlyDim0__opc_top_tb__DOT__dut__DOT__u_crb__DOT__reg_file__v0 = 0;
    CData/*0:0*/ __VdlySet__opc_top_tb__DOT__dut__DOT__u_crb__DOT__reg_file__v0;
    __VdlySet__opc_top_tb__DOT__dut__DOT__u_crb__DOT__reg_file__v0 = 0;
    CData/*0:0*/ __VdlySet__opc_top_tb__DOT__dut__DOT__u_crb__DOT__reg_file__v1;
    __VdlySet__opc_top_tb__DOT__dut__DOT__u_crb__DOT__reg_file__v1 = 0;
    // Body
    __VdlySet__opc_top_tb__DOT__dut__DOT__u_crb__DOT__reg_file__v0 = 0U;
    __VdlySet__opc_top_tb__DOT__dut__DOT__u_crb__DOT__reg_file__v1 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.opc_top_tb__DOT__rst_n)))) {
        vlSelfRef.opc_top_tb__DOT__dut__DOT__u_crb__DOT__i = 8U;
    }
    if (vlSelfRef.opc_top_tb__DOT__rst_n) {
        vlSelfRef.opc_top_tb__DOT__dut__DOT__u_gpio__DOT__i = 8U;
        if (vlSelfRef.opc_top_tb__DOT__write_en_i) {
            __VdlyVal__opc_top_tb__DOT__dut__DOT__u_crb__DOT__reg_file__v0 
                = vlSelfRef.opc_top_tb__DOT__wdata_i;
            __VdlyDim0__opc_top_tb__DOT__dut__DOT__u_crb__DOT__reg_file__v0 
                = (7U & ((IData)(vlSelfRef.opc_top_tb__DOT__addr_i) 
                         >> 2U));
            __VdlySet__opc_top_tb__DOT__dut__DOT__u_crb__DOT__reg_file__v0 = 1U;
        }
        vlSelfRef.opc_top_tb__DOT__gpio_input_o = vlSelfRef.opc_top_tb__DOT__gpio_in_i;
        vlSelfRef.opc_top_tb__DOT__gpio_out_o = (0xffU 
                                                 & (vlSelfRef.opc_top_tb__DOT__dut__DOT__u_crb__DOT__reg_file
                                                    [1U] 
                                                    & vlSelfRef.opc_top_tb__DOT__dut__DOT__u_crb__DOT__reg_file
                                                    [0U]));
    } else {
        __VdlySet__opc_top_tb__DOT__dut__DOT__u_crb__DOT__reg_file__v1 = 1U;
        vlSelfRef.opc_top_tb__DOT__gpio_input_o = 0U;
        vlSelfRef.opc_top_tb__DOT__gpio_out_o = 0U;
    }
    if (__VdlySet__opc_top_tb__DOT__dut__DOT__u_crb__DOT__reg_file__v0) {
        vlSelfRef.opc_top_tb__DOT__dut__DOT__u_crb__DOT__reg_file[__VdlyDim0__opc_top_tb__DOT__dut__DOT__u_crb__DOT__reg_file__v0] 
            = __VdlyVal__opc_top_tb__DOT__dut__DOT__u_crb__DOT__reg_file__v0;
    }
    if (__VdlySet__opc_top_tb__DOT__dut__DOT__u_crb__DOT__reg_file__v1) {
        vlSelfRef.opc_top_tb__DOT__dut__DOT__u_crb__DOT__reg_file[0U] = 0U;
        vlSelfRef.opc_top_tb__DOT__dut__DOT__u_crb__DOT__reg_file[1U] = 0U;
        vlSelfRef.opc_top_tb__DOT__dut__DOT__u_crb__DOT__reg_file[2U] = 0U;
        vlSelfRef.opc_top_tb__DOT__dut__DOT__u_crb__DOT__reg_file[3U] = 0U;
        vlSelfRef.opc_top_tb__DOT__dut__DOT__u_crb__DOT__reg_file[4U] = 0U;
        vlSelfRef.opc_top_tb__DOT__dut__DOT__u_crb__DOT__reg_file[5U] = 0U;
        vlSelfRef.opc_top_tb__DOT__dut__DOT__u_crb__DOT__reg_file[6U] = 0U;
        vlSelfRef.opc_top_tb__DOT__dut__DOT__u_crb__DOT__reg_file[7U] = 0U;
    }
}

VL_INLINE_OPT void Vopc_top_tb___024root___nba_comb__TOP__0(Vopc_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopc_top_tb___024root___nba_comb__TOP__0\n"); );
    Vopc_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelfRef.opc_top_tb__DOT__write_en_i) 
                       | (IData)(vlSelfRef.opc_top_tb__DOT__read_en_i)) 
                      & (0U != (3U & (IData)(vlSelfRef.opc_top_tb__DOT__addr_i))))))) {
        VL_WRITEF_NX("WARNING: CRB - Unaligned register access at address %x\n",0,
                     8,vlSelfRef.opc_top_tb__DOT__addr_i);
    }
}

VL_INLINE_OPT void Vopc_top_tb___024root___nba_comb__TOP__1(Vopc_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopc_top_tb___024root___nba_comb__TOP__1\n"); );
    Vopc_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.opc_top_tb__DOT__rdata_o = 0U;
    if (vlSelfRef.opc_top_tb__DOT__read_en_i) {
        vlSelfRef.opc_top_tb__DOT__rdata_o = vlSelfRef.opc_top_tb__DOT__dut__DOT__u_crb__DOT__reg_file
            [(7U & ((IData)(vlSelfRef.opc_top_tb__DOT__addr_i) 
                    >> 2U))];
    }
}

void Vopc_top_tb___024root___timing_resume(Vopc_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopc_top_tb___024root___timing_resume\n"); );
    Vopc_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h8e2d5b20__0.resume(
                                                   "@(posedge opc_top_tb.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vopc_top_tb___024root___timing_commit(Vopc_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopc_top_tb___024root___timing_commit\n"); );
    Vopc_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h8e2d5b20__0.commit(
                                                   "@(posedge opc_top_tb.clk)");
    }
}

void Vopc_top_tb___024root___eval_triggers__act(Vopc_top_tb___024root* vlSelf);

bool Vopc_top_tb___024root___eval_phase__act(Vopc_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopc_top_tb___024root___eval_phase__act\n"); );
    Vopc_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vopc_top_tb___024root___eval_triggers__act(vlSelf);
    Vopc_top_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vopc_top_tb___024root___timing_resume(vlSelf);
        Vopc_top_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vopc_top_tb___024root___eval_phase__nba(Vopc_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopc_top_tb___024root___eval_phase__nba\n"); );
    Vopc_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vopc_top_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vopc_top_tb___024root___dump_triggers__nba(Vopc_top_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vopc_top_tb___024root___dump_triggers__act(Vopc_top_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vopc_top_tb___024root___eval(Vopc_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopc_top_tb___024root___eval\n"); );
    Vopc_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vopc_top_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/opc_top_tb.v", 20, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vopc_top_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/opc_top_tb.v", 20, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vopc_top_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vopc_top_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vopc_top_tb___024root___eval_debug_assertions(Vopc_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopc_top_tb___024root___eval_debug_assertions\n"); );
    Vopc_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
