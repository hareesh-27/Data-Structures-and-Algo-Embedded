#include<stdint.h>

#define GPIOD_BASE_ADDR 0x40020C00U
#define RCC_BASE_ADDR 0x40023800U

/*Defining macros for GPIOx registers offset*/

#define GPIOx_MODER_OFFSET 0x00U
#define GPIOx_ODATAR_OFFSET 0x14U

/*For clock*/
#define RCC_AHB1ENR_OFFSET 0x30U


/*Actual GPIO Address*/

#define GPIOD_MODER     (GPIOD_BASE_ADDR + GPIOx_MODER_OFFSET)
#define GPIOD_ODATAR    (GPIOD_BASE_ADDR + GPIOx_ODATAR_OFFSET)

/*Actual addr for clock*/
#define RCC_AHB1ENR_ADDR    (RCC_BASE_ADDR + RCC_AHB1ENR_OFFSET)

void main()
{
    uint32_t *pGpiodModeRAddr   = (uint32_t*)GPIOD_MODER;
    uint32_t *pGpiodODRddr      = (uint32_t*)GPIOD_ODATAR;
    uint32_t *pRccAhb1EnrAddr   = (uint32_t*)RCC_AHB1ENR_ADDR;
    
    //enabling clock
    *pRccAhb1EnrAddr |=(1<<3);
    
    //configuring Pin 12 as output pin
    *pGpiodModeRAddr &= ~(3 << 24);
    *pGpiodModeRAddr |= (1<<24);
    
    //enabling LED on pin 12
    *pGpiodODRddr |= (1<<12);
    
    while(1)
}
