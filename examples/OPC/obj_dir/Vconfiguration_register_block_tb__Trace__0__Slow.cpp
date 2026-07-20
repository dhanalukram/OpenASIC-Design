// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vconfiguration_register_block_tb__Syms.h"


VL_ATTR_COLD void Vconfiguration_register_block_tb___024root__trace_init_sub__TOP____024unit__0(Vconfiguration_register_block_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vconfiguration_register_block_tb___024root__trace_init_sub__TOP__0(Vconfiguration_register_block_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfiguration_register_block_tb___024root__trace_init_sub__TOP__0\n"); );
    Vconfiguration_register_block_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("$unit", VerilatedTracePrefixType::SCOPE_MODULE);
    Vconfiguration_register_block_tb___024root__trace_init_sub__TOP____024unit__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("configuration_register_block_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+18,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"write_en_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"read_en_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"addr_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+5,0,"wdata_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"rdata_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"gpio_data_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+8,0,"gpio_dir_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+18,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"write_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"read_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+5,0,"wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"gpio_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+8,0,"gpio_dir_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("reg_file", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+9+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+17,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+20,0,"REG_INDEX_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"reg_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vconfiguration_register_block_tb___024root__trace_init_sub__TOP____024unit__0(Vconfiguration_register_block_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfiguration_register_block_tb___024root__trace_init_sub__TOP____024unit__0\n"); );
    Vconfiguration_register_block_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+21,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"GPIO_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"NUM_REGISTERS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"TIMER_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"UART_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"SPI_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"I2C_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vconfiguration_register_block_tb___024root__trace_init_top(Vconfiguration_register_block_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfiguration_register_block_tb___024root__trace_init_top\n"); );
    Vconfiguration_register_block_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vconfiguration_register_block_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vconfiguration_register_block_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vconfiguration_register_block_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vconfiguration_register_block_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vconfiguration_register_block_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vconfiguration_register_block_tb___024root__trace_register(Vconfiguration_register_block_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfiguration_register_block_tb___024root__trace_register\n"); );
    Vconfiguration_register_block_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vconfiguration_register_block_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vconfiguration_register_block_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vconfiguration_register_block_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vconfiguration_register_block_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vconfiguration_register_block_tb___024root__trace_const_0_sub_0(Vconfiguration_register_block_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vconfiguration_register_block_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfiguration_register_block_tb___024root__trace_const_0\n"); );
    // Init
    Vconfiguration_register_block_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vconfiguration_register_block_tb___024root*>(voidSelf);
    Vconfiguration_register_block_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vconfiguration_register_block_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vconfiguration_register_block_tb___024root__trace_const_0_sub_0(Vconfiguration_register_block_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfiguration_register_block_tb___024root__trace_const_0_sub_0\n"); );
    Vconfiguration_register_block_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+20,(3U),32);
    bufp->fullIData(oldp+21,(0x20U),32);
    bufp->fullIData(oldp+22,(8U),32);
}

VL_ATTR_COLD void Vconfiguration_register_block_tb___024root__trace_full_0_sub_0(Vconfiguration_register_block_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vconfiguration_register_block_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfiguration_register_block_tb___024root__trace_full_0\n"); );
    // Init
    Vconfiguration_register_block_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vconfiguration_register_block_tb___024root*>(voidSelf);
    Vconfiguration_register_block_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vconfiguration_register_block_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vconfiguration_register_block_tb___024root__trace_full_0_sub_0(Vconfiguration_register_block_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfiguration_register_block_tb___024root__trace_full_0_sub_0\n"); );
    Vconfiguration_register_block_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.configuration_register_block_tb__DOT__rst_n));
    bufp->fullBit(oldp+2,(vlSelfRef.configuration_register_block_tb__DOT__write_en_i));
    bufp->fullBit(oldp+3,(vlSelfRef.configuration_register_block_tb__DOT__read_en_i));
    bufp->fullCData(oldp+4,(vlSelfRef.configuration_register_block_tb__DOT__addr_i),8);
    bufp->fullIData(oldp+5,(vlSelfRef.configuration_register_block_tb__DOT__wdata_i),32);
    bufp->fullCData(oldp+6,((7U & ((IData)(vlSelfRef.configuration_register_block_tb__DOT__addr_i) 
                                   >> 2U))),3);
    bufp->fullCData(oldp+7,((0xffU & vlSelfRef.configuration_register_block_tb__DOT__dut__DOT__reg_file
                             [0U])),8);
    bufp->fullCData(oldp+8,((0xffU & vlSelfRef.configuration_register_block_tb__DOT__dut__DOT__reg_file
                             [1U])),8);
    bufp->fullIData(oldp+9,(vlSelfRef.configuration_register_block_tb__DOT__dut__DOT__reg_file[0]),32);
    bufp->fullIData(oldp+10,(vlSelfRef.configuration_register_block_tb__DOT__dut__DOT__reg_file[1]),32);
    bufp->fullIData(oldp+11,(vlSelfRef.configuration_register_block_tb__DOT__dut__DOT__reg_file[2]),32);
    bufp->fullIData(oldp+12,(vlSelfRef.configuration_register_block_tb__DOT__dut__DOT__reg_file[3]),32);
    bufp->fullIData(oldp+13,(vlSelfRef.configuration_register_block_tb__DOT__dut__DOT__reg_file[4]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.configuration_register_block_tb__DOT__dut__DOT__reg_file[5]),32);
    bufp->fullIData(oldp+15,(vlSelfRef.configuration_register_block_tb__DOT__dut__DOT__reg_file[6]),32);
    bufp->fullIData(oldp+16,(vlSelfRef.configuration_register_block_tb__DOT__dut__DOT__reg_file[7]),32);
    bufp->fullIData(oldp+17,(vlSelfRef.configuration_register_block_tb__DOT__dut__DOT__i),32);
    bufp->fullBit(oldp+18,(vlSelfRef.configuration_register_block_tb__DOT__clk));
    bufp->fullIData(oldp+19,(vlSelfRef.configuration_register_block_tb__DOT__rdata_o),32);
}
