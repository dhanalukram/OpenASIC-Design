/**********************************************************************
* Project : Open Peripheral Controller (OPC)
* Module  : Configuration Register Block (CRB)
* File    : configuration_register_block.v
*
* Description:
* Generic memory-mapped register block used to configure OPC
* peripherals through a common register interface.
*
* Author  : Dr. Lukram Dhanachandra Singh
* Book    : Digital ASIC Design
*           The Complete RTL-to-GDSII Methodology
*           Using Open-Source EDA Tools
**********************************************************************/

`timescale 1ns / 1ps

`include "opc_parameters.vh"
`include "opc_defines.vh"

module configuration_register_block
(
    //------------------------------------------------------------------
    // Global Signals
    //------------------------------------------------------------------
    input  wire                      clk,
    input  wire                      rst_n,

    //------------------------------------------------------------------
    // Generic Register Interface
    //------------------------------------------------------------------
    input  wire                      write_en_i,
    input  wire                      read_en_i,

    input  wire [ADDR_WIDTH-1:0]     addr_i,
    input  wire [DATA_WIDTH-1:0]     wdata_i,

    output reg  [DATA_WIDTH-1:0]     rdata_o,

    //------------------------------------------------------------------
    // Peripheral Outputs
    //------------------------------------------------------------------
    output wire [GPIO_WIDTH-1:0]     gpio_data_o,
    output wire [GPIO_WIDTH-1:0]     gpio_dir_o
);

    //------------------------------------------------------------------
    // Internal Register File
    //------------------------------------------------------------------

    reg [DATA_WIDTH-1:0] reg_file [0:NUM_REGISTERS-1];

    integer i;

    //------------------------------------------------------------------
    // Register Index
    //------------------------------------------------------------------

    localparam REG_INDEX_WIDTH = $clog2(NUM_REGISTERS);
    //localparam [REG_INDEX_WIDTH-1:0] NUM_REGISTERS_MAX = NUM_REGISTERS;

    wire [REG_INDEX_WIDTH-1:0] reg_index;

    // Convert byte address to register index
    assign reg_index = addr_i[REG_INDEX_WIDTH+1:2];

    //------------------------------------------------------------------
    // Register Aliases
    //------------------------------------------------------------------

    //wire [DATA_WIDTH-1:0] gpio_data_reg;
    //wire [DATA_WIDTH-1:0] gpio_dir_reg;

    //assign gpio_data_reg = reg_file[`GPIO_DATA_REG];
    //assign gpio_dir_reg  = reg_file[`GPIO_DIR_REG];

    //------------------------------------------------------------------
    // Peripheral Output Mapping
    //------------------------------------------------------------------

    assign gpio_data_o = reg_file[`GPIO_DATA_REG][GPIO_WIDTH-1:0];
    assign gpio_dir_o  = reg_file[`GPIO_DIR_REG][GPIO_WIDTH-1:0];

    //------------------------------------------------------------------
    // Register Write Logic
    //------------------------------------------------------------------

    always @(posedge clk or negedge rst_n)
    begin
        if (!rst_n)
        begin
            for (i = 0; i < NUM_REGISTERS; i = i + 1)
                reg_file[i] <= {DATA_WIDTH{1'b0}};
        end
        else
        begin
            if (write_en_i)
	    begin
    		reg_file[reg_index] <= wdata_i;
	    end
        end
    end

    //------------------------------------------------------------------
    // Register Read Logic
    //------------------------------------------------------------------

    always @(*)
    begin
        rdata_o = {DATA_WIDTH{1'b0}};

        if (read_en_i)
	begin
    	    rdata_o = reg_file[reg_index];
	end
    end

`ifndef SYNTHESIS

    //------------------------------------------------------------------
    // Simulation Checks
    //------------------------------------------------------------------

    always @(*)
    begin
        if ((write_en_i || read_en_i) && (addr_i[1:0] != 2'b00))
            $display("WARNING: CRB - Unaligned register access at address %h", addr_i);
    end

`endif

endmodule
