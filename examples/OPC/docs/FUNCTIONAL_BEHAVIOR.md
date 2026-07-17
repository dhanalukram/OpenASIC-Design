# Open Peripheral Controller (OPC)
# Functional Behavior Specification

Version: 1.0

---

# 1. Introduction

This document specifies the functional behavior of the Open Peripheral Controller (OPC).

Unlike the architecture document, which describes the structural organization of the system, this document defines how the hardware behaves under different operating conditions.

This document forms the basis for RTL implementation, functional verification, and software interaction.

---

# 2. Operating Modes

The OPC operates in three primary modes:

- Reset Mode
- Idle Mode
- Register Access Mode

---

# 3. Reset Mode

When the active-low reset signal (rst_n) is asserted:

- All internal registers shall be reset to their default values.
- GPIO outputs shall be driven LOW.
- GPIO direction shall default to INPUT.
- Status registers shall be cleared.
- No register write operation shall occur.

After reset is released, the controller enters Idle Mode.

---

# 4. Idle Mode

During Idle Mode:

- Internal register values remain unchanged.
- GPIO outputs maintain their programmed values.
- GPIO inputs are continuously sampled.
- Read requests may occur at any time.
- Write requests are accepted whenever enabled.

---

# 5. Register Write Operation

A register write consists of:

1. Address presented.
2. Write enable asserted.
3. Write data presented.
4. Register Bank decodes address.
5. Selected register updated.
6. Peripheral immediately observes updated register value.

---

# 6. Register Read Operation

A register read consists of:

1. Address presented.
2. Read enable asserted.
3. Register Bank decodes address.
4. Requested register value returned on the data bus.

---

# 7. GPIO Controller Behavior

The GPIO Controller supports:

## Output Mode

When the corresponding GPIO_DIR bit is set:

GPIO_OUT = GPIO_DATA

---

## Input Mode

When the corresponding GPIO_DIR bit is cleared:

GPIO input is sampled continuously.

GPIO_IN reflects the current external input value.

---

# 8. Invalid Address Access

If software accesses an undefined register address:

- Read operation returns 0x00000000.
- Write operation is ignored.
- No internal register shall be modified.

---

# 9. Reserved Registers

Reserved registers:

- Shall always return zero.
- Shall ignore write operations.

This ensures future expansion without affecting existing software.

---

# 10. Clock Behavior

All register updates occur on the rising edge of the system clock.

No combinational storage elements are permitted.

---

# 11. Reset Behavior Summary

After reset:

GPIO_DATA     = 0x00

GPIO_DIR      = 0x00

GPIO_IN       = 0x00

GPIO_OUT      = 0x00

---

# 12. Error Handling

Version 1.0 does not implement:

- Bus timeout detection
- Access protection
- Interrupt error reporting
- Illegal access exceptions

These features may be introduced in future versions.

---

# 13. Verification Requirements

The following behaviors shall be verified:

✓ Reset

✓ GPIO write

✓ GPIO read

✓ Direction control

✓ Invalid address read

✓ Invalid address write

✓ Continuous GPIO sampling

---

# 14. Revision History

| Version | Description |
|----------|-------------|
| 1.0 | Initial functional behavior specification |
