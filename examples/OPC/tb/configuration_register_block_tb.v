/**********************************************************************
* Project : Open Peripheral Controller (OPC)
* Module  : Configuration Register Block Testbench
* File    : configuration_register_block_tb.v
*
* Description:
* Self-checking testbench for the Configuration Register Block.
*
* Author  : Dr. Lukram Dhanachandra Singh
* Book    : Digital ASIC Design
*           The Complete RTL-to-GDSII Methodology
*           Using Open-Source EDA Tools
**********************************************************************/

`timescale 1ns/1ps

`include "opc_parameters.vh"
`include "opc_defines.vh"

module configuration_register_block_tb;

    //------------------------------------------------------------
    // Clock & Reset
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
    // Peripheral Outputs
    //------------------------------------------------------------

    wire [GPIO_WIDTH-1:0] gpio_data_o;
    wire [GPIO_WIDTH-1:0] gpio_dir_o;

    //------------------------------------------------------------
    // DUT
    //------------------------------------------------------------

    configuration_register_block dut
    (
        .clk(clk),
        .rst_n(rst_n),

        .write_en_i(write_en_i),
        .read_en_i(read_en_i),

        .addr_i(addr_i),
        .wdata_i(wdata_i),

        .rdata_o(rdata_o),

        .gpio_data_o(gpio_data_o),
        .gpio_dir_o(gpio_dir_o)
    );

    //------------------------------------------------------------
    // Clock Generation
    //------------------------------------------------------------

    initial
        clk = 0;

    always #5 clk = ~clk;

    //------------------------------------------------------------
    // Waveform
    //------------------------------------------------------------

    initial
    begin
        $dumpfile("configuration_register_block.vcd");
        $dumpvars(0, configuration_register_block_tb);
    end

    //------------------------------------------------------------
    // Reset Task
    //------------------------------------------------------------

    task reset_dut;
    begin

        rst_n       = 0;
        write_en_i  = 0;
        read_en_i   = 0;
        addr_i      = 0;
        wdata_i     = 0;

        repeat(2) @(posedge clk);

        rst_n = 1;

        @(posedge clk);

    end
    endtask

    //------------------------------------------------------------
    // Write Task
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
    // Read Task
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

        $display("\n=========================================");
        $display(" OPC Configuration Register Block Test");
        $display("=========================================\n");

        //--------------------------------------------------------
        // Reset Test
        //--------------------------------------------------------

        reset_dut();

        if(gpio_data_o == 0 && gpio_dir_o == 0)
            $display("PASS : Reset Test");
        else
            $display("FAIL : Reset Test");

        //--------------------------------------------------------
        // GPIO DATA Register
        //--------------------------------------------------------

        write_register(`GPIO_DATA_ADDR, 32'h000000A5);

        if(gpio_data_o == 8'hA5)
            $display("PASS : GPIO_DATA Write");
        else
            $display("FAIL : GPIO_DATA Write");

        read_register(`GPIO_DATA_ADDR);

        if(rdata_o == 32'h000000A5)
            $display("PASS : GPIO_DATA Read");
        else
            $display("FAIL : GPIO_DATA Read");

        //--------------------------------------------------------
        // GPIO DIR Register
        //--------------------------------------------------------

        write_register(`GPIO_DIR_ADDR, 32'h000000FF);

        if(gpio_dir_o == 8'hFF)
            $display("PASS : GPIO_DIR Write");
        else
            $display("FAIL : GPIO_DIR Write");

        read_register(`GPIO_DIR_ADDR);

        if(rdata_o == 32'h000000FF)
            $display("PASS : GPIO_DIR Read");
        else
            $display("FAIL : GPIO_DIR Read");

        //--------------------------------------------------------
        // Multiple Register Test
        //--------------------------------------------------------

        write_register(`GPIO_DATA_ADDR,32'h55);
        write_register(`GPIO_DIR_ADDR ,32'hAA);

        if(gpio_data_o == 8'h55 &&
           gpio_dir_o  == 8'hAA)
            $display("PASS : Multiple Register Test");
        else
            $display("FAIL : Multiple Register Test");

        //--------------------------------------------------------
        // Invalid Address
        //--------------------------------------------------------

        read_register(8'h7C);

        if(rdata_o == 0)
            $display("PASS : Invalid Address Test");
        else
            $display("FAIL : Invalid Address Test");

        //--------------------------------------------------------
        // Finish
        //--------------------------------------------------------

        $display("\n=========================================");
        $display(" CRB Verification Completed");
        $display("=========================================\n");

        #20;

        $finish;

    end

endmodule
