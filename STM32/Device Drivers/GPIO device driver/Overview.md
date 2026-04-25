## 📁 Project Structure Overview

This project is divided into three main files, each representing a different layer of the driver design.

---

### 🔹 stm.h → Hardware Layer

This file describes the **microcontroller hardware**.

It contains:
- Base addresses of peripherals (e.g., GPIOA, GPIOB)
- Register structures that map to actual hardware registers

👉 It tells:  
**what exists in hardware and how it is organized in memory**

---

### 🔹 gpio.h → Driver Interface Layer

This file defines **how the user interacts with GPIO**.

It contains:
- Enums for configuration values (mode, speed, type, etc.)
- Struct to hold complete GPIO pin configuration
- Function declarations (GPIO_Init, GPIO_SetPin, etc.)

👉 It tells:  
**what values to use and what functions are available**

---

### 🔹 gpio.c → Driver Implementation Layer

This file contains the **actual logic**.

It includes:
- Definitions of all GPIO functions
- Bit-level operations on registers (MODER, ODR, IDR, etc.)

👉 It does:  
**the actual work of writing and reading hardware registers**

---

## 🔁 Overall Flow

```
main.c → uses gpio.h (interface)
→ calls functions in gpio.c
→ which access registers defined in stm.h
```

---

## ⚡ Final Understanding

- `stm.h`  → hardware description  
- `gpio.h` → user interface  
- `gpio.c` → implementation logic  

👉 This separation makes the code clean, modular, and scalable.
