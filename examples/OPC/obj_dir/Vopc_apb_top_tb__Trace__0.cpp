// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vopc_apb_top_tb__Syms.h"


void Vopc_apb_top_tb___024root__trace_chg_0_sub_0(Vopc_apb_top_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vopc_apb_top_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopc_apb_top_tb___024root__trace_chg_0\n"); );
    // Init
    Vopc_apb_top_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vopc_apb_top_tb___024root*>(voidSelf);
    Vopc_apb_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vopc_apb_top_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vopc_apb_top_tb___024root__trace_chg_0_sub_0(Vopc_apb_top_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopc_apb_top_tb___024root__trace_chg_0_sub_0\n"); );
    Vopc_apb_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.opc_apb_top_tb__DOT__PRESETn));
        bufp->chgBit(oldp+1,(vlSelfRef.opc_apb_top_tb__DOT__PSEL));
        bufp->chgBit(oldp+2,(vlSelfRef.opc_apb_top_tb__DOT__PENABLE));
        bufp->chgBit(oldp+3,(vlSelfRef.opc_apb_top_tb__DOT__PWRITE));
        bufp->chgIData(oldp+4,(vlSelfRef.opc_apb_top_tb__DOT__PADDR),32);
        bufp->chgIData(oldp+5,(vlSelfRef.opc_apb_top_tb__DOT__PWDATA),32);
        bufp->chgIData(oldp+6,(vlSelfRef.opc_apb_top_tb__DOT__read_data),32);
        bufp->chgCData(oldp+7,(vlSelfRef.opc_apb_top_tb__DOT__gpio_in_i),8);
        bufp->chgIData(oldp+8,(vlSelfRef.opc_apb_top_tb__DOT__pass_count),32);
        bufp->chgIData(oldp+9,(vlSelfRef.opc_apb_top_tb__DOT__fail_count),32);
        bufp->chgCData(oldp+10,((0xffU & (vlSelfRef.opc_apb_top_tb__DOT__PADDR 
                                          >> 2U))),8);
        bufp->chgBit(oldp+11,((8U > (0xffU & (vlSelfRef.opc_apb_top_tb__DOT__PADDR 
                                              >> 2U)))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+12,(vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__reg_rdata_w),32);
        bufp->chgBit(oldp+13,(vlSelfRef.opc_apb_top_tb__DOT__PREADY));
        bufp->chgBit(oldp+14,(vlSelfRef.opc_apb_top_tb__DOT__PSLVERR));
        bufp->chgCData(oldp+15,(vlSelfRef.opc_apb_top_tb__DOT__gpio_out_o),8);
        bufp->chgCData(oldp+16,(vlSelfRef.opc_apb_top_tb__DOT__gpio_input_o),8);
        bufp->chgBit(oldp+17,(vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__reg_write_en_w));
        bufp->chgBit(oldp+18,(vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__reg_read_en_w));
        bufp->chgCData(oldp+19,(vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__reg_addr_w),8);
        bufp->chgIData(oldp+20,(vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__reg_wdata_w),32);
        bufp->chgCData(oldp+21,((0xffU & vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__u_opc_top__DOT__u_crb__DOT__reg_file
                                 [0U])),8);
        bufp->chgCData(oldp+22,((0xffU & vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__u_opc_top__DOT__u_crb__DOT__reg_file
                                 [1U])),8);
        bufp->chgIData(oldp+23,(vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__u_opc_top__DOT__u_crb__DOT__reg_file[0]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__u_opc_top__DOT__u_crb__DOT__reg_file[1]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__u_opc_top__DOT__u_crb__DOT__reg_file[2]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__u_opc_top__DOT__u_crb__DOT__reg_file[3]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__u_opc_top__DOT__u_crb__DOT__reg_file[4]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__u_opc_top__DOT__u_crb__DOT__reg_file[5]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__u_opc_top__DOT__u_crb__DOT__reg_file[6]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__u_opc_top__DOT__u_crb__DOT__reg_file[7]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__u_opc_top__DOT__u_crb__DOT__i),32);
        bufp->chgCData(oldp+32,((7U & ((IData)(vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__reg_addr_w) 
                                       >> 2U))),3);
        bufp->chgIData(oldp+33,(vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__u_opc_top__DOT__u_gpio__DOT__i),32);
    }
    bufp->chgBit(oldp+34,(vlSelfRef.opc_apb_top_tb__DOT__PCLK));
    bufp->chgBit(oldp+35,(vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__u_apb_wrapper__DOT__apb_access_w));
    bufp->chgBit(oldp+36,(vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__u_apb_wrapper__DOT__apb_write_access_w));
    bufp->chgBit(oldp+37,(vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__u_apb_wrapper__DOT__apb_read_access_w));
}

void Vopc_apb_top_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopc_apb_top_tb___024root__trace_cleanup\n"); );
    // Init
    Vopc_apb_top_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vopc_apb_top_tb___024root*>(voidSelf);
    Vopc_apb_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
