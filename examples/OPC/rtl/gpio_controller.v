/******************************************************************************
* Project : Open Peripheral Controller (OPC)
* Module  : GPIO Controller
* File    : gpio_controller.v
*
* Description:
* Parameterizable GPIO Controller for the Open Peripheral Controller (OPC).
* The module controls GPIO output pins and samples GPIO input pins based on
* the direction configuration received from the Configuration Register Block.
*
* Features:
* - Parameterizable GPIO width
* - Active-low asynchronous reset
* - Synchronous operation
* - Technology-independent RTL
* - Fully synthesizable
*
* Author  : Dr. Lukram Dhanachandra Singh
* Book    : Digital ASIC Design:
*           The Complete RTL-to-GDSII Methodology
*           Using Open-Source EDA Tools
******************************************************************************/

`timescale 1ns/1ps

`include "opc_parameters.vh"

module gpio_controller
(
    //----------------------------------------------------------------------
    // Global Signals
    //----------------------------------------------------------------------

    input  wire                     clk,
    input  wire                     rst_n,

    //----------------------------------------------------------------------
    // Control Interface
    //----------------------------------------------------------------------

    input  wire [GPIO_WIDTH-1:0]    gpio_data_i,
    input  wire [GPIO_WIDTH-1:0]    gpio_dir_i,

    //----------------------------------------------------------------------
    // GPIO Interface
    //----------------------------------------------------------------------

    input  wire [GPIO_WIDTH-1:0]    gpio_in_i,

    output reg  [GPIO_WIDTH-1:0]    gpio_out_o,
    output reg  [GPIO_WIDTH-1:0]    gpio_input_o

);

    //----------------------------------------------------------------------
    // Internal Signals
    //----------------------------------------------------------------------


// Sequential logic
integer i;

always @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
        gpio_out_o   <= {GPIO_WIDTH{1'b0}};
        gpio_input_o <= {GPIO_WIDTH{1'b0}};
    end
    else begin

        // Sample all GPIO inputs every clock cycle
        gpio_input_o <= gpio_in_i;

        // Drive GPIO outputs based on direction
        for (i = 0; i < GPIO_WIDTH; i = i + 1) begin
            if (gpio_dir_i[i])
                gpio_out_o[i] <= gpio_data_i[i];
            else
                gpio_out_o[i] <= 1'b0;
        end

    end
end

endmodule
