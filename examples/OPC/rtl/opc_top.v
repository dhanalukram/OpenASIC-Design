/**********************************************************************
* Project : Open Peripheral Controller (OPC)
* Module  : OPC Top
* File    : opc_top.v
*
* Description:
* Top-level integration module for the Open Peripheral Controller.
* This module connects the Configuration Register Block (CRB)
* with the GPIO Controller through the generic register interface.
*
* Author  : Dr. Lukram Dhanachandra Singh
* Book    : Digital ASIC Design
*           The Complete RTL-to-GDSII Methodology
*           Using Open-Source EDA Tools
**********************************************************************/

`timescale 1ns/1ps

`include "opc_parameters.vh"
`include "opc_defines.vh"

module opc_top
(
    //------------------------------------------------------------------
    // Global Signals
    //------------------------------------------------------------------
    input  wire                     clk,
    input  wire                     rst_n,

    //------------------------------------------------------------------
    // Generic Register Interface
    //------------------------------------------------------------------
    input  wire                     write_en_i,
    input  wire                     read_en_i,

    input  wire [ADDR_WIDTH-1:0]    addr_i,
    input  wire [DATA_WIDTH-1:0]    wdata_i,

    output wire [DATA_WIDTH-1:0]    rdata_o,

    //------------------------------------------------------------------
    // External GPIO
    //------------------------------------------------------------------
    input  wire [GPIO_WIDTH-1:0]    gpio_in_i,

    output wire [GPIO_WIDTH-1:0]    gpio_out_o,
    output wire [GPIO_WIDTH-1:0]    gpio_input_o
);

    //------------------------------------------------------------------
    // Internal Signals
    //------------------------------------------------------------------

    wire [GPIO_WIDTH-1:0] gpio_data;
    wire [GPIO_WIDTH-1:0] gpio_dir;

    //------------------------------------------------------------------
    // Configuration Register Block
    //------------------------------------------------------------------

    configuration_register_block u_crb
    (
        .clk(clk),
        .rst_n(rst_n),

        .write_en_i(write_en_i),
        .read_en_i(read_en_i),

        .addr_i(addr_i),
        .wdata_i(wdata_i),

        .rdata_o(rdata_o),

        .gpio_data_o(gpio_data),
        .gpio_dir_o(gpio_dir)
    );

    //------------------------------------------------------------------
    // GPIO Controller
    //------------------------------------------------------------------

    gpio_controller u_gpio
    (
        .clk(clk),
        .rst_n(rst_n),

        .gpio_data_i(gpio_data),
        .gpio_dir_i(gpio_dir),

        .gpio_in_i(gpio_in_i),

        .gpio_out_o(gpio_out_o),
        .gpio_input_o(gpio_input_o)
    );

endmodule
