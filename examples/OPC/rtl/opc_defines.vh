/******************************************************************************
* Project : Open Peripheral Controller (OPC)
* File    : opc_defines.vh
*
* Description:
* Register address definitions.
******************************************************************************/

`ifndef OPC_DEFINES_VH
`define OPC_DEFINES_VH

//==============================================================
// GPIO Register Addresses
//==============================================================

`define GPIO_DATA_ADDR      8'h00
`define GPIO_DIR_ADDR       8'h04
`define GPIO_IN_ADDR        8'h08
`define GPIO_OUT_ADDR       8'h0C

//==============================================================
// Future Peripheral Registers
//==============================================================

`define TIMER_CTRL_ADDR     8'h10
`define TIMER_COUNT_ADDR    8'h14

`define UART_CTRL_ADDR      8'h18
`define UART_STATUS_ADDR    8'h1C

`define SPI_CTRL_ADDR       8'h20
`define SPI_STATUS_ADDR     8'h24

`define I2C_CTRL_ADDR       8'h28
`define I2C_STATUS_ADDR     8'h2C

`define IRQ_ENABLE_ADDR     8'h30
`define IRQ_STATUS_ADDR     8'h34

`endif
