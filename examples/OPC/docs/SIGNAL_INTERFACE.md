# Open Peripheral Controller (OPC)
# Signal Interface Specification

Version: 1.0

---

# 1. Introduction

This document defines the interfaces of all modules within the Open Peripheral Controller (OPC).

The objective is to standardize signal naming, signal directions, signal widths, and communication between modules before RTL implementation begins.

This document serves as the interface contract between hardware modules.

---

# 2. Global Signals

All modules use the following global signals.

| Signal | Direction | Width | Description |
|---------|-----------|-------|-------------|
| clk | Input | 1 | System Clock |
| rst_n | Input | 1 | Active-Low Asynchronous Reset |

---

# 3. Top-Level Interface

Module:

```
opc_top
```

## Inputs

| Signal | Width | Description |
|---------|------:|-------------|
| clk | 1 | System Clock |
| rst_n | 1 | Active-Low Reset |
| gpio_in | 8 | GPIO Input Pins |

---

## Outputs

| Signal | Width | Description |
|---------|------:|-------------|
| gpio_out | 8 | GPIO Output Pins |

---

# 4. Register Bank Interface

The Register Bank connects the processor interface to internal peripherals.

## Inputs

| Signal | Width |
|---------|------:|
| clk | 1 |
| rst_n | 1 |
| addr | 8 |
| wr_en | 1 |
| rd_en | 1 |
| wr_data | 32 |

---

## Outputs

| Signal | Width |
|---------|------:|
| rd_data | 32 |

---

# 5. GPIO Interface

## Inputs

| Signal | Width |
|---------|------:|
| clk | 1 |
| rst_n | 1 |
| gpio_data | 8 |
| gpio_dir | 8 |
| gpio_in | 8 |

---

## Outputs

| Signal | Width |
|---------|------:|
| gpio_out | 8 |

---

# 6. Future Module Interfaces

The following interfaces are reserved for future implementation.

- Timer Interface
- UART Interface
- SPI Interface
- I²C Interface
- Interrupt Interface

The interface specifications will be expanded as the corresponding modules are introduced.

---

# 7. Signal Naming Convention

The OPC follows a consistent signal naming convention.

| Prefix/Suffix | Meaning |
|---------------|---------|
| clk | Clock |
| rst_n | Active-Low Reset |
| addr | Register Address |
| wr_* | Write Signals |
| rd_* | Read Signals |
| data | Data Signals |
| in | External Inputs |
| out | External Outputs |
| ctrl | Control Signals |
| status | Status Signals |

---

# 8. Bus Widths

| Signal | Width |
|---------|------:|
| Address Bus | 8 bits |
| Data Bus | 32 bits |
| GPIO | 8 bits |

These widths are selected for educational simplicity while allowing future expansion.

---

# 9. Design Rules

The OPC follows the following interface rules:

- All sequential logic is synchronized to the rising edge of the system clock.
- All modules use a common active-low reset.
- Module interfaces remain stable throughout the design flow.
- Internal signals use descriptive names.
- Future peripherals shall follow the same interface conventions.

---

# 10. Revision History

| Version | Description |
|----------|-------------|
| 1.0 | Initial signal interface specification |
