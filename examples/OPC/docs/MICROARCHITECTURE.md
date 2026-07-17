# Open Peripheral Controller (OPC)
# Microarchitecture Specification

Version: 1.0

---

# 1. Introduction

This document describes the internal implementation strategy of the Open Peripheral Controller (OPC).

While the System Architecture defines what the system contains, the Microarchitecture defines how the internal modules communicate and operate.

This document serves as the direct blueprint for RTL implementation.

---

# 2. Initial Implementation Scope

The first RTL implementation includes three hardware modules:

- opc_top
- register_bank
- gpio_controller

All remaining peripherals are reserved for future implementation.

---

# 3. Module Responsibilities

## 3.1 opc_top

Responsibilities:

- Instantiate all internal modules.
- Connect the register bank to peripheral modules.
- Connect external GPIO pins.
- Distribute clock and reset signals.
- Serve as the top-level ASIC module.

---

## 3.2 register_bank

Responsibilities:

- Decode register addresses.
- Store control registers.
- Handle register read operations.
- Handle register write operations.
- Provide register values to peripherals.

---

## 3.3 gpio_controller

Responsibilities:

- Receive GPIO control registers.
- Drive GPIO output pins.
- Capture GPIO input pins.
- Report GPIO status to the register bank.

---

# 4. Internal Data Flow

External Write Request

↓

Register Bank

↓

GPIO Control Register

↓

GPIO Controller

↓

GPIO Output Pins

---

External GPIO Input

↓

GPIO Controller

↓

GPIO Status Register

↓

Register Bank

↓

Read Data

---

# 5. Clocking Strategy

The entire design uses a single synchronous clock.

No clock gating is introduced in Version 1.0.

Clock Tree Synthesis is performed during physical implementation.

---

# 6. Reset Strategy

The design uses:

Active-Low Asynchronous Reset

Every sequential register shall return to its default value when reset is asserted.

---

# 7. Design Methodology

The RTL follows these principles:

- Fully synchronous design
- One clock domain
- No combinational feedback
- No inferred latches
- Synthesizable Verilog
- Technology-independent RTL

---

# 8. Future Expansion

Future chapters extend the architecture by adding:

- Timer
- UART
- SPI
- I²C
- Interrupt Controller

without modifying the existing module interfaces.

---

# 9. Revision History

| Version | Description |
|----------|-------------|
| 1.0 | Initial microarchitecture definition |
