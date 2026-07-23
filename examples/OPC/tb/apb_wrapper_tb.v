`timescale 1ns / 1ps

//////////////////////////////////////////////////////////////////////////////////
// Project : Open Peripheral Controller (OPC)
// Module  : APB Wrapper Testbench
// File    : apb_wrapper_tb.v
//
// Description:
// ------------
// Self-checking testbench for APB Wrapper.
//
//////////////////////////////////////////////////////////////////////////////////

`include "../rtl/opc_parameters.vh"

module apb_wrapper_tb;

    //----------------------------------------------------------------------
    // Clock and Reset
    //----------------------------------------------------------------------

    reg PCLK;
    reg PRESETn;

    //----------------------------------------------------------------------
    // APB Master Signals
    //----------------------------------------------------------------------

    reg                     PSEL;
    reg                     PENABLE;
    reg                     PWRITE;

    reg [APB_ADDR_WIDTH-1:0] PADDR;
    reg [DATA_WIDTH-1:0]     PWDATA;

    wire [DATA_WIDTH-1:0]    PRDATA;
    wire                     PREADY;
    wire                     PSLVERR;

    //----------------------------------------------------------------------
    // Generic Register Interface
    //----------------------------------------------------------------------

    wire                     write_en_o;
    wire                     read_en_o;

    wire [ADDR_WIDTH-1:0]    addr_o;
    wire [DATA_WIDTH-1:0]    wdata_o;

    reg  [DATA_WIDTH-1:0]    rdata_i;

///////////////////////////////////////////////////////////////////////
// Test Statistics
///////////////////////////////////////////////////////////////////////

	integer pass_count;
	integer fail_count;

    //----------------------------------------------------------------------
    // DUT
    //----------------------------------------------------------------------

    apb_wrapper dut
    (
        .PCLK(PCLK),
        .PRESETn(PRESETn),

        .PSEL(PSEL),
        .PENABLE(PENABLE),
        .PWRITE(PWRITE),

        .PADDR(PADDR),
        .PWDATA(PWDATA),

        .PRDATA(PRDATA),
        .PREADY(PREADY),
        .PSLVERR(PSLVERR),

        .write_en_o(write_en_o),
        .read_en_o(read_en_o),

        .addr_o(addr_o),
        .wdata_o(wdata_o),

        .rdata_i(rdata_i)
    );

    //----------------------------------------------------------------------
    // Clock Generation
    //----------------------------------------------------------------------

    initial
    begin
        PCLK = 0;

        forever #5 PCLK = ~PCLK;
    end

    //----------------------------------------------------------------------
    // Reset
    //----------------------------------------------------------------------

    task reset_dut;

    begin

        PRESETn = 0;

        PSEL    = 0;
        PENABLE = 0;
        PWRITE  = 0;

        PADDR   = 0;
        PWDATA  = 0;

        rdata_i = 0;

        repeat(5) @(posedge PCLK);

        PRESETn = 1;

        repeat(2) @(posedge PCLK);

    end

    endtask

    //----------------------------------------------------------------------
    // APB WRITE
    //----------------------------------------------------------------------

    task apb_write;

        input [APB_ADDR_WIDTH-1:0] address;
        input [DATA_WIDTH-1:0] data;

    begin

        @(posedge PCLK);

	PSEL    = 1;
	PENABLE = 0;
	PWRITE  = 1;

	PADDR   = address;
	PWDATA  = data;

        @(posedge PCLK);

        PENABLE = 1;

        @(posedge PCLK);

        PSEL    = 0;
        PENABLE = 0;
        PWRITE  = 0;

    end

    endtask

    //----------------------------------------------------------------------
    // APB READ
    //----------------------------------------------------------------------

    task apb_read;

        input [APB_ADDR_WIDTH-1:0] address;

    begin

        @(posedge PCLK);

        PSEL    = 1;
        PENABLE = 0;
        PWRITE  = 0;

        PADDR   = address;

        @(posedge PCLK);

        PENABLE = 1;

        @(posedge PCLK);

        PSEL    = 0;
        PENABLE = 0;

    end

    endtask

    //----------------------------------------------------------------------
    // Test Sequence
    //----------------------------------------------------------------------

    initial
    begin

        $dumpfile("apb_wrapper.vcd");
        $dumpvars(0, apb_wrapper_tb);

        reset_dut();
	pass_count = 0;
	fail_count = 0;

        //----------------------------------------------------------
        // Test Write
        //----------------------------------------------------------

        $display("------------------------------------------------");
        $display("APB WRITE TEST");
        $display("------------------------------------------------");

        apb_write(32'h00000004,32'h12345678);

        if(write_en_o)
	begin
	    $display("PASS : Write Enable Generated");
	    pass_count = pass_count + 1;
	end
	else
	begin
	    $display("FAIL : Write Enable NOT Generated");
	    fail_count = fail_count + 1;
	end

        //----------------------------------------------------------
        // Test Read
        //----------------------------------------------------------

        rdata_i = 32'hA5A55A5A;

        apb_read(32'h00000004);

        if(read_en_o)
	begin
	    $display("PASS : Read Enable Generated");
	    pass_count = pass_count + 1;
	end
	else
	begin
	    $display("FAIL : Read Enable NOT Generated");
	    fail_count = fail_count + 1;
	end

        if(PRDATA == 32'hA5A55A5A)
	begin
	    $display("PASS : Read Data Correct");
	    pass_count = pass_count + 1;
	end
	else
	begin
	    $display("FAIL : Read Data Incorrect");
	    fail_count = fail_count + 1;
	end

        repeat(10) @(posedge PCLK);

        $display("");
	$display("==============================================");
	$display("      APB Wrapper Verification Summary");
	$display("==============================================");

	$display("Passed Checks : %0d", pass_count);
	$display("Failed Checks : %0d", fail_count);

	if(fail_count == 0)
	    $display("OVERALL RESULT : PASS");
	else
	    $display("OVERALL RESULT : FAIL");

	$display("==============================================");

        $finish;

    end

endmodule
