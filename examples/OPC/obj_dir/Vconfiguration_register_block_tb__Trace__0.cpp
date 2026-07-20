// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vconfiguration_register_block_tb__Syms.h"


void Vconfiguration_register_block_tb___024root__trace_chg_0_sub_0(Vconfiguration_register_block_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vconfiguration_register_block_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfiguration_register_block_tb___024root__trace_chg_0\n"); );
    // Init
    Vconfiguration_register_block_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vconfiguration_register_block_tb___024root*>(voidSelf);
    Vconfiguration_register_block_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vconfiguration_register_block_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vconfiguration_register_block_tb___024root__trace_chg_0_sub_0(Vconfiguration_register_block_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfiguration_register_block_tb___024root__trace_chg_0_sub_0\n"); );
    Vconfiguration_register_block_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.configuration_register_block_tb__DOT__rst_n));
        bufp->chgBit(oldp+1,(vlSelfRef.configuration_register_block_tb__DOT__write_en_i));
        bufp->chgBit(oldp+2,(vlSelfRef.configuration_register_block_tb__DOT__read_en_i));
        bufp->chgCData(oldp+3,(vlSelfRef.configuration_register_block_tb__DOT__addr_i),8);
        bufp->chgIData(oldp+4,(vlSelfRef.configuration_register_block_tb__DOT__wdata_i),32);
        bufp->chgCData(oldp+5,((7U & ((IData)(vlSelfRef.configuration_register_block_tb__DOT__addr_i) 
                                      >> 2U))),3);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgCData(oldp+6,((0xffU & vlSelfRef.configuration_register_block_tb__DOT__dut__DOT__reg_file
                                [0U])),8);
        bufp->chgCData(oldp+7,((0xffU & vlSelfRef.configuration_register_block_tb__DOT__dut__DOT__reg_file
                                [1U])),8);
        bufp->chgIData(oldp+8,(vlSelfRef.configuration_register_block_tb__DOT__dut__DOT__reg_file[0]),32);
        bufp->chgIData(oldp+9,(vlSelfRef.configuration_register_block_tb__DOT__dut__DOT__reg_file[1]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.configuration_register_block_tb__DOT__dut__DOT__reg_file[2]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.configuration_register_block_tb__DOT__dut__DOT__reg_file[3]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.configuration_register_block_tb__DOT__dut__DOT__reg_file[4]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.configuration_register_block_tb__DOT__dut__DOT__reg_file[5]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.configuration_register_block_tb__DOT__dut__DOT__reg_file[6]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.configuration_register_block_tb__DOT__dut__DOT__reg_file[7]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.configuration_register_block_tb__DOT__dut__DOT__i),32);
    }
    bufp->chgBit(oldp+17,(vlSelfRef.configuration_register_block_tb__DOT__clk));
    bufp->chgIData(oldp+18,(vlSelfRef.configuration_register_block_tb__DOT__rdata_o),32);
}

void Vconfiguration_register_block_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfiguration_register_block_tb___024root__trace_cleanup\n"); );
    // Init
    Vconfiguration_register_block_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vconfiguration_register_block_tb___024root*>(voidSelf);
    Vconfiguration_register_block_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
