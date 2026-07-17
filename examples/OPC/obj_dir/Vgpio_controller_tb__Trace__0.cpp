// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vgpio_controller_tb__Syms.h"


void Vgpio_controller_tb___024root__trace_chg_0_sub_0(Vgpio_controller_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vgpio_controller_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio_controller_tb___024root__trace_chg_0\n"); );
    // Init
    Vgpio_controller_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vgpio_controller_tb___024root*>(voidSelf);
    Vgpio_controller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vgpio_controller_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vgpio_controller_tb___024root__trace_chg_0_sub_0(Vgpio_controller_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio_controller_tb___024root__trace_chg_0_sub_0\n"); );
    Vgpio_controller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgCData(oldp+0,(vlSelfRef.gpio_controller_tb__DOT__gpio_out_o),8);
        bufp->chgCData(oldp+1,(vlSelfRef.gpio_controller_tb__DOT__gpio_input_o),8);
        bufp->chgIData(oldp+2,(vlSelfRef.gpio_controller_tb__DOT__uut__DOT__i),32);
    }
    bufp->chgBit(oldp+3,(vlSelfRef.gpio_controller_tb__DOT__clk));
    bufp->chgBit(oldp+4,(vlSelfRef.gpio_controller_tb__DOT__rst_n));
    bufp->chgCData(oldp+5,(vlSelfRef.gpio_controller_tb__DOT__gpio_data_i),8);
    bufp->chgCData(oldp+6,(vlSelfRef.gpio_controller_tb__DOT__gpio_dir_i),8);
    bufp->chgCData(oldp+7,(vlSelfRef.gpio_controller_tb__DOT__gpio_in_i),8);
}

void Vgpio_controller_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio_controller_tb___024root__trace_cleanup\n"); );
    // Init
    Vgpio_controller_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vgpio_controller_tb___024root*>(voidSelf);
    Vgpio_controller_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
