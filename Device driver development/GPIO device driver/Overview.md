## 🧠 Driver Architecture Overview (STM32 GPIO)

To avoid confusion, we divide our code into **3 layers**:

---

### 🔹 1. stm.h → Hardware Layer

👉 This file describes **WHAT exists in hardware**

It contains:
- Base addresses of peripherals  
- Register structures  

Example:

```c
#define GPIOA_BASEADDR 0x40020000U

typedef struct
{
    volatile uint32_t MODER;
    volatile uint32_t OTYPER;
} GPIO_RegDef;
```

👉 Think:  
"Just tell me what hardware looks like"

❗ No configuration logic  
❗ No enums  
❗ No functions  

---

### 🔹 2. gpio.h → Driver Interface Layer

👉 This file defines HOW to use the hardware

It contains:

- Configuration enums  
- Data structures for GPIO config  
- Function declarations (APIs)  

Example:

```c
typedef enum
{
    GPIO_MODE_IN,
    GPIO_MODE_OUT
} GPIO_Mode_t;

void GPIO_Init(GPIO_Handle_t *pGPIOHandle);
```

👉 Think:  
"How should I configure and control GPIO?"

---

### 🔹 3. gpio.c → Driver Implementation Layer

👉 This file contains the actual logic

It contains:

- Function definitions  
- Register-level operations  

Example:

```c
void GPIO_Init(GPIO_Handle_t *pGPIOHandle)
{
    GPIOA->MODER |= (1 << 10);
}
```

👉 Think:  
"How things actually work internally"

---

### 🔁 How all 3 work together

```
User Code
   ↓
gpio.h   (interface)
   ↓
gpio.c   (implementation)
   ↓
stm.h    (hardware registers)
```
