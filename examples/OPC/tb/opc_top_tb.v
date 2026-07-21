/**********************************************************************
* Project : Open Peripheral Controller (OPC)
* Module  : OPC Top Testbench
* File    : opc_top_tb.v
*
* Description:
* Self-checking testbench for the OPC Top module.
*
* Author  : Dr. Lukram Dhanachandra Singh
* Book    : Digital ASIC Design
*           The Complete RTL-to-GDSII Methodology
*           Using Open-Source EDA Tools
**********************************************************************/

`timescale 1ns/1ps

`include "opc_parameters.vh"
`include "opc_defines.vh"

module opc_top_tb;

    //------------------------------------------------------------
    // Global Signals
    //------------------------------------------------------------

    reg clk;
    reg rst_n;

    //------------------------------------------------------------
    // Generic Register Interface
    //------------------------------------------------------------

    reg                     write_en_i;
    reg                     read_en_i;
    reg  [ADDR_WIDTH-1:0]   addr_i;
    reg  [DATA_WIDTH-1:0]   wdata_i;

    wire [DATA_WIDTH-1:0]   rdata_o;

    //------------------------------------------------------------
    // GPIO Signals
    //------------------------------------------------------------

    reg  [GPIO_WIDTH-1:0]   gpio_in_i;

    wire [GPIO_WIDTH-1:0]   gpio_out_o;
    wire [GPIO_WIDTH-1:0]   gpio_input_o;

    //------------------------------------------------------------
    // DUT
    //------------------------------------------------------------

    opc_top dut
    (
        .clk(clk),
        .rst_n(rst_n),

        .write_en_i(write_en_i),
        .read_en_i(read_en_i),

        .addr_i(addr_i),
        .wdata_i(wdata_i),

        .rdata_o(rdata_o),

        .gpio_in_i(gpio_in_i),

        .gpio_out_o(gpio_out_o),
        .gpio_input_o(gpio_input_o)
    );

    //------------------------------------------------------------
    // Clock Generation
    //------------------------------------------------------------

    initial
        clk = 1'b0;

    always #5 clk = ~clk;

    //------------------------------------------------------------
    // Waveform Dump
    //------------------------------------------------------------

    initial
    begin
        $dumpfile("opc_top.vcd");
        $dumpvars(0, opc_top_tb);
    end

    //------------------------------------------------------------
    // Reset Task
    //------------------------------------------------------------

    task reset_dut;
    begin

        rst_n      = 0;

        write_en_i = 0;
        read_en_i  = 0;

        addr_i     = 0;
        wdata_i    = 0;

        gpio_in_i  = 0;

        repeat(2) @(posedge clk);

        rst_n = 1;

        @(posedge clk);

    end
    endtask

    //------------------------------------------------------------
    // Register Write
    //------------------------------------------------------------

    task write_register;

        input [ADDR_WIDTH-1:0] address;
        input [DATA_WIDTH-1:0] data;

    begin

        @(posedge clk);

        write_en_i = 1;
        addr_i     = address;
        wdata_i    = data;

        @(posedge clk);

        write_en_i = 0;
        addr_i     = 0;
        wdata_i    = 0;

    end
    endtask

    //------------------------------------------------------------
    // Register Read
    //------------------------------------------------------------

    task read_register;

        input [ADDR_WIDTH-1:0] address;

    begin

        @(posedge clk);

        read_en_i = 1;
        addr_i    = address;

        @(posedge clk);

        read_en_i = 0;
        addr_i    = 0;

    end
    endtask

    //------------------------------------------------------------
    // Test Sequence
    //------------------------------------------------------------

    initial
    begin

        $display("");
        $display("==========================================");
        $display("      OPC TOP Integration Test");
        $display("==========================================");

        //--------------------------------------------------------
        // Reset
        //--------------------------------------------------------

        reset_dut();

        if(gpio_out_o == 8'h00)
            $display("PASS : Reset");
        else
            $display("FAIL : Reset");

        //--------------------------------------------------------
        // Configure GPIO as Output
        //--------------------------------------------------------

        write_register(`GPIO_DIR_ADDR,32'h000000FF);

        if(gpio_out_o == 8'h00)
            $display("PASS : GPIO Direction");
        else
            $display("FAIL : GPIO Direction");

        //--------------------------------------------------------
        // Write GPIO Data
        //--------------------------------------------------------

        write_register(`GPIO_DATA_ADDR,32'h000000A5);

	// Wait one clock cycle for propagation
	@(posedge clk);

	if(gpio_out_o == 8'hA5)
	    $display("PASS : GPIO Output");
	else begin
	    $display("FAIL : GPIO Output");
	    $display("Expected = A5");
	    $display("Actual   = %h", gpio_out_o);
	end

        //--------------------------------------------------------
        // Read GPIO Data Register
        //--------------------------------------------------------

        read_register(`GPIO_DATA_ADDR);

        if(rdata_o == 32'h000000A5)
            $display("PASS : Register Read");
        else
            $display("FAIL : Register Read");

        //--------------------------------------------------------
        // GPIO Input Test
        //--------------------------------------------------------

        gpio_in_i = 8'h3C;

        @(posedge clk);

        if(gpio_input_o == 8'h3C)
            $display("PASS : GPIO Input");
        else
            $display("FAIL : GPIO Input");

        //--------------------------------------------------------
        // Mixed Direction Test
        //--------------------------------------------------------

        write_register(`GPIO_DIR_ADDR,32'h000000F0);
        write_register(`GPIO_DATA_ADDR,32'h000000AA);

        if(gpio_out_o == 8'hA0)
            $display("PASS : Mixed Direction");
        else
            $display("FAIL : Mixed Direction");

        //--------------------------------------------------------
        // End of Simulation
        //--------------------------------------------------------

        $display("");
        $display("==========================================");
        $display(" OPC TOP Integration Completed");
        $display("==========================================");

        #20;

        $finish;

    end

endmodule
