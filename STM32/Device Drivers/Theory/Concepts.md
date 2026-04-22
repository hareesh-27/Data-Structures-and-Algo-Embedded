## Device drivers

First Let us understand the defenition of device drivers the lets understand why we need it.

**Device drivers**
It is the softare layer between your applocation and hardware

- In embedded systems : It is just the C code that talks directly to registers of hardware.

**Why device drivers are needed ?**

- Abstraction       : You don't deal with registers, bits or hardware complexity  
- Portability       : Same code works on multiple boards(In our my case STM32 family)  
- Code organisation : Prevent messy codes/code readability  

There are diff types of device drivers used in embedded programming. Here I use **bare metal register code**

Device drivers provide abstraction over hardware, improve code organization by separating application and hardware logic,  
enable reusability and make systems easier to maintain. In some cases, they also improve portability across similar hardware platforms.

---

We'll see a small example from the LED blink code to get an idea of what we will be doing in device drivers

## Actual code :

```c
#include <stdint.h>

/* Base addresses */
#define GPIOD_BASE_ADDR 0x40020C00U
#define RCC_BASE_ADDR   0x40023800U

/* Offsets */
#define GPIOx_MODER_OFFSET 0x00U
#define GPIOx_ODR_OFFSET   0x14U
#define RCC_AHB1ENR_OFFSET 0x30U

/* Register addresses */
#define GPIOD_MODER   (GPIOD_BASE_ADDR + GPIOx_MODER_OFFSET)
#define GPIOD_ODR     (GPIOD_BASE_ADDR + GPIOx_ODR_OFFSET)
#define RCC_AHB1ENR   (RCC_BASE_ADDR + RCC_AHB1ENR_OFFSET)

int main(void)
{
    volatile uint32_t *pGpiodModeReg = (uint32_t*) GPIOD_MODER;
    volatile uint32_t *pGpiodODRReg  = (uint32_t*) GPIOD_ODR;
    volatile uint32_t *pRccAhb1Enr   = (uint32_t*) RCC_AHB1ENR;

    /* Enable clock */
    *pRccAhb1Enr |= (1 << 3);

    /* Configure PD12 as output */
    *pGpiodModeReg &= ~(3 << 24);
    *pGpiodModeReg |=  (1 << 24);

    /* Turn ON LED */
    *pGpiodODRReg |= (1 << 12);

    while(1);
}
```

Now,  
We create LED.h  

```c
#ifndef LED_H
#define LED_H

#include <stdint.h>

void LED_Init(void);
void LED_On(void);
void LED_Off(void);
void LED_Toggle(void);

#endif
```

This file tells: “These functions exist somewhere”

Next,  
LED.c  
We move the register logic here  

```c
#include "led.h"

/* Base addresses */
#define GPIOD_BASE_ADDR 0x40020C00U
#define RCC_BASE_ADDR   0x40023800U

/* Offsets */
#define GPIOx_MODER_OFFSET 0x00U
#define GPIOx_ODR_OFFSET   0x14U
#define RCC_AHB1ENR_OFFSET 0x30U

/* Register addresses */
#define GPIOD_MODER   (GPIOD_BASE_ADDR + GPIOx_MODER_OFFSET)
#define GPIOD_ODR     (GPIOD_BASE_ADDR + GPIOx_ODR_OFFSET)
#define RCC_AHB1ENR   (RCC_BASE_ADDR + RCC_AHB1ENR_OFFSET)

volatile uint32_t *pGpiodModeReg = (uint32_t*) GPIOD_MODER;
volatile uint32_t *pGpiodODRReg  = (uint32_t*) GPIOD_ODR;
volatile uint32_t *pRccAhb1Enr   = (uint32_t*) RCC_AHB1ENR;

void LED_Init(void)
{
    *pRccAhb1Enr |= (1 << 3);

    *pGpiodModeReg &= ~(3 << 24);
    *pGpiodModeReg |=  (1 << 24);
}

void LED_On(void)
{
    *pGpiodODRReg |= (1 << 12);
}

void LED_Off(void)
{
    *pGpiodODRReg &= ~(1 << 12);
}

void LED_Toggle(void)
{
    *pGpiodODRReg ^= (1 << 12);
}
```

Finally,  
main.c  
Here, main will become more simple  

```c
#include "led.h"

int main(void)
{
    LED_Init();

    while(1)
    {
        LED_On();
    }
}
```
