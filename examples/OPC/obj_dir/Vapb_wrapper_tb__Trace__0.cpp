// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vapb_wrapper_tb__Syms.h"


void Vapb_wrapper_tb___024root__trace_chg_0_sub_0(Vapb_wrapper_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vapb_wrapper_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_wrapper_tb___024root__trace_chg_0\n"); );
    // Init
    Vapb_wrapper_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vapb_wrapper_tb___024root*>(voidSelf);
    Vapb_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vapb_wrapper_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vapb_wrapper_tb___024root__trace_chg_0_sub_0(Vapb_wrapper_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_wrapper_tb___024root__trace_chg_0_sub_0\n"); );
    Vapb_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.apb_wrapper_tb__DOT__PRESETn));
        bufp->chgBit(oldp+1,(vlSelfRef.apb_wrapper_tb__DOT__PSEL));
        bufp->chgBit(oldp+2,(vlSelfRef.apb_wrapper_tb__DOT__PENABLE));
        bufp->chgBit(oldp+3,(vlSelfRef.apb_wrapper_tb__DOT__PWRITE));
        bufp->chgIData(oldp+4,(vlSelfRef.apb_wrapper_tb__DOT__PADDR),32);
        bufp->chgIData(oldp+5,(vlSelfRef.apb_wrapper_tb__DOT__PWDATA),32);
        bufp->chgIData(oldp+6,(vlSelfRef.apb_wrapper_tb__DOT__rdata_i),32);
        bufp->chgIData(oldp+7,(vlSelfRef.apb_wrapper_tb__DOT__pass_count),32);
        bufp->chgIData(oldp+8,(vlSelfRef.apb_wrapper_tb__DOT__fail_count),32);
        bufp->chgCData(oldp+9,((0xffU & (vlSelfRef.apb_wrapper_tb__DOT__PADDR 
                                         >> 2U))),8);
        bufp->chgBit(oldp+10,((8U > (0xffU & (vlSelfRef.apb_wrapper_tb__DOT__PADDR 
                                              >> 2U)))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+11,(vlSelfRef.apb_wrapper_tb__DOT__PRDATA),32);
        bufp->chgBit(oldp+12,(vlSelfRef.apb_wrapper_tb__DOT__PREADY));
        bufp->chgBit(oldp+13,(vlSelfRef.apb_wrapper_tb__DOT__PSLVERR));
        bufp->chgBit(oldp+14,(vlSelfRef.apb_wrapper_tb__DOT__write_en_o));
        bufp->chgBit(oldp+15,(vlSelfRef.apb_wrapper_tb__DOT__read_en_o));
        bufp->chgCData(oldp+16,(vlSelfRef.apb_wrapper_tb__DOT__addr_o),8);
        bufp->chgIData(oldp+17,(vlSelfRef.apb_wrapper_tb__DOT__wdata_o),32);
    }
    bufp->chgBit(oldp+18,(vlSelfRef.apb_wrapper_tb__DOT__PCLK));
    bufp->chgBit(oldp+19,(vlSelfRef.apb_wrapper_tb__DOT__dut__DOT__apb_access_w));
    bufp->chgBit(oldp+20,(vlSelfRef.apb_wrapper_tb__DOT__dut__DOT__apb_write_access_w));
    bufp->chgBit(oldp+21,(vlSelfRef.apb_wrapper_tb__DOT__dut__DOT__apb_read_access_w));
}

void Vapb_wrapper_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_wrapper_tb___024root__trace_cleanup\n"); );
    // Init
    Vapb_wrapper_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vapb_wrapper_tb___024root*>(voidSelf);
    Vapb_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
