# Open Peripheral Controller (OPC)
## Functional Design Specification
Version: 1.0

---

# 1. Introduction

The Open Peripheral Controller (OPC) is the reference ASIC project developed throughout the book:

**Digital ASIC Design: The Complete RTL-to-GDSII Methodology Using Open-Source EDA Tools**

Rather than presenting isolated examples, this project evolves continuously across all chapters, demonstrating the complete ASIC implementation flow from RTL design to GDSII generation.

The OPC serves as a compact memory-mapped peripheral subsystem that can be integrated into a System-on-Chip (SoC). Its modular architecture enables readers to understand digital hardware design, verification, synthesis, timing analysis, physical implementation, and physical verification within a single cohesive project.

---

# 2. Design Objectives

The primary objectives of the OPC are:

- Demonstrate professional RTL design methodology.
- Illustrate hierarchical ASIC design.
- Develop reusable hardware IP blocks.
- Demonstrate register-based peripheral design.
- Provide a complete example for the RTL-to-GDSII flow.
- Serve as the reference design throughout the book.

---

# 3. Functional Requirements

The OPC shall:

- Operate using a single system clock.
- Support an active-low asynchronous reset.
- Provide a register-based interface for peripheral control.
- Control multiple internal peripherals.
- Allow future expansion by adding new peripherals without modifying the overall architecture.

---

# 4. Initial Peripheral Modules

Version 1.0 of the OPC consists of the following modules:

- Top-Level Controller
- Register Bank
- GPIO Controller

Future versions introduced in later chapters may include:

- Timer
- UART
- SPI
- I2C
- Interrupt Controller

---

# 5. Clock and Reset

Clock:

- Single synchronous clock input.

Reset:

- Active-low asynchronous reset.

---

# 6. Register Interface

The OPC uses a simple memory-mapped register interface.

The initial implementation supports:

- Register Read
- Register Write
- GPIO Output Control
- GPIO Input Status

The register interface will later evolve into a reusable IP architecture.

---

# 7. Design Philosophy

The OPC follows a hierarchical hardware design methodology.

Every peripheral is implemented as an independent module connected through the top-level controller.

This approach simplifies verification, synthesis, debugging, and future expansion.

---

# 8. Future Enhancements

Throughout the remaining chapters, the OPC will be progressively enhanced by adding:

- Parameterized modules
- Bus interface
- Timing constraints
- Physical implementation
- Physical verification
- Final GDSII generation

---

# 9. Project Directory Structure

```
OPC/

rtl/
tb/
constraints/
scripts/
synthesis/
sta/
floorplan/
placement/
cts/
routing/
reports/
layout/
gds/
docs/
```

---

# 10. Revision History

| Version | Description |
|----------|-------------|
| 1.0 | Initial functional specification |
