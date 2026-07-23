`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Project : Open Peripheral Controller (OPC)
// Module  : Testbench
// File    : opc_apb_top_tb.v
//
// Description:
// ------------
// Self-checking testbench for the APB-integrated Open Peripheral Controller.
//
// Verifies:
//   - APB write transactions
//   - APB read transactions
//   - GPIO functionality
//   - Invalid address handling
//
// Author  : Dr. Lukram Dhanachandra Singh
// Version : 1.0
//////////////////////////////////////////////////////////////////////////////////

`include "opc_parameters.vh"

`include "opc_defines.vh"



module opc_apb_top_tb;

///////////////////////////////////////////////////////////////////////////////
// Clock and Reset
///////////////////////////////////////////////////////////////////////////////

reg PCLK;
reg PRESETn;

///////////////////////////////////////////////////////////////////////////////
// APB Interface
///////////////////////////////////////////////////////////////////////////////

reg                      PSEL;
reg                      PENABLE;
reg                      PWRITE;

reg  [APB_ADDR_WIDTH-1:0] PADDR;
reg  [DATA_WIDTH-1:0]     PWDATA;

wire [DATA_WIDTH-1:0]     PRDATA;
wire                      PREADY;
wire                      PSLVERR;


reg [DATA_WIDTH-1:0] read_data;




///////////////////////////////////////////////////////////////////////////////
// GPIO Interface
///////////////////////////////////////////////////////////////////////////////

reg  [GPIO_WIDTH-1:0] gpio_in_i;

wire [GPIO_WIDTH-1:0] gpio_out_o;
wire [GPIO_WIDTH-1:0] gpio_input_o;

///////////////////////////////////////////////////////////////////////////////
// Verification Variables
///////////////////////////////////////////////////////////////////////////////

integer pass_count;
integer fail_count;

///////////////////////////////////////////////////////////////////////////////
// DUT
///////////////////////////////////////////////////////////////////////////////

opc_apb_top dut
(
    .PCLK          (PCLK),
    .PRESETn       (PRESETn),

    .PSEL          (PSEL),
    .PENABLE       (PENABLE),
    .PWRITE        (PWRITE),

    .PADDR         (PADDR),
    .PWDATA        (PWDATA),

    .PRDATA        (PRDATA),
    .PREADY        (PREADY),
    .PSLVERR       (PSLVERR),

    .gpio_in_i     (gpio_in_i),

    .gpio_out_o    (gpio_out_o),
    .gpio_input_o  (gpio_input_o)
);

///////////////////////////////////////////////////////////////////////////////
// Clock Generation
///////////////////////////////////////////////////////////////////////////////

always #5 PCLK = ~PCLK;

///////////////////////////////////////////////////////////////////////////////
// Initial Values
///////////////////////////////////////////////////////////////////////////////

initial
begin
    PCLK       = 1'b0;
    PRESETn    = 1'b0;

    PSEL       = 1'b0;
    PENABLE    = 1'b0;
    PWRITE     = 1'b0;

    PADDR      = {APB_ADDR_WIDTH{1'b0}};
    PWDATA     = {DATA_WIDTH{1'b0}};

    gpio_in_i  = {GPIO_WIDTH{1'b0}};

    pass_count = 0;
    fail_count = 0;
end

///////////////////////////////////////////////////////////////////////////////
// Reset Task
///////////////////////////////////////////////////////////////////////////////

task reset_dut;
begin
    PRESETn = 1'b0;

    PSEL    = 1'b0;
    PENABLE = 1'b0;
    PWRITE  = 1'b0;

    PADDR   = {APB_ADDR_WIDTH{1'b0}};
    PWDATA  = {DATA_WIDTH{1'b0}};

    gpio_in_i = {GPIO_WIDTH{1'b0}};

    repeat (5) @(posedge PCLK);

    PRESETn = 1'b1;

    repeat (2) @(posedge PCLK);

end
endtask

///////////////////////////////////////////////////////////////////////////////
// APB Write Task
///////////////////////////////////////////////////////////////////////////////

task apb_write;

input [APB_ADDR_WIDTH-1:0] addr;
input [DATA_WIDTH-1:0]     data;

begin

    //----------------------------------------------------------
    // Setup Phase
    //----------------------------------------------------------

    @(posedge PCLK);

    PSEL    = 1'b1;
    PENABLE = 1'b0;
    PWRITE  = 1'b1;

    PADDR   = addr;
    PWDATA  = data;

    //----------------------------------------------------------
    // Enable Phase
    //----------------------------------------------------------

    @(posedge PCLK);

    PENABLE = 1'b1;

    //----------------------------------------------------------
    // Wait for Completion
    //----------------------------------------------------------

    @(posedge PCLK);

    while (!PREADY)
        @(posedge PCLK);

    //----------------------------------------------------------
    // Finish Transaction
    //----------------------------------------------------------

    PSEL    = 1'b0;
    PENABLE = 1'b0;
    PWRITE  = 1'b0;

end

endtask

///////////////////////////////////////////////////////////////////////////////
// APB Read Task
///////////////////////////////////////////////////////////////////////////////

task apb_read;

input  [APB_ADDR_WIDTH-1:0] addr;
output [DATA_WIDTH-1:0]     data;

begin

    //----------------------------------------------------------
    // Setup Phase
    //----------------------------------------------------------

    @(posedge PCLK);

    PSEL    = 1'b1;
    PENABLE = 1'b0;
    PWRITE  = 1'b0;

    PADDR   = addr;

    //----------------------------------------------------------
    // Enable Phase
    //----------------------------------------------------------

    @(posedge PCLK);

    PENABLE = 1'b1;

    //----------------------------------------------------------
    // Wait for Completion
    //----------------------------------------------------------

    @(posedge PCLK);

    while (!PREADY)
        @(posedge PCLK);

    data = PRDATA;

    //----------------------------------------------------------
    // Finish Transaction
    //----------------------------------------------------------

    PSEL    = 1'b0;
    PENABLE = 1'b0;

end

endtask

///////////////////////////////////////////////////////////////////////////////
// Main Test Sequence
///////////////////////////////////////////////////////////////////////////////

initial
begin

    //----------------------------------------------------------------------
    // Reset DUT
    //----------------------------------------------------------------------

    reset_dut();

    $display("====================================================");
    $display(" OPC APB TOP FUNCTIONAL VERIFICATION");
    $display("====================================================");

    /////////////////////////////////////////////////////////////////////////
    // Test 1 : GPIO_DATA Write / Read
    /////////////////////////////////////////////////////////////////////////

    apb_write(`GPIO_DATA_ADDR, 32'h00000055);

    apb_read(`GPIO_DATA_ADDR, read_data);

    $display("--------------------------------");
    $display("GPIO_DATA TEST");
    $display("Expected = %h", 32'h00000055);
    $display("Read     = %h", read_data);
    $display("--------------------------------");

    if(read_data == 32'h00000055)
    begin
        $display("PASS : GPIO_DATA Write/Read");
        pass_count = pass_count + 1;
    end
    else
    begin
        $display("FAIL : GPIO_DATA Write/Read");
        fail_count = fail_count + 1;
    end;

    /////////////////////////////////////////////////////////////////////////
    // Test 2 : GPIO_DIR Write / Read
    /////////////////////////////////////////////////////////////////////////

    apb_write(`GPIO_DIR_ADDR,32'h000000FF);

    apb_read(`GPIO_DIR_ADDR,read_data);

    if(read_data == 32'h000000FF)
    begin
        $display("PASS : GPIO_DIR Write/Read");
        pass_count = pass_count + 1;
    end
    else
    begin
        $display("FAIL : GPIO_DIR Write/Read");
        fail_count = fail_count + 1;
    end;

    /////////////////////////////////////////////////////////////////////////
    // Test 3 : GPIO Output Check
    /////////////////////////////////////////////////////////////////////////

    if(gpio_out_o == 8'h55)
    begin
        $display("PASS : GPIO Output");
        pass_count = pass_count + 1;
    end
    else
    begin
        $display("FAIL : GPIO Output");
        fail_count = fail_count + 1;
    end;

    /////////////////////////////////////////////////////////////////////////
    // Test 4 : GPIO Input Check
    /////////////////////////////////////////////////////////////////////////

    gpio_in_i = 8'hA5;

    repeat(2) @(posedge PCLK);

    if(gpio_input_o == 8'hA5)
    begin
        $display("PASS : GPIO Input");
        pass_count = pass_count + 1;
    end
    else
    begin
        $display("FAIL : GPIO Input");
        fail_count = fail_count + 1;
    end;

    /////////////////////////////////////////////////////////////////////////
    // Test 5 : Invalid Address
    /////////////////////////////////////////////////////////////////////////

    apb_write(32'h00000040, 32'h12345678);

    if(PSLVERR)
    begin
        $display("PASS : Invalid Address");
        pass_count = pass_count + 1;
    end
    else
    begin
        $display("FAIL : Invalid Address");
        fail_count = fail_count + 1;
    end;

    /////////////////////////////////////////////////////////////////////////
    // Test 6 : Multiple Transactions
    /////////////////////////////////////////////////////////////////////////

    apb_write(`GPIO_DATA_ADDR,32'hAAAAAAAA);
    apb_write(`GPIO_DIR_ADDR ,32'hFFFFFFFF);

    apb_read(`GPIO_DATA_ADDR,read_data);

    $display("--------------------------------");
    $display("MULTIPLE TRANSACTION TEST");
    $display("Expected = %h", 32'hAAAAAAAA);
    $display("Read     = %h", read_data);
    $display("--------------------------------");
	
    if(read_data == 32'hAAAAAAAA)
    begin
        $display("PASS : Multiple Transaction");
        pass_count = pass_count + 1;
    end
    else
    begin
        $display("FAIL : Multiple Transaction");
        fail_count = fail_count + 1;
    end;

    /////////////////////////////////////////////////////////////////////////
    // Summary
    /////////////////////////////////////////////////////////////////////////

    $display("");
    $display("==============================================");
    $display(" OPC APB TOP Verification Summary");
    $display("==============================================");

    $display("Passed Checks : %0d",pass_count);
    $display("Failed Checks : %0d",fail_count);

    if(fail_count==0)
        $display("OVERALL RESULT : PASS");
    else
        $display("OVERALL RESULT : FAIL");

    $display("==============================================");

    #20;

    $finish;

end


///////////////////////////////////////////////////////////////////////////////
// Waveform Dump
///////////////////////////////////////////////////////////////////////////////

initial
begin
    $dumpfile("opc_apb_top.vcd");
    $dumpvars(0, opc_apb_top_tb);
end

endmodule
