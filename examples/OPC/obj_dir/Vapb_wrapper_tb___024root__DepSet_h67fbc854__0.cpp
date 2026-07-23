// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vapb_wrapper_tb.h for the primary calling header

#include "Vapb_wrapper_tb__pch.h"
#include "Vapb_wrapper_tb__Syms.h"
#include "Vapb_wrapper_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vapb_wrapper_tb___024root___eval_initial__TOP__Vtiming__1(Vapb_wrapper_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_wrapper_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vapb_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_apb_wrapper_tb__DOT__reset_dut__0__apb_wrapper_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_apb_wrapper_tb__DOT__reset_dut__0__apb_wrapper_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_apb_wrapper_tb__DOT__reset_dut__0__apb_wrapper_tb__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_apb_wrapper_tb__DOT__reset_dut__0__apb_wrapper_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ __Vtask_apb_wrapper_tb__DOT__apb_write__1__address;
    __Vtask_apb_wrapper_tb__DOT__apb_write__1__address = 0;
    IData/*31:0*/ __Vtask_apb_wrapper_tb__DOT__apb_write__1__data;
    __Vtask_apb_wrapper_tb__DOT__apb_write__1__data = 0;
    IData/*31:0*/ __Vtask_apb_wrapper_tb__DOT__apb_read__2__address;
    __Vtask_apb_wrapper_tb__DOT__apb_read__2__address = 0;
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x70706572U;
    __Vtemp_1[2U] = 0x5f777261U;
    __Vtemp_1[3U] = 0x617062U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    __Vtask_apb_wrapper_tb__DOT__reset_dut__0__apb_wrapper_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_apb_wrapper_tb__DOT__reset_dut__0__apb_wrapper_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    vlSelfRef.apb_wrapper_tb__DOT__PRESETn = 0U;
    vlSelfRef.apb_wrapper_tb__DOT__PSEL = 0U;
    vlSelfRef.apb_wrapper_tb__DOT__PENABLE = 0U;
    vlSelfRef.apb_wrapper_tb__DOT__PWRITE = 0U;
    vlSelfRef.apb_wrapper_tb__DOT__PADDR = 0U;
    vlSelfRef.apb_wrapper_tb__DOT__PWDATA = 0U;
    vlSelfRef.apb_wrapper_tb__DOT__rdata_i = 0U;
    co_await vlSelfRef.__VtrigSched_h77c768b5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge apb_wrapper_tb.PCLK)", 
                                                         "tb/apb_wrapper_tb.v", 
                                                         118);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_apb_wrapper_tb__DOT__reset_dut__0__apb_wrapper_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 4U;
    co_await vlSelfRef.__VtrigSched_h77c768b5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge apb_wrapper_tb.PCLK)", 
                                                         "tb/apb_wrapper_tb.v", 
                                                         118);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_apb_wrapper_tb__DOT__reset_dut__0__apb_wrapper_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 3U;
    co_await vlSelfRef.__VtrigSched_h77c768b5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge apb_wrapper_tb.PCLK)", 
                                                         "tb/apb_wrapper_tb.v", 
                                                         118);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_apb_wrapper_tb__DOT__reset_dut__0__apb_wrapper_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 2U;
    co_await vlSelfRef.__VtrigSched_h77c768b5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge apb_wrapper_tb.PCLK)", 
                                                         "tb/apb_wrapper_tb.v", 
                                                         118);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_apb_wrapper_tb__DOT__reset_dut__0__apb_wrapper_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h77c768b5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge apb_wrapper_tb.PCLK)", 
                                                         "tb/apb_wrapper_tb.v", 
                                                         118);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_apb_wrapper_tb__DOT__reset_dut__0__apb_wrapper_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    vlSelfRef.apb_wrapper_tb__DOT__PRESETn = 1U;
    co_await vlSelfRef.__VtrigSched_h77c768b5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge apb_wrapper_tb.PCLK)", 
                                                         "tb/apb_wrapper_tb.v", 
                                                         122);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_apb_wrapper_tb__DOT__reset_dut__0__apb_wrapper_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 1U;
    co_await vlSelfRef.__VtrigSched_h77c768b5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge apb_wrapper_tb.PCLK)", 
                                                         "tb/apb_wrapper_tb.v", 
                                                         122);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_apb_wrapper_tb__DOT__reset_dut__0__apb_wrapper_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0U;
    vlSelfRef.apb_wrapper_tb__DOT__pass_count = 0U;
    vlSelfRef.apb_wrapper_tb__DOT__fail_count = 0U;
    VL_WRITEF_NX("------------------------------------------------\nAPB WRITE TEST\n------------------------------------------------\n",0);
    __Vtask_apb_wrapper_tb__DOT__apb_write__1__data = 0x12345678U;
    __Vtask_apb_wrapper_tb__DOT__apb_write__1__address = 4U;
    co_await vlSelfRef.__VtrigSched_h77c768b5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge apb_wrapper_tb.PCLK)", 
                                                         "tb/apb_wrapper_tb.v", 
                                                         139);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.apb_wrapper_tb__DOT__PSEL = 1U;
    vlSelfRef.apb_wrapper_tb__DOT__PENABLE = 0U;
    vlSelfRef.apb_wrapper_tb__DOT__PWRITE = 1U;
    vlSelfRef.apb_wrapper_tb__DOT__PADDR = __Vtask_apb_wrapper_tb__DOT__apb_write__1__address;
    vlSelfRef.apb_wrapper_tb__DOT__PWDATA = __Vtask_apb_wrapper_tb__DOT__apb_write__1__data;
    co_await vlSelfRef.__VtrigSched_h77c768b5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge apb_wrapper_tb.PCLK)", 
                                                         "tb/apb_wrapper_tb.v", 
                                                         148);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.apb_wrapper_tb__DOT__PENABLE = 1U;
    co_await vlSelfRef.__VtrigSched_h77c768b5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge apb_wrapper_tb.PCLK)", 
                                                         "tb/apb_wrapper_tb.v", 
                                                         152);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.apb_wrapper_tb__DOT__PSEL = 0U;
    vlSelfRef.apb_wrapper_tb__DOT__PENABLE = 0U;
    vlSelfRef.apb_wrapper_tb__DOT__PWRITE = 0U;
    if (vlSelfRef.apb_wrapper_tb__DOT__write_en_o) {
        VL_WRITEF_NX("PASS : Write Enable Generated\n",0);
        vlSelfRef.apb_wrapper_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelfRef.apb_wrapper_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL : Write Enable NOT Generated\n",0);
        vlSelfRef.apb_wrapper_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelfRef.apb_wrapper_tb__DOT__fail_count);
    }
    vlSelfRef.apb_wrapper_tb__DOT__rdata_i = 0xa5a55a5aU;
    __Vtask_apb_wrapper_tb__DOT__apb_read__2__address = 4U;
    co_await vlSelfRef.__VtrigSched_h77c768b5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge apb_wrapper_tb.PCLK)", 
                                                         "tb/apb_wrapper_tb.v", 
                                                         172);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.apb_wrapper_tb__DOT__PSEL = 1U;
    vlSelfRef.apb_wrapper_tb__DOT__PENABLE = 0U;
    vlSelfRef.apb_wrapper_tb__DOT__PWRITE = 0U;
    vlSelfRef.apb_wrapper_tb__DOT__PADDR = __Vtask_apb_wrapper_tb__DOT__apb_read__2__address;
    co_await vlSelfRef.__VtrigSched_h77c768b5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge apb_wrapper_tb.PCLK)", 
                                                         "tb/apb_wrapper_tb.v", 
                                                         180);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.apb_wrapper_tb__DOT__PENABLE = 1U;
    co_await vlSelfRef.__VtrigSched_h77c768b5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge apb_wrapper_tb.PCLK)", 
                                                         "tb/apb_wrapper_tb.v", 
                                                         184);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.apb_wrapper_tb__DOT__PSEL = 0U;
    vlSelfRef.apb_wrapper_tb__DOT__PENABLE = 0U;
    if (vlSelfRef.apb_wrapper_tb__DOT__read_en_o) {
        VL_WRITEF_NX("PASS : Read Enable Generated\n",0);
        vlSelfRef.apb_wrapper_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelfRef.apb_wrapper_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL : Read Enable NOT Generated\n",0);
        vlSelfRef.apb_wrapper_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelfRef.apb_wrapper_tb__DOT__fail_count);
    }
    if ((0xa5a55a5aU == vlSelfRef.apb_wrapper_tb__DOT__PRDATA)) {
        VL_WRITEF_NX("PASS : Read Data Correct\n",0);
        vlSelfRef.apb_wrapper_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelfRef.apb_wrapper_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL : Read Data Incorrect\n",0);
        vlSelfRef.apb_wrapper_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelfRef.apb_wrapper_tb__DOT__fail_count);
    }
    co_await vlSelfRef.__VtrigSched_h77c768b5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge apb_wrapper_tb.PCLK)", 
                                                         "tb/apb_wrapper_tb.v", 
                                                         258);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h77c768b5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge apb_wrapper_tb.PCLK)", 
                                                         "tb/apb_wrapper_tb.v", 
                                                         258);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h77c768b5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge apb_wrapper_tb.PCLK)", 
                                                         "tb/apb_wrapper_tb.v", 
                                                         258);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h77c768b5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge apb_wrapper_tb.PCLK)", 
                                                         "tb/apb_wrapper_tb.v", 
                                                         258);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h77c768b5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge apb_wrapper_tb.PCLK)", 
                                                         "tb/apb_wrapper_tb.v", 
                                                         258);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h77c768b5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge apb_wrapper_tb.PCLK)", 
                                                         "tb/apb_wrapper_tb.v", 
                                                         258);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h77c768b5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge apb_wrapper_tb.PCLK)", 
                                                         "tb/apb_wrapper_tb.v", 
                                                         258);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h77c768b5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge apb_wrapper_tb.PCLK)", 
                                                         "tb/apb_wrapper_tb.v", 
                                                         258);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h77c768b5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge apb_wrapper_tb.PCLK)", 
                                                         "tb/apb_wrapper_tb.v", 
                                                         258);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h77c768b5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge apb_wrapper_tb.PCLK)", 
                                                         "tb/apb_wrapper_tb.v", 
                                                         258);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("\n==============================================\n      APB Wrapper Verification Summary\n==============================================\nPassed Checks : %0d\nFailed Checks : %0d\n",0,
                 32,vlSelfRef.apb_wrapper_tb__DOT__pass_count,
                 32,vlSelfRef.apb_wrapper_tb__DOT__fail_count);
    if ((0U == vlSelfRef.apb_wrapper_tb__DOT__fail_count)) {
        VL_WRITEF_NX("OVERALL RESULT : PASS\n",0);
    } else {
        VL_WRITEF_NX("OVERALL RESULT : FAIL\n",0);
    }
    VL_WRITEF_NX("==============================================\n",0);
    VL_FINISH_MT("tb/apb_wrapper_tb.v", 275, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vapb_wrapper_tb___024root___dump_triggers__act(Vapb_wrapper_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vapb_wrapper_tb___024root___eval_triggers__act(Vapb_wrapper_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_wrapper_tb___024root___eval_triggers__act\n"); );
    Vapb_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.apb_wrapper_tb__DOT__PCLK) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__apb_wrapper_tb__DOT__PCLK__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSelfRef.apb_wrapper_tb__DOT__PRESETn)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__apb_wrapper_tb__DOT__PRESETn__0)));
    vlSelfRef.__VactTriggered.setBit(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__apb_wrapper_tb__DOT__PCLK__0 
        = vlSelfRef.apb_wrapper_tb__DOT__PCLK;
    vlSelfRef.__Vtrigprevexpr___TOP__apb_wrapper_tb__DOT__PRESETn__0 
        = vlSelfRef.apb_wrapper_tb__DOT__PRESETn;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vapb_wrapper_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
