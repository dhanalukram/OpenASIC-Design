`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Project : Open Peripheral Controller (OPC)
// Module  : APB Wrapper
// File    : apb_wrapper.v
//
// Description:
// ------------
// Generic APB3 slave wrapper for the Open Peripheral Controller.
// Converts APB transactions into the generic register interface
// used by the existing OPC.
//
// Author  :Dr. Lukram Dhanachandra Singh
// Version : 1.0
//////////////////////////////////////////////////////////////////////////////////

`include "opc_parameters.vh"

module apb_wrapper
(
    //----------------------------------------------------------------------
    // Clock and Reset
    //----------------------------------------------------------------------

    input  wire                     PCLK,
    input  wire                     PRESETn,

    //----------------------------------------------------------------------
    // APB Slave Interface
    //----------------------------------------------------------------------

    input  wire                     PSEL,
    input  wire                     PENABLE,
    input  wire                     PWRITE,

    //input  wire [31:0]              PADDR,
    input wire [APB_ADDR_WIDTH-1:0] PADDR,
    input  wire [DATA_WIDTH-1:0]    PWDATA,

    output wire  [DATA_WIDTH-1:0]    PRDATA,
    output reg                      PREADY,
    output reg                      PSLVERR,

    //----------------------------------------------------------------------
    // Generic Register Interface
    //----------------------------------------------------------------------

    output reg                      write_en_o,
    output reg                      read_en_o,

    output reg [ADDR_WIDTH-1:0]     addr_o,
    output reg [DATA_WIDTH-1:0]     wdata_o,

    input wire [DATA_WIDTH-1:0]     rdata_i
);

///////////////////////////////////////////////////////////////////////////////
// Internal Signals
///////////////////////////////////////////////////////////////////////////////

//wire apb_setup_w;
wire apb_access_w;

wire apb_write_access_w;
wire apb_read_access_w;

assign PRDATA = rdata_i;
///////////////////////////////////////////////////////////////////////////////
// Address Decode
///////////////////////////////////////////////////////////////////////////////

wire [ADDR_WIDTH-1:0] reg_addr_w;
wire                  valid_addr_w;

assign reg_addr_w = PADDR[REG_ADDR_LSB + ADDR_WIDTH - 1 :
                          REG_ADDR_LSB];

assign valid_addr_w = (reg_addr_w < NUM_REGISTERS);
///////////////////////////////////////////////////////////////////////////////
// APB Transaction Detection
///////////////////////////////////////////////////////////////////////////////

//assign apb_setup_w  = PSEL & (~PENABLE);

assign apb_access_w = PSEL & PENABLE;

assign apb_write_access_w = apb_access_w & PWRITE;

assign apb_read_access_w  = apb_access_w & (~PWRITE);

///////////////////////////////////////////////////////////////////////////////
// APB Sequential Logic
///////////////////////////////////////////////////////////////////////////////

always @(posedge PCLK or negedge PRESETn)
begin

    //----------------------------------------------------------------------
    // Reset
    //----------------------------------------------------------------------

    if(!PRESETn)
    begin

        write_en_o <= 1'b0;
        read_en_o  <= 1'b0;

        addr_o     <= {ADDR_WIDTH{1'b0}};
        wdata_o    <= {DATA_WIDTH{1'b0}};

        //PRDATA     <= {DATA_WIDTH{1'b0}};

        PREADY     <= 1'b0;
        PSLVERR    <= 1'b0;

    end

        else
    begin

        //----------------------------------------------------------
        // Default Outputs
        //----------------------------------------------------------

        write_en_o <= 1'b0;
        read_en_o  <= 1'b0;

        PREADY     <= 1'b0;
        PSLVERR    <= 1'b0;

	        //----------------------------------------------------------
        // APB Write
        //----------------------------------------------------------

        if(apb_write_access_w)
	begin
	    PREADY <= 1'b1;

	    if(valid_addr_w)
	    begin
	        write_en_o <= 1'b1;
	        addr_o <= PADDR[ADDR_WIDTH-1:0];
		//addr_o     <= reg_addr_w;
 	        wdata_o    <= PWDATA;
	        PSLVERR    <= 1'b0;
	    end
	    else
	    begin
	        write_en_o <= 1'b0;
	        PSLVERR    <= 1'b1;
	    end
	end
        //----------------------------------------------------------
        // APB Read
        //----------------------------------------------------------

        else if(apb_read_access_w)
	begin
	    PREADY <= 1'b1;

	    if(valid_addr_w)
	    begin
	        read_en_o <= 1'b1;
	        addr_o <= PADDR[ADDR_WIDTH-1:0];
		//addr_o    <= reg_addr_w;
	        //PRDATA    <= rdata_i;
	        PSLVERR   <= 1'b0;
	    end
	    else
	    begin
	        read_en_o <= 1'b0;
	        //PRDATA    <= {DATA_WIDTH{1'b0}};
	        PSLVERR   <= 1'b1;
	    end
	end

    end

end

endmodule


