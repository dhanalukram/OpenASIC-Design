/******************************************************************************
* Project : Open Peripheral Controller (OPC)
* Module  : GPIO Controller Testbench
* File    : gpio_controller_tb.v
*
* Description:
* Testbench for verifying the functionality of the GPIO Controller.
*
* Verification Scenarios:
* 1. Reset Verification
* 2. GPIO Output Mode
* 3. GPIO Input Mode
* 4. Mixed Input/Output Operation
*
* Author  : Dr. Lukram Dhanachandra Singh
* Book    : Digital ASIC Design:
*           The Complete RTL-to-GDSII Methodology
*           Using Open-Source EDA Tools
******************************************************************************/

`timescale 1ns/1ps
`include "opc_parameters.vh"
module gpio_controller_tb;

    //----------------------------------------------------------------------
    // Parameters
    //----------------------------------------------------------------------


    //----------------------------------------------------------------------
    // Testbench Signals
    //----------------------------------------------------------------------

    reg                       clk;
    reg                       rst_n;

    reg  [GPIO_WIDTH-1:0]     gpio_data_i;
    reg  [GPIO_WIDTH-1:0]     gpio_dir_i;
    reg  [GPIO_WIDTH-1:0]     gpio_in_i;

    wire [GPIO_WIDTH-1:0]     gpio_out_o;
    wire [GPIO_WIDTH-1:0]     gpio_input_o;

    //----------------------------------------------------------------------
    // Instantiate GPIO Controller
    //----------------------------------------------------------------------

    gpio_controller uut (
        .clk          (clk),
        .rst_n        (rst_n),
        .gpio_data_i  (gpio_data_i),
        .gpio_dir_i   (gpio_dir_i),
        .gpio_in_i    (gpio_in_i),
        .gpio_out_o   (gpio_out_o),
        .gpio_input_o (gpio_input_o)
    );

    //----------------------------------------------------------------------
    // Clock Generation
    //----------------------------------------------------------------------

    initial begin
        clk = 1'b0;
        forever #5 clk = ~clk;
    end

    //----------------------------------------------------------------------
    // Test Sequence
    //----------------------------------------------------------------------

    initial begin
	$dumpfile("gpio_controller.vcd");
    	$dumpvars(0, gpio_controller_tb);

        $display("==============================================");
        $display(" GPIO Controller Testbench");
        $display("==============================================");

        //--------------------------------------------------------------
        // Initialize Inputs
        //--------------------------------------------------------------

        rst_n       = 1'b0;
        gpio_data_i = 8'h00;
        gpio_dir_i  = 8'h00;
        gpio_in_i   = 8'h00;

        //--------------------------------------------------------------
        // Apply Reset
        //--------------------------------------------------------------

        #20;
        rst_n = 1'b1;

	#10;

	if ((gpio_out_o == 8'h00) &&
    	(gpio_input_o == 8'h00))
	    $display("PASS : Reset");
	else
	    $display("FAIL : Reset");

        //--------------------------------------------------------------
        // Test Case 1
        // Configure all GPIOs as outputs
        //--------------------------------------------------------------

        $display("Test Case 1 : Output Mode");

        gpio_dir_i  = 8'hFF;
        gpio_data_i = 8'hA5;

        #20;
	
	if (gpio_out_o == 8'hA5)
	    $display("PASS : Output Mode");
	else
	    $display("FAIL : Output Mode");

        //--------------------------------------------------------------
        // Test Case 2
        // Configure all GPIOs as inputs
        //--------------------------------------------------------------

        $display("Test Case 2 : Input Mode");

        gpio_dir_i = 8'h00;
        gpio_in_i  = 8'h3C;

        #20;
	if (gpio_input_o == 8'h3C)
    		$display("PASS : Input Mode");
	else
    		$display("FAIL : Input Mode");

        //--------------------------------------------------------------
        // Test Case 3
        // Mixed Direction
        //--------------------------------------------------------------

        $display("Test Case 3 : Mixed Mode");

        gpio_dir_i  = 8'b11110000;
        gpio_data_i = 8'b10100000;
        gpio_in_i   = 8'b00001111;

        #20;

	if ((gpio_out_o == 8'hA0) &&
	    (gpio_input_o == 8'h0F))
	    $display("PASS : Mixed Mode");
	else
	    $display("FAIL : Mixed Mode");	

        //--------------------------------------------------------------
        // End Simulation
        //--------------------------------------------------------------

        $display("==============================================");
	$display(" GPIO Controller Verification Completed");
	$display("==============================================");
        $finish;

    end

    //----------------------------------------------------------------------
    // Monitor Signals
    //----------------------------------------------------------------------

    initial begin

        $monitor("Time=%0t | rst_n=%b | dir=%b | data=%b | gpio_in=%b | gpio_out=%b | sampled=%b",
                  $time,
                  rst_n,
                  gpio_dir_i,
                  gpio_data_i,
                  gpio_in_i,
                  gpio_out_o,
                  gpio_input_o);

    end

endmodule
