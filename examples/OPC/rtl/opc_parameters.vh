/******************************************************************************
* Project : Open Peripheral Controller (OPC)
* File    : opc_parameters.vh
* Author  : Dr. Lukram Dhanachandra Singh
*
* Description:
* Global design parameters used throughout the OPC project.
******************************************************************************/

`ifndef OPC_PARAMETERS_VH
`define OPC_PARAMETERS_VH

//==============================================================
// Global Parameters
//==============================================================

parameter DATA_WIDTH = 32;
parameter ADDR_WIDTH = 8;
parameter GPIO_WIDTH = 8;
parameter NUM_REGISTERS = 8;
//==============================================================
// Future Expansion
//==============================================================

parameter TIMER_WIDTH = 32;
parameter UART_DATA_WIDTH = 8;
parameter SPI_DATA_WIDTH = 8;
parameter I2C_DATA_WIDTH = 8;

`endif
