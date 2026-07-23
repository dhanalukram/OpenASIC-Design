`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Project : Open Peripheral Controller (OPC)
// Module  : APB Integrated OPC Top
// File    : opc_apb_top.v
//
// Description:
// ------------
// Top-level integration module for the Open Peripheral Controller.
//
// This module integrates:
//   - APB Wrapper
//   - Generic OPC Core
//
// The APB wrapper converts APB transactions into the generic register
// interface, while the OPC core implements the register block and GPIO
// peripheral logic.
//
// Author  :
// Version : 1.0
//////////////////////////////////////////////////////////////////////////////////

`include "opc_parameters.vh"

module opc_apb_top
(
    //----------------------------------------------------------------------
    // Global Signals
    //----------------------------------------------------------------------

    input  wire                     PCLK,
    input  wire                     PRESETn,

    //----------------------------------------------------------------------
    // APB Slave Interface
    //----------------------------------------------------------------------

    input  wire                     PSEL,
    input  wire                     PENABLE,
    input  wire                     PWRITE,

    input  wire [APB_ADDR_WIDTH-1:0] PADDR,
    input  wire [DATA_WIDTH-1:0]     PWDATA,

    output wire [DATA_WIDTH-1:0]     PRDATA,
    output wire                      PREADY,
    output wire                      PSLVERR,

    //----------------------------------------------------------------------
    // External GPIO
    //----------------------------------------------------------------------

    input  wire [GPIO_WIDTH-1:0]     gpio_in_i,

    output wire [GPIO_WIDTH-1:0]     gpio_out_o,
    output wire [GPIO_WIDTH-1:0]     gpio_input_o
);

    /////////////////////////////////////////////////////////////////////////
    // Internal Generic Register Interface
    /////////////////////////////////////////////////////////////////////////

    wire                     reg_write_en_w;
    wire                     reg_read_en_w;

    wire [ADDR_WIDTH-1:0]    reg_addr_w;

    wire [DATA_WIDTH-1:0]    reg_wdata_w;
    wire [DATA_WIDTH-1:0]    reg_rdata_w;

    /////////////////////////////////////////////////////////////////////////
    // APB Wrapper
    /////////////////////////////////////////////////////////////////////////

    apb_wrapper u_apb_wrapper
    (
        .PCLK        (PCLK),
        .PRESETn     (PRESETn),

        .PSEL        (PSEL),
        .PENABLE     (PENABLE),
        .PWRITE      (PWRITE),

        .PADDR       (PADDR),
        .PWDATA      (PWDATA),

        .PRDATA      (PRDATA),
        .PREADY      (PREADY),
        .PSLVERR     (PSLVERR),

        .write_en_o  (reg_write_en_w),
        .read_en_o   (reg_read_en_w),

        .addr_o      (reg_addr_w),
        .wdata_o     (reg_wdata_w),

        .rdata_i     (reg_rdata_w)
    );

    /////////////////////////////////////////////////////////////////////////
    // Generic OPC Core
    /////////////////////////////////////////////////////////////////////////

    opc_top u_opc_top
    (
        .clk            (PCLK),
        .rst_n          (PRESETn),

        .write_en_i     (reg_write_en_w),
        .read_en_i      (reg_read_en_w),

        .addr_i         (reg_addr_w),
        .wdata_i        (reg_wdata_w),

        .rdata_o        (reg_rdata_w),

        .gpio_in_i      (gpio_in_i),

        .gpio_out_o     (gpio_out_o),
        .gpio_input_o   (gpio_input_o)
    );

endmodule
