// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconfiguration_register_block_tb.h for the primary calling header

#include "Vconfiguration_register_block_tb__pch.h"
#include "Vconfiguration_register_block_tb___024root.h"

VL_ATTR_COLD void Vconfiguration_register_block_tb___024root___eval_initial__TOP(Vconfiguration_register_block_tb___024root* vlSelf);
VlCoroutine Vconfiguration_register_block_tb___024root___eval_initial__TOP__Vtiming__0(Vconfiguration_register_block_tb___024root* vlSelf);
VlCoroutine Vconfiguration_register_block_tb___024root___eval_initial__TOP__Vtiming__1(Vconfiguration_register_block_tb___024root* vlSelf);

void Vconfiguration_register_block_tb___024root___eval_initial(Vconfiguration_register_block_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfiguration_register_block_tb___024root___eval_initial\n"); );
    Vconfiguration_register_block_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vconfiguration_register_block_tb___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vconfiguration_register_block_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vconfiguration_register_block_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vconfiguration_register_block_tb___024root___eval_initial__TOP__Vtiming__0(Vconfiguration_register_block_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfiguration_register_block_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vconfiguration_register_block_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_configuration_register_block_tb__DOT__reset_dut__0__configuration_register_block_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_configuration_register_block_tb__DOT__reset_dut__0__configuration_register_block_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*7:0*/ __Vtask_configuration_register_block_tb__DOT__write_register__1__address;
    __Vtask_configuration_register_block_tb__DOT__write_register__1__address = 0;
    IData/*31:0*/ __Vtask_configuration_register_block_tb__DOT__write_register__1__data;
    __Vtask_configuration_register_block_tb__DOT__write_register__1__data = 0;
    CData/*7:0*/ __Vtask_configuration_register_block_tb__DOT__read_register__2__address;
    __Vtask_configuration_register_block_tb__DOT__read_register__2__address = 0;
    CData/*7:0*/ __Vtask_configuration_register_block_tb__DOT__write_register__3__address;
    __Vtask_configuration_register_block_tb__DOT__write_register__3__address = 0;
    IData/*31:0*/ __Vtask_configuration_register_block_tb__DOT__write_register__3__data;
    __Vtask_configuration_register_block_tb__DOT__write_register__3__data = 0;
    CData/*7:0*/ __Vtask_configuration_register_block_tb__DOT__read_register__4__address;
    __Vtask_configuration_register_block_tb__DOT__read_register__4__address = 0;
    CData/*7:0*/ __Vtask_configuration_register_block_tb__DOT__write_register__5__address;
    __Vtask_configuration_register_block_tb__DOT__write_register__5__address = 0;
    IData/*31:0*/ __Vtask_configuration_register_block_tb__DOT__write_register__5__data;
    __Vtask_configuration_register_block_tb__DOT__write_register__5__data = 0;
    CData/*7:0*/ __Vtask_configuration_register_block_tb__DOT__write_register__6__address;
    __Vtask_configuration_register_block_tb__DOT__write_register__6__address = 0;
    IData/*31:0*/ __Vtask_configuration_register_block_tb__DOT__write_register__6__data;
    __Vtask_configuration_register_block_tb__DOT__write_register__6__data = 0;
    CData/*7:0*/ __Vtask_configuration_register_block_tb__DOT__read_register__7__address;
    __Vtask_configuration_register_block_tb__DOT__read_register__7__address = 0;
    // Body
    VL_WRITEF_NX("\n=========================================\n OPC Configuration Register Block Test\n=========================================\n\n",0);
    __Vtask_configuration_register_block_tb__DOT__reset_dut__0__configuration_register_block_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    vlSelfRef.configuration_register_block_tb__DOT__rst_n = 0U;
    vlSelfRef.configuration_register_block_tb__DOT__write_en_i = 0U;
    vlSelfRef.configuration_register_block_tb__DOT__read_en_i = 0U;
    vlSelfRef.configuration_register_block_tb__DOT__addr_i = 0U;
    vlSelfRef.configuration_register_block_tb__DOT__wdata_i = 0U;
    co_await vlSelfRef.__VtrigSched_h8a5858c1__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge configuration_register_block_tb.clk)", 
                                                         "tb/configuration_register_block_tb.v", 
                                                         101);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_configuration_register_block_tb__DOT__reset_dut__0__configuration_register_block_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h8a5858c1__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge configuration_register_block_tb.clk)", 
                                                         "tb/configuration_register_block_tb.v", 
                                                         101);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_configuration_register_block_tb__DOT__reset_dut__0__configuration_register_block_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    vlSelfRef.configuration_register_block_tb__DOT__rst_n = 1U;
    co_await vlSelfRef.__VtrigSched_h8a5858c1__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge configuration_register_block_tb.clk)", 
                                                         "tb/configuration_register_block_tb.v", 
                                                         105);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((0U == (0xffU & vlSelfRef.configuration_register_block_tb__DOT__dut__DOT__reg_file
                 [0U])) & (0U == (0xffU & vlSelfRef.configuration_register_block_tb__DOT__dut__DOT__reg_file
                                  [1U])))) {
        VL_WRITEF_NX("PASS : Reset Test\n",0);
    } else {
        VL_WRITEF_NX("FAIL : Reset Test\n",0);
    }
    __Vtask_configuration_register_block_tb__DOT__write_register__1__data = 0xa5U;
    __Vtask_configuration_register_block_tb__DOT__write_register__1__address = 0U;
    co_await vlSelfRef.__VtrigSched_h8a5858c1__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge configuration_register_block_tb.clk)", 
                                                         "tb/configuration_register_block_tb.v", 
                                                         121);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.configuration_register_block_tb__DOT__write_en_i = 1U;
    vlSelfRef.configuration_register_block_tb__DOT__addr_i 
        = __Vtask_configuration_register_block_tb__DOT__write_register__1__address;
    vlSelfRef.configuration_register_block_tb__DOT__wdata_i 
        = __Vtask_configuration_register_block_tb__DOT__write_register__1__data;
    co_await vlSelfRef.__VtrigSched_h8a5858c1__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge configuration_register_block_tb.clk)", 
                                                         "tb/configuration_register_block_tb.v", 
                                                         127);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.configuration_register_block_tb__DOT__write_en_i = 0U;
    vlSelfRef.configuration_register_block_tb__DOT__addr_i = 0U;
    vlSelfRef.configuration_register_block_tb__DOT__wdata_i = 0U;
    if ((0xa5U == (0xffU & vlSelfRef.configuration_register_block_tb__DOT__dut__DOT__reg_file
                   [0U]))) {
        VL_WRITEF_NX("PASS : GPIO_DATA Write\n",0);
    } else {
        VL_WRITEF_NX("FAIL : GPIO_DATA Write\n",0);
    }
    __Vtask_configuration_register_block_tb__DOT__read_register__2__address = 0U;
    co_await vlSelfRef.__VtrigSched_h8a5858c1__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge configuration_register_block_tb.clk)", 
                                                         "tb/configuration_register_block_tb.v", 
                                                         146);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.configuration_register_block_tb__DOT__read_en_i = 1U;
    vlSelfRef.configuration_register_block_tb__DOT__addr_i 
        = __Vtask_configuration_register_block_tb__DOT__read_register__2__address;
    co_await vlSelfRef.__VtrigSched_h8a5858c1__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge configuration_register_block_tb.clk)", 
                                                         "tb/configuration_register_block_tb.v", 
                                                         151);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.configuration_register_block_tb__DOT__read_en_i = 0U;
    vlSelfRef.configuration_register_block_tb__DOT__addr_i = 0U;
    if ((0xa5U == vlSelfRef.configuration_register_block_tb__DOT__rdata_o)) {
        VL_WRITEF_NX("PASS : GPIO_DATA Read\n",0);
    } else {
        VL_WRITEF_NX("FAIL : GPIO_DATA Read\n",0);
    }
    __Vtask_configuration_register_block_tb__DOT__write_register__3__data = 0xffU;
    __Vtask_configuration_register_block_tb__DOT__write_register__3__address = 4U;
    co_await vlSelfRef.__VtrigSched_h8a5858c1__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge configuration_register_block_tb.clk)", 
                                                         "tb/configuration_register_block_tb.v", 
                                                         121);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.configuration_register_block_tb__DOT__write_en_i = 1U;
    vlSelfRef.configuration_register_block_tb__DOT__addr_i 
        = __Vtask_configuration_register_block_tb__DOT__write_register__3__address;
    vlSelfRef.configuration_register_block_tb__DOT__wdata_i 
        = __Vtask_configuration_register_block_tb__DOT__write_register__3__data;
    co_await vlSelfRef.__VtrigSched_h8a5858c1__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge configuration_register_block_tb.clk)", 
                                                         "tb/configuration_register_block_tb.v", 
                                                         127);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.configuration_register_block_tb__DOT__write_en_i = 0U;
    vlSelfRef.configuration_register_block_tb__DOT__addr_i = 0U;
    vlSelfRef.configuration_register_block_tb__DOT__wdata_i = 0U;
    if ((0xffU == (0xffU & vlSelfRef.configuration_register_block_tb__DOT__dut__DOT__reg_file
                   [1U]))) {
        VL_WRITEF_NX("PASS : GPIO_DIR Write\n",0);
    } else {
        VL_WRITEF_NX("FAIL : GPIO_DIR Write\n",0);
    }
    __Vtask_configuration_register_block_tb__DOT__read_register__4__address = 4U;
    co_await vlSelfRef.__VtrigSched_h8a5858c1__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge configuration_register_block_tb.clk)", 
                                                         "tb/configuration_register_block_tb.v", 
                                                         146);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.configuration_register_block_tb__DOT__read_en_i = 1U;
    vlSelfRef.configuration_register_block_tb__DOT__addr_i 
        = __Vtask_configuration_register_block_tb__DOT__read_register__4__address;
    co_await vlSelfRef.__VtrigSched_h8a5858c1__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge configuration_register_block_tb.clk)", 
                                                         "tb/configuration_register_block_tb.v", 
                                                         151);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.configuration_register_block_tb__DOT__read_en_i = 0U;
    vlSelfRef.configuration_register_block_tb__DOT__addr_i = 0U;
    if ((0xffU == vlSelfRef.configuration_register_block_tb__DOT__rdata_o)) {
        VL_WRITEF_NX("PASS : GPIO_DIR Read\n",0);
    } else {
        VL_WRITEF_NX("FAIL : GPIO_DIR Read\n",0);
    }
    __Vtask_configuration_register_block_tb__DOT__write_register__5__data = 0x55U;
    __Vtask_configuration_register_block_tb__DOT__write_register__5__address = 0U;
    co_await vlSelfRef.__VtrigSched_h8a5858c1__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge configuration_register_block_tb.clk)", 
                                                         "tb/configuration_register_block_tb.v", 
                                                         121);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.configuration_register_block_tb__DOT__write_en_i = 1U;
    vlSelfRef.configuration_register_block_tb__DOT__addr_i 
        = __Vtask_configuration_register_block_tb__DOT__write_register__5__address;
    vlSelfRef.configuration_register_block_tb__DOT__wdata_i 
        = __Vtask_configuration_register_block_tb__DOT__write_register__5__data;
    co_await vlSelfRef.__VtrigSched_h8a5858c1__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge configuration_register_block_tb.clk)", 
                                                         "tb/configuration_register_block_tb.v", 
                                                         127);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.configuration_register_block_tb__DOT__write_en_i = 0U;
    vlSelfRef.configuration_register_block_tb__DOT__addr_i = 0U;
    vlSelfRef.configuration_register_block_tb__DOT__wdata_i = 0U;
    __Vtask_configuration_register_block_tb__DOT__write_register__6__data = 0xaaU;
    __Vtask_configuration_register_block_tb__DOT__write_register__6__address = 4U;
    co_await vlSelfRef.__VtrigSched_h8a5858c1__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge configuration_register_block_tb.clk)", 
                                                         "tb/configuration_register_block_tb.v", 
                                                         121);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.configuration_register_block_tb__DOT__write_en_i = 1U;
    vlSelfRef.configuration_register_block_tb__DOT__addr_i 
        = __Vtask_configuration_register_block_tb__DOT__write_register__6__address;
    vlSelfRef.configuration_register_block_tb__DOT__wdata_i 
        = __Vtask_configuration_register_block_tb__DOT__write_register__6__data;
    co_await vlSelfRef.__VtrigSched_h8a5858c1__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge configuration_register_block_tb.clk)", 
                                                         "tb/configuration_register_block_tb.v", 
                                                         127);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.configuration_register_block_tb__DOT__write_en_i = 0U;
    vlSelfRef.configuration_register_block_tb__DOT__addr_i = 0U;
    vlSelfRef.configuration_register_block_tb__DOT__wdata_i = 0U;
    if (((0x55U == (0xffU & vlSelfRef.configuration_register_block_tb__DOT__dut__DOT__reg_file
                    [0U])) & (0xaaU == (0xffU & vlSelfRef.configuration_register_block_tb__DOT__dut__DOT__reg_file
                                        [1U])))) {
        VL_WRITEF_NX("PASS : Multiple Register Test\n",0);
    } else {
        VL_WRITEF_NX("FAIL : Multiple Register Test\n",0);
    }
    __Vtask_configuration_register_block_tb__DOT__read_register__7__address = 0x7cU;
    co_await vlSelfRef.__VtrigSched_h8a5858c1__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge configuration_register_block_tb.clk)", 
                                                         "tb/configuration_register_block_tb.v", 
                                                         146);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.configuration_register_block_tb__DOT__read_en_i = 1U;
    vlSelfRef.configuration_register_block_tb__DOT__addr_i 
        = __Vtask_configuration_register_block_tb__DOT__read_register__7__address;
    co_await vlSelfRef.__VtrigSched_h8a5858c1__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge configuration_register_block_tb.clk)", 
                                                         "tb/configuration_register_block_tb.v", 
                                                         151);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.configuration_register_block_tb__DOT__read_en_i = 0U;
    vlSelfRef.configuration_register_block_tb__DOT__addr_i = 0U;
    if ((0U == vlSelfRef.configuration_register_block_tb__DOT__rdata_o)) {
        VL_WRITEF_NX("PASS : Invalid Address Test\n",0);
    } else {
        VL_WRITEF_NX("FAIL : Invalid Address Test\n",0);
    }
    VL_WRITEF_NX("\n=========================================\n CRB Verification Completed\n=========================================\n\n",0);
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/configuration_register_block_tb.v", 
                                         249);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("tb/configuration_register_block_tb.v", 251, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

void Vconfiguration_register_block_tb___024root___act_comb__TOP__0(Vconfiguration_register_block_tb___024root* vlSelf);

void Vconfiguration_register_block_tb___024root___eval_act(Vconfiguration_register_block_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfiguration_register_block_tb___024root___eval_act\n"); );
    Vconfiguration_register_block_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((5ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vconfiguration_register_block_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vconfiguration_register_block_tb___024root___act_comb__TOP__0(Vconfiguration_register_block_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfiguration_register_block_tb___024root___act_comb__TOP__0\n"); );
    Vconfiguration_register_block_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelfRef.configuration_register_block_tb__DOT__write_en_i) 
                       | (IData)(vlSelfRef.configuration_register_block_tb__DOT__read_en_i)) 
                      & (0U != (3U & (IData)(vlSelfRef.configuration_register_block_tb__DOT__addr_i))))))) {
        VL_WRITEF_NX("WARNING: CRB - Unaligned register access at address %x\n",0,
                     8,vlSelfRef.configuration_register_block_tb__DOT__addr_i);
    }
    vlSelfRef.configuration_register_block_tb__DOT__rdata_o = 0U;
    if (vlSelfRef.configuration_register_block_tb__DOT__read_en_i) {
        vlSelfRef.configuration_register_block_tb__DOT__rdata_o 
            = vlSelfRef.configuration_register_block_tb__DOT__dut__DOT__reg_file
            [(7U & ((IData)(vlSelfRef.configuration_register_block_tb__DOT__addr_i) 
                    >> 2U))];
    }
}

void Vconfiguration_register_block_tb___024root___nba_sequent__TOP__0(Vconfiguration_register_block_tb___024root* vlSelf);
void Vconfiguration_register_block_tb___024root___nba_comb__TOP__0(Vconfiguration_register_block_tb___024root* vlSelf);
void Vconfiguration_register_block_tb___024root___nba_comb__TOP__1(Vconfiguration_register_block_tb___024root* vlSelf);

void Vconfiguration_register_block_tb___024root___eval_nba(Vconfiguration_register_block_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfiguration_register_block_tb___024root___eval_nba\n"); );
    Vconfiguration_register_block_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vconfiguration_register_block_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vconfiguration_register_block_tb___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vconfiguration_register_block_tb___024root___nba_comb__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vconfiguration_register_block_tb___024root___nba_sequent__TOP__0(Vconfiguration_register_block_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfiguration_register_block_tb___024root___nba_sequent__TOP__0\n"); );
    Vconfiguration_register_block_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__configuration_register_block_tb__DOT__dut__DOT__reg_file__v0;
    __VdlyVal__configuration_register_block_tb__DOT__dut__DOT__reg_file__v0 = 0;
    CData/*2:0*/ __VdlyDim0__configuration_register_block_tb__DOT__dut__DOT__reg_file__v0;
    __VdlyDim0__configuration_register_block_tb__DOT__dut__DOT__reg_file__v0 = 0;
    CData/*0:0*/ __VdlySet__configuration_register_block_tb__DOT__dut__DOT__reg_file__v0;
    __VdlySet__configuration_register_block_tb__DOT__dut__DOT__reg_file__v0 = 0;
    CData/*0:0*/ __VdlySet__configuration_register_block_tb__DOT__dut__DOT__reg_file__v1;
    __VdlySet__configuration_register_block_tb__DOT__dut__DOT__reg_file__v1 = 0;
    // Body
    __VdlySet__configuration_register_block_tb__DOT__dut__DOT__reg_file__v0 = 0U;
    __VdlySet__configuration_register_block_tb__DOT__dut__DOT__reg_file__v1 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.configuration_register_block_tb__DOT__rst_n)))) {
        vlSelfRef.configuration_register_block_tb__DOT__dut__DOT__i = 8U;
    }
    if (vlSelfRef.configuration_register_block_tb__DOT__rst_n) {
        if (vlSelfRef.configuration_register_block_tb__DOT__write_en_i) {
            __VdlyVal__configuration_register_block_tb__DOT__dut__DOT__reg_file__v0 
                = vlSelfRef.configuration_register_block_tb__DOT__wdata_i;
            __VdlyDim0__configuration_register_block_tb__DOT__dut__DOT__reg_file__v0 
                = (7U & ((IData)(vlSelfRef.configuration_register_block_tb__DOT__addr_i) 
                         >> 2U));
            __VdlySet__configuration_register_block_tb__DOT__dut__DOT__reg_file__v0 = 1U;
        }
    } else {
        __VdlySet__configuration_register_block_tb__DOT__dut__DOT__reg_file__v1 = 1U;
    }
    if (__VdlySet__configuration_register_block_tb__DOT__dut__DOT__reg_file__v0) {
        vlSelfRef.configuration_register_block_tb__DOT__dut__DOT__reg_file[__VdlyDim0__configuration_register_block_tb__DOT__dut__DOT__reg_file__v0] 
            = __VdlyVal__configuration_register_block_tb__DOT__dut__DOT__reg_file__v0;
    }
    if (__VdlySet__configuration_register_block_tb__DOT__dut__DOT__reg_file__v1) {
        vlSelfRef.configuration_register_block_tb__DOT__dut__DOT__reg_file[0U] = 0U;
        vlSelfRef.configuration_register_block_tb__DOT__dut__DOT__reg_file[1U] = 0U;
        vlSelfRef.configuration_register_block_tb__DOT__dut__DOT__reg_file[2U] = 0U;
        vlSelfRef.configuration_register_block_tb__DOT__dut__DOT__reg_file[3U] = 0U;
        vlSelfRef.configuration_register_block_tb__DOT__dut__DOT__reg_file[4U] = 0U;
        vlSelfRef.configuration_register_block_tb__DOT__dut__DOT__reg_file[5U] = 0U;
        vlSelfRef.configuration_register_block_tb__DOT__dut__DOT__reg_file[6U] = 0U;
        vlSelfRef.configuration_register_block_tb__DOT__dut__DOT__reg_file[7U] = 0U;
    }
}

VL_INLINE_OPT void Vconfiguration_register_block_tb___024root___nba_comb__TOP__0(Vconfiguration_register_block_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfiguration_register_block_tb___024root___nba_comb__TOP__0\n"); );
    Vconfiguration_register_block_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelfRef.configuration_register_block_tb__DOT__write_en_i) 
                       | (IData)(vlSelfRef.configuration_register_block_tb__DOT__read_en_i)) 
                      & (0U != (3U & (IData)(vlSelfRef.configuration_register_block_tb__DOT__addr_i))))))) {
        VL_WRITEF_NX("WARNING: CRB - Unaligned register access at address %x\n",0,
                     8,vlSelfRef.configuration_register_block_tb__DOT__addr_i);
    }
}

VL_INLINE_OPT void Vconfiguration_register_block_tb___024root___nba_comb__TOP__1(Vconfiguration_register_block_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfiguration_register_block_tb___024root___nba_comb__TOP__1\n"); );
    Vconfiguration_register_block_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.configuration_register_block_tb__DOT__rdata_o = 0U;
    if (vlSelfRef.configuration_register_block_tb__DOT__read_en_i) {
        vlSelfRef.configuration_register_block_tb__DOT__rdata_o 
            = vlSelfRef.configuration_register_block_tb__DOT__dut__DOT__reg_file
            [(7U & ((IData)(vlSelfRef.configuration_register_block_tb__DOT__addr_i) 
                    >> 2U))];
    }
}

void Vconfiguration_register_block_tb___024root___timing_resume(Vconfiguration_register_block_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfiguration_register_block_tb___024root___timing_resume\n"); );
    Vconfiguration_register_block_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h8a5858c1__0.resume(
                                                   "@(posedge configuration_register_block_tb.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vconfiguration_register_block_tb___024root___timing_commit(Vconfiguration_register_block_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfiguration_register_block_tb___024root___timing_commit\n"); );
    Vconfiguration_register_block_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h8a5858c1__0.commit(
                                                   "@(posedge configuration_register_block_tb.clk)");
    }
}

void Vconfiguration_register_block_tb___024root___eval_triggers__act(Vconfiguration_register_block_tb___024root* vlSelf);

bool Vconfiguration_register_block_tb___024root___eval_phase__act(Vconfiguration_register_block_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfiguration_register_block_tb___024root___eval_phase__act\n"); );
    Vconfiguration_register_block_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vconfiguration_register_block_tb___024root___eval_triggers__act(vlSelf);
    Vconfiguration_register_block_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vconfiguration_register_block_tb___024root___timing_resume(vlSelf);
        Vconfiguration_register_block_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vconfiguration_register_block_tb___024root___eval_phase__nba(Vconfiguration_register_block_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfiguration_register_block_tb___024root___eval_phase__nba\n"); );
    Vconfiguration_register_block_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vconfiguration_register_block_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfiguration_register_block_tb___024root___dump_triggers__nba(Vconfiguration_register_block_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfiguration_register_block_tb___024root___dump_triggers__act(Vconfiguration_register_block_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vconfiguration_register_block_tb___024root___eval(Vconfiguration_register_block_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfiguration_register_block_tb___024root___eval\n"); );
    Vconfiguration_register_block_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vconfiguration_register_block_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/configuration_register_block_tb.v", 20, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vconfiguration_register_block_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/configuration_register_block_tb.v", 20, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vconfiguration_register_block_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vconfiguration_register_block_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vconfiguration_register_block_tb___024root___eval_debug_assertions(Vconfiguration_register_block_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfiguration_register_block_tb___024root___eval_debug_assertions\n"); );
    Vconfiguration_register_block_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
