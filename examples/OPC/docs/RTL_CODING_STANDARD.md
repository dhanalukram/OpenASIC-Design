# Open Peripheral Controller (OPC)
# RTL Coding Standard

Version: 1.0

---

# 1. Purpose

This document defines the RTL coding standard used throughout the Open Peripheral Controller (OPC) project.

The objective is to ensure that every RTL module follows a consistent style, improving readability, maintainability, verification, and reuse.

---

# 2. Design Philosophy

The RTL shall be:

- Synthesizable
- Technology independent
- Parameterizable
- Modular
- Hierarchical
- Reusable
- Well documented

---

# 3. File Naming Convention

| Module | File Name |
|----------|----------------------|
| Top Module | opc_top.v |
| Register Bank | register_bank.v |
| GPIO Controller | gpio_controller.v |
| Timer Controller | timer_controller.v |
| UART Controller | uart_controller.v |
| SPI Controller | spi_controller.v |
| I²C Controller | i2c_controller.v |
| Interrupt Controller | interrupt_controller.v |

Header files:

```
opc_parameters.vh
opc_defines.vh
```

---

# 4. Module Naming

Module names use lowercase with underscores.

Example:

```
gpio_controller
```

Top module:

```
opc_top
```

---

# 5. Instance Naming

Every instantiated module shall begin with:

```
u_
```

Example

```
u_gpio_controller

u_register_bank

u_timer_controller
```

---

# 6. Parameter Naming

Parameters use uppercase.

Example

```
GPIO_WIDTH

DATA_WIDTH

ADDR_WIDTH
```

---

# 7. Signal Naming

| Type | Naming |
|--------|----------------|
| Clock | clk |
| Reset | rst_n |
| Input | *_i |
| Output | *_o |
| Register | *_r |
| Wire | *_w |
| Enable | *_en |
| Valid | *_valid |
| Ready | *_ready |

Examples

```
gpio_data_i

gpio_data_o

write_en_i

read_en_i

gpio_out_o

gpio_in_i
```

---

# 8. Register Naming

Registers use:

```
*_reg
```

Example

```
gpio_data_reg

gpio_dir_reg

timer_count_reg
```

---

# 9. Wire Naming

Internal combinational signals use

```
*_w
```

Example

```
gpio_data_w

gpio_dir_w
```

---

# 10. Constants

Compile-time constants shall use

```
`define
```

Example

```
`define GPIO_DATA_ADDR 8'h00
```

---

# 11. Parameters

Reusable hardware values shall use

```
parameter
```

Example

```
parameter GPIO_WIDTH = 8;
```

---

# 12. Sequential Logic

Sequential logic shall always use

```
always @(posedge clk or negedge rst_n)
```

---

# 13. Combinational Logic

Combinational logic shall always use

```
always @(*)
```

---

# 14. Reset Style

All sequential registers shall initialize during reset.

Example

```
if(!rst_n)

    register <= 0;
```

---

# 15. Indentation

- Four spaces
- No tabs

---

# 16. Comments

Every module shall contain:

- Purpose
- Inputs
- Outputs
- Author
- Version

Every major RTL section shall include comments.

---

# 17. Module Structure

Every RTL file follows this order:

1. Header
2. Includes
3. Parameters
4. Port Declaration
5. Internal Signals
6. Sequential Logic
7. Combinational Logic
8. Module End

---

# 18. Design Rules

The RTL shall never contain:

- Inferred latches
- Multiple drivers
- Blocking assignments inside sequential logic
- Hard-coded widths
- Hard-coded addresses
- Technology-specific primitives

---

# 19. Revision History

| Version | Description |
|----------|-------------|
| 1.0 | Initial RTL coding standard |
