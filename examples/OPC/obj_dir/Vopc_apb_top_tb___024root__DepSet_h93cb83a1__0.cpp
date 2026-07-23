// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vopc_apb_top_tb.h for the primary calling header

#include "Vopc_apb_top_tb__pch.h"
#include "Vopc_apb_top_tb___024root.h"

VL_ATTR_COLD void Vopc_apb_top_tb___024root___eval_initial__TOP(Vopc_apb_top_tb___024root* vlSelf);
VlCoroutine Vopc_apb_top_tb___024root___eval_initial__TOP__Vtiming__0(Vopc_apb_top_tb___024root* vlSelf);
VlCoroutine Vopc_apb_top_tb___024root___eval_initial__TOP__Vtiming__1(Vopc_apb_top_tb___024root* vlSelf);

void Vopc_apb_top_tb___024root___eval_initial(Vopc_apb_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopc_apb_top_tb___024root___eval_initial\n"); );
    Vopc_apb_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vopc_apb_top_tb___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vopc_apb_top_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vopc_apb_top_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vopc_apb_top_tb___024root___eval_initial__TOP__Vtiming__0(Vopc_apb_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopc_apb_top_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vopc_apb_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_opc_apb_top_tb__DOT__reset_dut__0__opc_apb_top_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_opc_apb_top_tb__DOT__reset_dut__0__opc_apb_top_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_opc_apb_top_tb__DOT__reset_dut__0__opc_apb_top_tb__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_opc_apb_top_tb__DOT__reset_dut__0__opc_apb_top_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ __Vtask_opc_apb_top_tb__DOT__apb_write__1__addr;
    __Vtask_opc_apb_top_tb__DOT__apb_write__1__addr = 0;
    IData/*31:0*/ __Vtask_opc_apb_top_tb__DOT__apb_write__1__data;
    __Vtask_opc_apb_top_tb__DOT__apb_write__1__data = 0;
    IData/*31:0*/ __Vtask_opc_apb_top_tb__DOT__apb_read__2__addr;
    __Vtask_opc_apb_top_tb__DOT__apb_read__2__addr = 0;
    IData/*31:0*/ __Vtask_opc_apb_top_tb__DOT__apb_read__2__data;
    __Vtask_opc_apb_top_tb__DOT__apb_read__2__data = 0;
    IData/*31:0*/ __Vtask_opc_apb_top_tb__DOT__apb_write__3__addr;
    __Vtask_opc_apb_top_tb__DOT__apb_write__3__addr = 0;
    IData/*31:0*/ __Vtask_opc_apb_top_tb__DOT__apb_write__3__data;
    __Vtask_opc_apb_top_tb__DOT__apb_write__3__data = 0;
    IData/*31:0*/ __Vtask_opc_apb_top_tb__DOT__apb_read__4__addr;
    __Vtask_opc_apb_top_tb__DOT__apb_read__4__addr = 0;
    IData/*31:0*/ __Vtask_opc_apb_top_tb__DOT__apb_read__4__data;
    __Vtask_opc_apb_top_tb__DOT__apb_read__4__data = 0;
    IData/*31:0*/ __Vtask_opc_apb_top_tb__DOT__apb_write__5__addr;
    __Vtask_opc_apb_top_tb__DOT__apb_write__5__addr = 0;
    IData/*31:0*/ __Vtask_opc_apb_top_tb__DOT__apb_write__5__data;
    __Vtask_opc_apb_top_tb__DOT__apb_write__5__data = 0;
    IData/*31:0*/ __Vtask_opc_apb_top_tb__DOT__apb_write__6__addr;
    __Vtask_opc_apb_top_tb__DOT__apb_write__6__addr = 0;
    IData/*31:0*/ __Vtask_opc_apb_top_tb__DOT__apb_write__6__data;
    __Vtask_opc_apb_top_tb__DOT__apb_write__6__data = 0;
    IData/*31:0*/ __Vtask_opc_apb_top_tb__DOT__apb_write__7__addr;
    __Vtask_opc_apb_top_tb__DOT__apb_write__7__addr = 0;
    IData/*31:0*/ __Vtask_opc_apb_top_tb__DOT__apb_write__7__data;
    __Vtask_opc_apb_top_tb__DOT__apb_write__7__data = 0;
    IData/*31:0*/ __Vtask_opc_apb_top_tb__DOT__apb_read__8__addr;
    __Vtask_opc_apb_top_tb__DOT__apb_read__8__addr = 0;
    IData/*31:0*/ __Vtask_opc_apb_top_tb__DOT__apb_read__8__data;
    __Vtask_opc_apb_top_tb__DOT__apb_read__8__data = 0;
    // Body
    __Vtask_opc_apb_top_tb__DOT__reset_dut__0__opc_apb_top_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_opc_apb_top_tb__DOT__reset_dut__0__opc_apb_top_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    vlSelfRef.opc_apb_top_tb__DOT__PRESETn = 0U;
    vlSelfRef.opc_apb_top_tb__DOT__PSEL = 0U;
    vlSelfRef.opc_apb_top_tb__DOT__PENABLE = 0U;
    vlSelfRef.opc_apb_top_tb__DOT__PWRITE = 0U;
    vlSelfRef.opc_apb_top_tb__DOT__PADDR = 0U;
    vlSelfRef.opc_apb_top_tb__DOT__PWDATA = 0U;
    vlSelfRef.opc_apb_top_tb__DOT__gpio_in_i = 0U;
    co_await vlSelfRef.__VtrigSched_h54fcdc7e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge opc_apb_top_tb.PCLK)", 
                                                         "tb/opc_apb_top_tb.v", 
                                                         144);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_opc_apb_top_tb__DOT__reset_dut__0__opc_apb_top_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 4U;
    co_await vlSelfRef.__VtrigSched_h54fcdc7e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge opc_apb_top_tb.PCLK)", 
                                                         "tb/opc_apb_top_tb.v", 
                                                         144);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_opc_apb_top_tb__DOT__reset_dut__0__opc_apb_top_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 3U;
    co_await vlSelfRef.__VtrigSched_h54fcdc7e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge opc_apb_top_tb.PCLK)", 
                                                         "tb/opc_apb_top_tb.v", 
                                                         144);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_opc_apb_top_tb__DOT__reset_dut__0__opc_apb_top_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 2U;
    co_await vlSelfRef.__VtrigSched_h54fcdc7e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge opc_apb_top_tb.PCLK)", 
                                                         "tb/opc_apb_top_tb.v", 
                                                         144);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_opc_apb_top_tb__DOT__reset_dut__0__opc_apb_top_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h54fcdc7e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge opc_apb_top_tb.PCLK)", 
                                                         "tb/opc_apb_top_tb.v", 
                                                         144);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_opc_apb_top_tb__DOT__reset_dut__0__opc_apb_top_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    vlSelfRef.opc_apb_top_tb__DOT__PRESETn = 1U;
    co_await vlSelfRef.__VtrigSched_h54fcdc7e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge opc_apb_top_tb.PCLK)", 
                                                         "tb/opc_apb_top_tb.v", 
                                                         148);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_opc_apb_top_tb__DOT__reset_dut__0__opc_apb_top_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 1U;
    co_await vlSelfRef.__VtrigSched_h54fcdc7e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge opc_apb_top_tb.PCLK)", 
                                                         "tb/opc_apb_top_tb.v", 
                                                         148);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_opc_apb_top_tb__DOT__reset_dut__0__opc_apb_top_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0U;
    VL_WRITEF_NX("====================================================\n OPC APB TOP FUNCTIONAL VERIFICATION\n====================================================\n",0);
    __Vtask_opc_apb_top_tb__DOT__apb_write__1__data = 0x55U;
    __Vtask_opc_apb_top_tb__DOT__apb_write__1__addr = 0U;
    co_await vlSelfRef.__VtrigSched_h54fcdc7e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge opc_apb_top_tb.PCLK)", 
                                                         "tb/opc_apb_top_tb.v", 
                                                         168);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.opc_apb_top_tb__DOT__PSEL = 1U;
    vlSelfRef.opc_apb_top_tb__DOT__PENABLE = 0U;
    vlSelfRef.opc_apb_top_tb__DOT__PWRITE = 1U;
    vlSelfRef.opc_apb_top_tb__DOT__PADDR = __Vtask_opc_apb_top_tb__DOT__apb_write__1__addr;
    vlSelfRef.opc_apb_top_tb__DOT__PWDATA = __Vtask_opc_apb_top_tb__DOT__apb_write__1__data;
    co_await vlSelfRef.__VtrigSched_h54fcdc7e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge opc_apb_top_tb.PCLK)", 
                                                         "tb/opc_apb_top_tb.v", 
                                                         181);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.opc_apb_top_tb__DOT__PENABLE = 1U;
    co_await vlSelfRef.__VtrigSched_h54fcdc7e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge opc_apb_top_tb.PCLK)", 
                                                         "tb/opc_apb_top_tb.v", 
                                                         189);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    while ((1U & (~ (IData)(vlSelfRef.opc_apb_top_tb__DOT__PREADY)))) {
        co_await vlSelfRef.__VtrigSched_h54fcdc7e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge opc_apb_top_tb.PCLK)", 
                                                             "tb/opc_apb_top_tb.v", 
                                                             192);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.opc_apb_top_tb__DOT__PSEL = 0U;
    vlSelfRef.opc_apb_top_tb__DOT__PENABLE = 0U;
    vlSelfRef.opc_apb_top_tb__DOT__PWRITE = 0U;
    __Vtask_opc_apb_top_tb__DOT__apb_read__2__addr = 0U;
    co_await vlSelfRef.__VtrigSched_h54fcdc7e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge opc_apb_top_tb.PCLK)", 
                                                         "tb/opc_apb_top_tb.v", 
                                                         221);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.opc_apb_top_tb__DOT__PSEL = 1U;
    vlSelfRef.opc_apb_top_tb__DOT__PENABLE = 0U;
    vlSelfRef.opc_apb_top_tb__DOT__PWRITE = 0U;
    vlSelfRef.opc_apb_top_tb__DOT__PADDR = __Vtask_opc_apb_top_tb__DOT__apb_read__2__addr;
    co_await vlSelfRef.__VtrigSched_h54fcdc7e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge opc_apb_top_tb.PCLK)", 
                                                         "tb/opc_apb_top_tb.v", 
                                                         233);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.opc_apb_top_tb__DOT__PENABLE = 1U;
    co_await vlSelfRef.__VtrigSched_h54fcdc7e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge opc_apb_top_tb.PCLK)", 
                                                         "tb/opc_apb_top_tb.v", 
                                                         241);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    while ((1U & (~ (IData)(vlSelfRef.opc_apb_top_tb__DOT__PREADY)))) {
        co_await vlSelfRef.__VtrigSched_h54fcdc7e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge opc_apb_top_tb.PCLK)", 
                                                             "tb/opc_apb_top_tb.v", 
                                                             244);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    __Vtask_opc_apb_top_tb__DOT__apb_read__2__data 
        = vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__reg_rdata_w;
    vlSelfRef.opc_apb_top_tb__DOT__PSEL = 0U;
    vlSelfRef.opc_apb_top_tb__DOT__PENABLE = 0U;
    vlSelfRef.opc_apb_top_tb__DOT__read_data = __Vtask_opc_apb_top_tb__DOT__apb_read__2__data;
    VL_WRITEF_NX("--------------------------------\nGPIO_DATA TEST\nExpected = 00000055\nRead     = %x\n--------------------------------\n",0,
                 32,vlSelfRef.opc_apb_top_tb__DOT__read_data);
    if ((0x55U == vlSelfRef.opc_apb_top_tb__DOT__read_data)) {
        VL_WRITEF_NX("PASS : GPIO_DATA Write/Read\n",0);
        vlSelfRef.opc_apb_top_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelfRef.opc_apb_top_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL : GPIO_DATA Write/Read\n",0);
        vlSelfRef.opc_apb_top_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelfRef.opc_apb_top_tb__DOT__fail_count);
    }
    __Vtask_opc_apb_top_tb__DOT__apb_write__3__data = 0xffU;
    __Vtask_opc_apb_top_tb__DOT__apb_write__3__addr = 4U;
    co_await vlSelfRef.__VtrigSched_h54fcdc7e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge opc_apb_top_tb.PCLK)", 
                                                         "tb/opc_apb_top_tb.v", 
                                                         168);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.opc_apb_top_tb__DOT__PSEL = 1U;
    vlSelfRef.opc_apb_top_tb__DOT__PENABLE = 0U;
    vlSelfRef.opc_apb_top_tb__DOT__PWRITE = 1U;
    vlSelfRef.opc_apb_top_tb__DOT__PADDR = __Vtask_opc_apb_top_tb__DOT__apb_write__3__addr;
    vlSelfRef.opc_apb_top_tb__DOT__PWDATA = __Vtask_opc_apb_top_tb__DOT__apb_write__3__data;
    co_await vlSelfRef.__VtrigSched_h54fcdc7e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge opc_apb_top_tb.PCLK)", 
                                                         "tb/opc_apb_top_tb.v", 
                                                         181);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.opc_apb_top_tb__DOT__PENABLE = 1U;
    co_await vlSelfRef.__VtrigSched_h54fcdc7e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge opc_apb_top_tb.PCLK)", 
                                                         "tb/opc_apb_top_tb.v", 
                                                         189);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    while ((1U & (~ (IData)(vlSelfRef.opc_apb_top_tb__DOT__PREADY)))) {
        co_await vlSelfRef.__VtrigSched_h54fcdc7e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge opc_apb_top_tb.PCLK)", 
                                                             "tb/opc_apb_top_tb.v", 
                                                             192);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.opc_apb_top_tb__DOT__PSEL = 0U;
    vlSelfRef.opc_apb_top_tb__DOT__PENABLE = 0U;
    vlSelfRef.opc_apb_top_tb__DOT__PWRITE = 0U;
    __Vtask_opc_apb_top_tb__DOT__apb_read__4__addr = 4U;
    co_await vlSelfRef.__VtrigSched_h54fcdc7e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge opc_apb_top_tb.PCLK)", 
                                                         "tb/opc_apb_top_tb.v", 
                                                         221);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.opc_apb_top_tb__DOT__PSEL = 1U;
    vlSelfRef.opc_apb_top_tb__DOT__PENABLE = 0U;
    vlSelfRef.opc_apb_top_tb__DOT__PWRITE = 0U;
    vlSelfRef.opc_apb_top_tb__DOT__PADDR = __Vtask_opc_apb_top_tb__DOT__apb_read__4__addr;
    co_await vlSelfRef.__VtrigSched_h54fcdc7e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge opc_apb_top_tb.PCLK)", 
                                                         "tb/opc_apb_top_tb.v", 
                                                         233);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.opc_apb_top_tb__DOT__PENABLE = 1U;
    co_await vlSelfRef.__VtrigSched_h54fcdc7e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge opc_apb_top_tb.PCLK)", 
                                                         "tb/opc_apb_top_tb.v", 
                                                         241);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    while ((1U & (~ (IData)(vlSelfRef.opc_apb_top_tb__DOT__PREADY)))) {
        co_await vlSelfRef.__VtrigSched_h54fcdc7e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge opc_apb_top_tb.PCLK)", 
                                                             "tb/opc_apb_top_tb.v", 
                                                             244);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    __Vtask_opc_apb_top_tb__DOT__apb_read__4__data 
        = vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__reg_rdata_w;
    vlSelfRef.opc_apb_top_tb__DOT__PSEL = 0U;
    vlSelfRef.opc_apb_top_tb__DOT__PENABLE = 0U;
    vlSelfRef.opc_apb_top_tb__DOT__read_data = __Vtask_opc_apb_top_tb__DOT__apb_read__4__data;
    if ((0xffU == vlSelfRef.opc_apb_top_tb__DOT__read_data)) {
        VL_WRITEF_NX("PASS : GPIO_DIR Write/Read\n",0);
        vlSelfRef.opc_apb_top_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelfRef.opc_apb_top_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL : GPIO_DIR Write/Read\n",0);
        vlSelfRef.opc_apb_top_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelfRef.opc_apb_top_tb__DOT__fail_count);
    }
    if ((0x55U == (IData)(vlSelfRef.opc_apb_top_tb__DOT__gpio_out_o))) {
        VL_WRITEF_NX("PASS : GPIO Output\n",0);
        vlSelfRef.opc_apb_top_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelfRef.opc_apb_top_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL : GPIO Output\n",0);
        vlSelfRef.opc_apb_top_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelfRef.opc_apb_top_tb__DOT__fail_count);
    }
    vlSelfRef.opc_apb_top_tb__DOT__gpio_in_i = 0xa5U;
    co_await vlSelfRef.__VtrigSched_h54fcdc7e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge opc_apb_top_tb.PCLK)", 
                                                         "tb/opc_apb_top_tb.v", 
                                                         341);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h54fcdc7e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge opc_apb_top_tb.PCLK)", 
                                                         "tb/opc_apb_top_tb.v", 
                                                         341);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((0xa5U == (IData)(vlSelfRef.opc_apb_top_tb__DOT__gpio_input_o))) {
        VL_WRITEF_NX("PASS : GPIO Input\n",0);
        vlSelfRef.opc_apb_top_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelfRef.opc_apb_top_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL : GPIO Input\n",0);
        vlSelfRef.opc_apb_top_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelfRef.opc_apb_top_tb__DOT__fail_count);
    }
    __Vtask_opc_apb_top_tb__DOT__apb_write__5__data = 0x12345678U;
    __Vtask_opc_apb_top_tb__DOT__apb_write__5__addr = 0x40U;
    co_await vlSelfRef.__VtrigSched_h54fcdc7e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge opc_apb_top_tb.PCLK)", 
                                                         "tb/opc_apb_top_tb.v", 
                                                         168);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.opc_apb_top_tb__DOT__PSEL = 1U;
    vlSelfRef.opc_apb_top_tb__DOT__PENABLE = 0U;
    vlSelfRef.opc_apb_top_tb__DOT__PWRITE = 1U;
    vlSelfRef.opc_apb_top_tb__DOT__PADDR = __Vtask_opc_apb_top_tb__DOT__apb_write__5__addr;
    vlSelfRef.opc_apb_top_tb__DOT__PWDATA = __Vtask_opc_apb_top_tb__DOT__apb_write__5__data;
    co_await vlSelfRef.__VtrigSched_h54fcdc7e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge opc_apb_top_tb.PCLK)", 
                                                         "tb/opc_apb_top_tb.v", 
                                                         181);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.opc_apb_top_tb__DOT__PENABLE = 1U;
    co_await vlSelfRef.__VtrigSched_h54fcdc7e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge opc_apb_top_tb.PCLK)", 
                                                         "tb/opc_apb_top_tb.v", 
                                                         189);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    while ((1U & (~ (IData)(vlSelfRef.opc_apb_top_tb__DOT__PREADY)))) {
        co_await vlSelfRef.__VtrigSched_h54fcdc7e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge opc_apb_top_tb.PCLK)", 
                                                             "tb/opc_apb_top_tb.v", 
                                                             192);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.opc_apb_top_tb__DOT__PSEL = 0U;
    vlSelfRef.opc_apb_top_tb__DOT__PENABLE = 0U;
    vlSelfRef.opc_apb_top_tb__DOT__PWRITE = 0U;
    if (vlSelfRef.opc_apb_top_tb__DOT__PSLVERR) {
        VL_WRITEF_NX("PASS : Invalid Address\n",0);
        vlSelfRef.opc_apb_top_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelfRef.opc_apb_top_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL : Invalid Address\n",0);
        vlSelfRef.opc_apb_top_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelfRef.opc_apb_top_tb__DOT__fail_count);
    }
    __Vtask_opc_apb_top_tb__DOT__apb_write__6__data = 0xaaaaaaaaU;
    __Vtask_opc_apb_top_tb__DOT__apb_write__6__addr = 0U;
    co_await vlSelfRef.__VtrigSched_h54fcdc7e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge opc_apb_top_tb.PCLK)", 
                                                         "tb/opc_apb_top_tb.v", 
                                                         168);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.opc_apb_top_tb__DOT__PSEL = 1U;
    vlSelfRef.opc_apb_top_tb__DOT__PENABLE = 0U;
    vlSelfRef.opc_apb_top_tb__DOT__PWRITE = 1U;
    vlSelfRef.opc_apb_top_tb__DOT__PADDR = __Vtask_opc_apb_top_tb__DOT__apb_write__6__addr;
    vlSelfRef.opc_apb_top_tb__DOT__PWDATA = __Vtask_opc_apb_top_tb__DOT__apb_write__6__data;
    co_await vlSelfRef.__VtrigSched_h54fcdc7e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge opc_apb_top_tb.PCLK)", 
                                                         "tb/opc_apb_top_tb.v", 
                                                         181);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.opc_apb_top_tb__DOT__PENABLE = 1U;
    co_await vlSelfRef.__VtrigSched_h54fcdc7e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge opc_apb_top_tb.PCLK)", 
                                                         "tb/opc_apb_top_tb.v", 
                                                         189);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    while ((1U & (~ (IData)(vlSelfRef.opc_apb_top_tb__DOT__PREADY)))) {
        co_await vlSelfRef.__VtrigSched_h54fcdc7e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge opc_apb_top_tb.PCLK)", 
                                                             "tb/opc_apb_top_tb.v", 
                                                             192);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.opc_apb_top_tb__DOT__PSEL = 0U;
    vlSelfRef.opc_apb_top_tb__DOT__PENABLE = 0U;
    vlSelfRef.opc_apb_top_tb__DOT__PWRITE = 0U;
    __Vtask_opc_apb_top_tb__DOT__apb_write__7__data = 0xffffffffU;
    __Vtask_opc_apb_top_tb__DOT__apb_write__7__addr = 4U;
    co_await vlSelfRef.__VtrigSched_h54fcdc7e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge opc_apb_top_tb.PCLK)", 
                                                         "tb/opc_apb_top_tb.v", 
                                                         168);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.opc_apb_top_tb__DOT__PSEL = 1U;
    vlSelfRef.opc_apb_top_tb__DOT__PENABLE = 0U;
    vlSelfRef.opc_apb_top_tb__DOT__PWRITE = 1U;
    vlSelfRef.opc_apb_top_tb__DOT__PADDR = __Vtask_opc_apb_top_tb__DOT__apb_write__7__addr;
    vlSelfRef.opc_apb_top_tb__DOT__PWDATA = __Vtask_opc_apb_top_tb__DOT__apb_write__7__data;
    co_await vlSelfRef.__VtrigSched_h54fcdc7e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge opc_apb_top_tb.PCLK)", 
                                                         "tb/opc_apb_top_tb.v", 
                                                         181);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.opc_apb_top_tb__DOT__PENABLE = 1U;
    co_await vlSelfRef.__VtrigSched_h54fcdc7e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge opc_apb_top_tb.PCLK)", 
                                                         "tb/opc_apb_top_tb.v", 
                                                         189);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    while ((1U & (~ (IData)(vlSelfRef.opc_apb_top_tb__DOT__PREADY)))) {
        co_await vlSelfRef.__VtrigSched_h54fcdc7e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge opc_apb_top_tb.PCLK)", 
                                                             "tb/opc_apb_top_tb.v", 
                                                             192);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.opc_apb_top_tb__DOT__PSEL = 0U;
    vlSelfRef.opc_apb_top_tb__DOT__PENABLE = 0U;
    vlSelfRef.opc_apb_top_tb__DOT__PWRITE = 0U;
    __Vtask_opc_apb_top_tb__DOT__apb_read__8__addr = 0U;
    co_await vlSelfRef.__VtrigSched_h54fcdc7e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge opc_apb_top_tb.PCLK)", 
                                                         "tb/opc_apb_top_tb.v", 
                                                         221);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.opc_apb_top_tb__DOT__PSEL = 1U;
    vlSelfRef.opc_apb_top_tb__DOT__PENABLE = 0U;
    vlSelfRef.opc_apb_top_tb__DOT__PWRITE = 0U;
    vlSelfRef.opc_apb_top_tb__DOT__PADDR = __Vtask_opc_apb_top_tb__DOT__apb_read__8__addr;
    co_await vlSelfRef.__VtrigSched_h54fcdc7e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge opc_apb_top_tb.PCLK)", 
                                                         "tb/opc_apb_top_tb.v", 
                                                         233);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.opc_apb_top_tb__DOT__PENABLE = 1U;
    co_await vlSelfRef.__VtrigSched_h54fcdc7e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge opc_apb_top_tb.PCLK)", 
                                                         "tb/opc_apb_top_tb.v", 
                                                         241);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    while ((1U & (~ (IData)(vlSelfRef.opc_apb_top_tb__DOT__PREADY)))) {
        co_await vlSelfRef.__VtrigSched_h54fcdc7e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge opc_apb_top_tb.PCLK)", 
                                                             "tb/opc_apb_top_tb.v", 
                                                             244);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    __Vtask_opc_apb_top_tb__DOT__apb_read__8__data 
        = vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__reg_rdata_w;
    vlSelfRef.opc_apb_top_tb__DOT__PSEL = 0U;
    vlSelfRef.opc_apb_top_tb__DOT__PENABLE = 0U;
    vlSelfRef.opc_apb_top_tb__DOT__read_data = __Vtask_opc_apb_top_tb__DOT__apb_read__8__data;
    VL_WRITEF_NX("--------------------------------\nMULTIPLE TRANSACTION TEST\nExpected = aaaaaaaa\nRead     = %x\n--------------------------------\n",0,
                 32,vlSelfRef.opc_apb_top_tb__DOT__read_data);
    if ((0xaaaaaaaaU == vlSelfRef.opc_apb_top_tb__DOT__read_data)) {
        VL_WRITEF_NX("PASS : Multiple Transaction\n",0);
        vlSelfRef.opc_apb_top_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelfRef.opc_apb_top_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL : Multiple Transaction\n",0);
        vlSelfRef.opc_apb_top_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelfRef.opc_apb_top_tb__DOT__fail_count);
    }
    VL_WRITEF_NX("\n==============================================\n OPC APB TOP Verification Summary\n==============================================\nPassed Checks : %0d\nFailed Checks : %0d\n",0,
                 32,vlSelfRef.opc_apb_top_tb__DOT__pass_count,
                 32,vlSelfRef.opc_apb_top_tb__DOT__fail_count);
    if ((0U == vlSelfRef.opc_apb_top_tb__DOT__fail_count)) {
        VL_WRITEF_NX("OVERALL RESULT : PASS\n",0);
    } else {
        VL_WRITEF_NX("OVERALL RESULT : FAIL\n",0);
    }
    VL_WRITEF_NX("==============================================\n",0);
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/opc_apb_top_tb.v", 
                                         416);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("tb/opc_apb_top_tb.v", 418, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

void Vopc_apb_top_tb___024root___act_comb__TOP__0(Vopc_apb_top_tb___024root* vlSelf);

void Vopc_apb_top_tb___024root___eval_act(Vopc_apb_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopc_apb_top_tb___024root___eval_act\n"); );
    Vopc_apb_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((5ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vopc_apb_top_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vopc_apb_top_tb___024root___act_comb__TOP__0(Vopc_apb_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopc_apb_top_tb___024root___act_comb__TOP__0\n"); );
    Vopc_apb_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__u_apb_wrapper__DOT__apb_access_w 
        = ((IData)(vlSelfRef.opc_apb_top_tb__DOT__PENABLE) 
           & (IData)(vlSelfRef.opc_apb_top_tb__DOT__PSEL));
    vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__u_apb_wrapper__DOT__apb_write_access_w 
        = ((IData)(vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__u_apb_wrapper__DOT__apb_access_w) 
           & (IData)(vlSelfRef.opc_apb_top_tb__DOT__PWRITE));
    vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__u_apb_wrapper__DOT__apb_read_access_w 
        = ((~ (IData)(vlSelfRef.opc_apb_top_tb__DOT__PWRITE)) 
           & (IData)(vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__u_apb_wrapper__DOT__apb_access_w));
}

void Vopc_apb_top_tb___024root___nba_sequent__TOP__0(Vopc_apb_top_tb___024root* vlSelf);

void Vopc_apb_top_tb___024root___eval_nba(Vopc_apb_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopc_apb_top_tb___024root___eval_nba\n"); );
    Vopc_apb_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vopc_apb_top_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vopc_apb_top_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vopc_apb_top_tb___024root___nba_sequent__TOP__0(Vopc_apb_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopc_apb_top_tb___024root___nba_sequent__TOP__0\n"); );
    Vopc_apb_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__opc_apb_top_tb__DOT__dut__DOT__u_opc_top__DOT__u_crb__DOT__reg_file__v0;
    __VdlyVal__opc_apb_top_tb__DOT__dut__DOT__u_opc_top__DOT__u_crb__DOT__reg_file__v0 = 0;
    CData/*2:0*/ __VdlyDim0__opc_apb_top_tb__DOT__dut__DOT__u_opc_top__DOT__u_crb__DOT__reg_file__v0;
    __VdlyDim0__opc_apb_top_tb__DOT__dut__DOT__u_opc_top__DOT__u_crb__DOT__reg_file__v0 = 0;
    CData/*0:0*/ __VdlySet__opc_apb_top_tb__DOT__dut__DOT__u_opc_top__DOT__u_crb__DOT__reg_file__v0;
    __VdlySet__opc_apb_top_tb__DOT__dut__DOT__u_opc_top__DOT__u_crb__DOT__reg_file__v0 = 0;
    CData/*0:0*/ __VdlySet__opc_apb_top_tb__DOT__dut__DOT__u_opc_top__DOT__u_crb__DOT__reg_file__v1;
    __VdlySet__opc_apb_top_tb__DOT__dut__DOT__u_opc_top__DOT__u_crb__DOT__reg_file__v1 = 0;
    // Body
    __VdlySet__opc_apb_top_tb__DOT__dut__DOT__u_opc_top__DOT__u_crb__DOT__reg_file__v0 = 0U;
    __VdlySet__opc_apb_top_tb__DOT__dut__DOT__u_opc_top__DOT__u_crb__DOT__reg_file__v1 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.opc_apb_top_tb__DOT__PRESETn)))) {
        vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__u_opc_top__DOT__u_crb__DOT__i = 8U;
    }
    if (vlSelfRef.opc_apb_top_tb__DOT__PRESETn) {
        vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__u_opc_top__DOT__u_gpio__DOT__i = 8U;
        if (vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__reg_write_en_w) {
            __VdlyVal__opc_apb_top_tb__DOT__dut__DOT__u_opc_top__DOT__u_crb__DOT__reg_file__v0 
                = vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__reg_wdata_w;
            __VdlyDim0__opc_apb_top_tb__DOT__dut__DOT__u_opc_top__DOT__u_crb__DOT__reg_file__v0 
                = (7U & ((IData)(vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__reg_addr_w) 
                         >> 2U));
            __VdlySet__opc_apb_top_tb__DOT__dut__DOT__u_opc_top__DOT__u_crb__DOT__reg_file__v0 = 1U;
        }
        vlSelfRef.opc_apb_top_tb__DOT__gpio_input_o 
            = vlSelfRef.opc_apb_top_tb__DOT__gpio_in_i;
        vlSelfRef.opc_apb_top_tb__DOT__gpio_out_o = 
            (0xffU & (vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__u_opc_top__DOT__u_crb__DOT__reg_file
                      [1U] & vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__u_opc_top__DOT__u_crb__DOT__reg_file
                      [0U]));
        vlSelfRef.opc_apb_top_tb__DOT__PREADY = 0U;
        vlSelfRef.opc_apb_top_tb__DOT__PSLVERR = 0U;
        vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__reg_read_en_w = 0U;
        if ((1U & (~ (IData)(vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__u_apb_wrapper__DOT__apb_write_access_w)))) {
            if (vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__u_apb_wrapper__DOT__apb_read_access_w) {
                vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__reg_read_en_w 
                    = (8U > (0xffU & (vlSelfRef.opc_apb_top_tb__DOT__PADDR 
                                      >> 2U)));
            }
        }
        vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__reg_write_en_w = 0U;
        if (vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__u_apb_wrapper__DOT__apb_write_access_w) {
            vlSelfRef.opc_apb_top_tb__DOT__PREADY = 1U;
            vlSelfRef.opc_apb_top_tb__DOT__PSLVERR 
                = (8U <= (0xffU & (vlSelfRef.opc_apb_top_tb__DOT__PADDR 
                                   >> 2U)));
            if ((8U > (0xffU & (vlSelfRef.opc_apb_top_tb__DOT__PADDR 
                                >> 2U)))) {
                vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__reg_wdata_w 
                    = vlSelfRef.opc_apb_top_tb__DOT__PWDATA;
                vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__reg_addr_w 
                    = (0xffU & vlSelfRef.opc_apb_top_tb__DOT__PADDR);
                vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__reg_write_en_w = 1U;
            } else {
                vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__reg_write_en_w = 0U;
            }
        } else if (vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__u_apb_wrapper__DOT__apb_read_access_w) {
            vlSelfRef.opc_apb_top_tb__DOT__PREADY = 1U;
            vlSelfRef.opc_apb_top_tb__DOT__PSLVERR 
                = (8U <= (0xffU & (vlSelfRef.opc_apb_top_tb__DOT__PADDR 
                                   >> 2U)));
            if ((8U > (0xffU & (vlSelfRef.opc_apb_top_tb__DOT__PADDR 
                                >> 2U)))) {
                vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__reg_addr_w 
                    = (0xffU & vlSelfRef.opc_apb_top_tb__DOT__PADDR);
            }
        }
    } else {
        __VdlySet__opc_apb_top_tb__DOT__dut__DOT__u_opc_top__DOT__u_crb__DOT__reg_file__v1 = 1U;
        vlSelfRef.opc_apb_top_tb__DOT__gpio_input_o = 0U;
        vlSelfRef.opc_apb_top_tb__DOT__gpio_out_o = 0U;
        vlSelfRef.opc_apb_top_tb__DOT__PREADY = 0U;
        vlSelfRef.opc_apb_top_tb__DOT__PSLVERR = 0U;
        vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__reg_read_en_w = 0U;
        vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__reg_wdata_w = 0U;
        vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__reg_write_en_w = 0U;
        vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__reg_addr_w = 0U;
    }
    if (__VdlySet__opc_apb_top_tb__DOT__dut__DOT__u_opc_top__DOT__u_crb__DOT__reg_file__v0) {
        vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__u_opc_top__DOT__u_crb__DOT__reg_file[__VdlyDim0__opc_apb_top_tb__DOT__dut__DOT__u_opc_top__DOT__u_crb__DOT__reg_file__v0] 
            = __VdlyVal__opc_apb_top_tb__DOT__dut__DOT__u_opc_top__DOT__u_crb__DOT__reg_file__v0;
    }
    if (__VdlySet__opc_apb_top_tb__DOT__dut__DOT__u_opc_top__DOT__u_crb__DOT__reg_file__v1) {
        vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__u_opc_top__DOT__u_crb__DOT__reg_file[0U] = 0U;
        vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__u_opc_top__DOT__u_crb__DOT__reg_file[1U] = 0U;
        vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__u_opc_top__DOT__u_crb__DOT__reg_file[2U] = 0U;
        vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__u_opc_top__DOT__u_crb__DOT__reg_file[3U] = 0U;
        vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__u_opc_top__DOT__u_crb__DOT__reg_file[4U] = 0U;
        vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__u_opc_top__DOT__u_crb__DOT__reg_file[5U] = 0U;
        vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__u_opc_top__DOT__u_crb__DOT__reg_file[6U] = 0U;
        vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__u_opc_top__DOT__u_crb__DOT__reg_file[7U] = 0U;
    }
    if (VL_UNLIKELY(((((IData)(vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__reg_write_en_w) 
                       | (IData)(vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__reg_read_en_w)) 
                      & (0U != (3U & (IData)(vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__reg_addr_w))))))) {
        VL_WRITEF_NX("WARNING: CRB - Unaligned register access at address %x\n",0,
                     8,vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__reg_addr_w);
    }
    vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__reg_rdata_w = 0U;
    if (vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__reg_read_en_w) {
        vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__reg_rdata_w 
            = vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__u_opc_top__DOT__u_crb__DOT__reg_file
            [(7U & ((IData)(vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__reg_addr_w) 
                    >> 2U))];
    }
}

void Vopc_apb_top_tb___024root___timing_resume(Vopc_apb_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopc_apb_top_tb___024root___timing_resume\n"); );
    Vopc_apb_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h54fcdc7e__0.resume(
                                                   "@(posedge opc_apb_top_tb.PCLK)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vopc_apb_top_tb___024root___timing_commit(Vopc_apb_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopc_apb_top_tb___024root___timing_commit\n"); );
    Vopc_apb_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h54fcdc7e__0.commit(
                                                   "@(posedge opc_apb_top_tb.PCLK)");
    }
}

void Vopc_apb_top_tb___024root___eval_triggers__act(Vopc_apb_top_tb___024root* vlSelf);

bool Vopc_apb_top_tb___024root___eval_phase__act(Vopc_apb_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopc_apb_top_tb___024root___eval_phase__act\n"); );
    Vopc_apb_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vopc_apb_top_tb___024root___eval_triggers__act(vlSelf);
    Vopc_apb_top_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vopc_apb_top_tb___024root___timing_resume(vlSelf);
        Vopc_apb_top_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vopc_apb_top_tb___024root___eval_phase__nba(Vopc_apb_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopc_apb_top_tb___024root___eval_phase__nba\n"); );
    Vopc_apb_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vopc_apb_top_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vopc_apb_top_tb___024root___dump_triggers__nba(Vopc_apb_top_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vopc_apb_top_tb___024root___dump_triggers__act(Vopc_apb_top_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vopc_apb_top_tb___024root___eval(Vopc_apb_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopc_apb_top_tb___024root___eval\n"); );
    Vopc_apb_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vopc_apb_top_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/opc_apb_top_tb.v", 27, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vopc_apb_top_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/opc_apb_top_tb.v", 27, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vopc_apb_top_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vopc_apb_top_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vopc_apb_top_tb___024root___eval_debug_assertions(Vopc_apb_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopc_apb_top_tb___024root___eval_debug_assertions\n"); );
    Vopc_apb_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
