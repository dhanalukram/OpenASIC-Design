# Open Peripheral Controller (OPC)
# System Architecture Document

Version: 1.0

---

# 1. Introduction

This document describes the system-level architecture of the Open Peripheral Controller (OPC), which serves as the reference ASIC project throughout the book *Digital ASIC Design: The Complete RTL-to-GDSII Methodology Using Open-Source EDA Tools*.

The architecture has been designed to demonstrate a complete industrial ASIC design methodology while remaining sufficiently simple for educational purposes.

The OPC follows a modular and hierarchical architecture that enables incremental development across multiple chapters.

---

# 2. System Overview

The Open Peripheral Controller is a memory-mapped digital peripheral subsystem intended for integration into a System-on-Chip (SoC).

It provides a centralized interface for controlling multiple peripheral modules through a common register interface.

The architecture has been designed with the following objectives:

- Simplicity
- Modularity
- Reusability
- Scalability
- Synthesizability

---

# 3. High-Level Architecture

```

                           +--------------------------------------+
                           |   Open Peripheral Controller (OPC)   |
                           |              opc_top                 |
                           +------------------+-------------------+
                                              |
                                   Internal Peripheral Bus
                                              |
      +-----------+------------+-------------+-------------+-------------+
      |           |            |             |             |             |
 Register      GPIO         Timer         UART          SPI           I²C
  Bank       Controller    Controller   Controller    Controller   Controller
      |           |            |             |             |             |
      +-----------+------------+-------------+-------------+-------------+
                                              |
                                   Interrupt Controller
                                              |
                                         IRQ Output

```

The above architecture represents the complete target architecture of the OPC.

Not all modules are implemented initially.

Each chapter progressively develops additional functionality while preserving the overall architecture.

---

# 4. Module Hierarchy

Top Level

```

opc_top

├── register_bank

├── gpio_controller

├── timer_controller

├── uart_controller

├── spi_controller

├── i2c_controller

└── interrupt_controller

```

The hierarchy remains fixed throughout the project.

Only the implementation maturity changes from chapter to chapter.

---

# 5. Initial Implementation (Phase 1)

The first RTL implementation includes only three modules:

- opc_top
- register_bank
- gpio_controller

These modules are sufficient to demonstrate RTL coding, hierarchy, synthesis, timing analysis, and physical implementation.

---

# 6. Future Expansion

The remaining modules are introduced progressively.

| Module | Planned Purpose |
|---------|-----------------|
| Timer | General-purpose timer |
| UART | Serial communication |
| SPI | SPI master interface |
| I²C | I²C controller |
| Interrupt Controller | Interrupt aggregation |

---

# 7. Design Principles

The OPC architecture follows these principles:

- Hierarchical design
- Modular implementation
- Register-based control
- Clean module interfaces
- Reusable IP blocks
- Technology-independent RTL
- ASIC-oriented design methodology

---

# 8. Development Roadmap

| Chapter | Implementation |
|----------|----------------|
| Chapter 3 | RTL Design |
| Chapter 4 | Functional Verification |
| Chapter 5 | Reusable IP Design |
| Chapter 6 | Logic Synthesis |
| Chapter 7 | Static Timing Analysis |
| Chapter 8 | Physical Design |
| Chapter 9 | Physical Verification and GDSII |

---

# 9. Revision History

| Version | Description |
|----------|-------------|
| 1.0 | Initial system architecture |
