# OpenASIC-Design Architecture

## Overview

OpenASIC-Design is the official companion repository for the book:

**Digital ASIC Design: The Complete RTL-to-GDSII Methodology Using Open-Source EDA Tools**

The repository provides an automated and reproducible environment for setting up a complete open-source ASIC design flow.

---

# High-Level Architecture

```
User
 │
 ▼
installer/install.sh
 │
 ├── banner.sh
 ├── common.sh
 ├── system_check.sh
 ├── packages.sh
 ├── docker.sh
 ├── verilator.sh
 ├── iverilog.sh
 ├── gtkwave.sh
 ├── yosys.sh
 ├── openroad.sh
 ├── opensta.sh
 ├── magic.sh
 ├── klayout.sh
 ├── netgen.sh
 ├── openlane.sh
 ├── sky130.sh
 └── verify.sh
```

---

# Design Principles

- One responsibility per script.
- Reusable common functions.
- Automatic verification.
- Modular architecture.
- Easy maintenance.
- Reproducible installation.
- Suitable for education and research.

---

# Target Audience

- Undergraduate Students
- Postgraduate Students
- Researchers
- Faculty Members
- ASIC Engineers
- FPGA Designers

---

# Current Version

Version 0.1.0 (Architecture Phase)
