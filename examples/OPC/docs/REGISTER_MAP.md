# Open Peripheral Controller (OPC)
# Register Map Specification

Version: 1.0

---

# 1. Introduction

This document defines the memory-mapped register interface of the Open Peripheral Controller (OPC).

The register map provides a standardized interface between software and hardware. All peripheral modules are accessed through memory-mapped registers located inside the Register Bank.

This document serves as the hardware/software contract for the OPC.

---

# 2. Address Map

| Address | Register Name | Access | Reset | Description |
|----------|---------------|--------|-------|-------------|
| 0x00 | GPIO_DATA | R/W | 0x00 | GPIO Data Register |
| 0x04 | GPIO_DIR | R/W | 0x00 | GPIO Direction Register |
| 0x08 | GPIO_IN | R | 0x00 | GPIO Input Status Register |
| 0x0C | GPIO_OUT | R | 0x00 | GPIO Output Status Register |
| 0x10 | TIMER_CTRL | R/W | 0x00 | Timer Control Register |
| 0x14 | TIMER_COUNT | R | 0x00 | Timer Counter Register |
| 0x18 | UART_CTRL | R/W | 0x00 | UART Configuration Register |
| 0x1C | UART_STATUS | R | 0x00 | UART Status Register |
| 0x20 | SPI_CTRL | R/W | 0x00 | SPI Configuration Register |
| 0x24 | SPI_STATUS | R | 0x00 | SPI Status Register |
| 0x28 | I2C_CTRL | R/W | 0x00 | I²C Configuration Register |
| 0x2C | I2C_STATUS | R | 0x00 | I²C Status Register |
| 0x30 | IRQ_ENABLE | R/W | 0x00 | Interrupt Enable Register |
| 0x34 | IRQ_STATUS | R | 0x00 | Interrupt Status Register |

---

# 3. GPIO Registers

## GPIO_DATA (0x00)

Stores GPIO output values.

| Bit | Description |
|-----|-------------|
| 7:0 | GPIO Output Data |

---

## GPIO_DIR (0x04)

Configures GPIO direction.

| Bit | Description |
|-----|-------------|
| 0 | GPIO0 Direction |
| 1 | GPIO1 Direction |
| 2 | GPIO2 Direction |
| 3 | GPIO3 Direction |
| 4 | GPIO4 Direction |
| 5 | GPIO5 Direction |
| 6 | GPIO6 Direction |
| 7 | GPIO7 Direction |

0 = Input

1 = Output

---

## GPIO_IN (0x08)

Read-only GPIO input values.

---

## GPIO_OUT (0x0C)

Current output state of GPIO pins.

---

# 4. Future Peripheral Registers

The following registers are reserved for future chapters.

- Timer
- UART
- SPI
- I²C
- Interrupt Controller

Their implementation will be introduced progressively while preserving the same address map.

---

# 5. Register Access Rules

| Access | Description |
|----------|-------------|
| R | Read Only |
| W | Write Only |
| R/W | Read and Write |

---

# 6. Design Notes

The register map has been intentionally finalized before RTL implementation.

This allows:

- Stable hardware/software interface
- Easier verification
- Consistent synthesis
- Future expansion without changing existing software

---

# 7. Revision History

| Version | Description |
|----------|-------------|
| 1.0 | Initial register map |
