/* ARM Cortex Mx Processor NVIC Interrupt Clear-Enable Register Addresses */
#define NVIC_ICER	((volatile unsigned int *) 0xE000E180)
#define NVIC_ICER0	((volatile unsigned int *) 0xE000E180)
#define NVIC_ICER1	((volatile unsigned int *) 0xE000E184)
#define NVIC_ICER2	((volatile unsigned int *) 0xE000E188)
#define NVIC_ICER3	((volatile unsigned int *) 0xE000E18C)
#define NVIC_ICER4	((volatile unsigned int *) 0xE000E190)
#define NVIC_ICER5	((volatile unsigned int *) 0xE000E194)
#define NVIC_ICER6	((volatile unsigned int *) 0xE000E198)
#define NVIC_ICER7	((volatile unsigned int *) 0xE000E19C)

/* External Interrupt Registers */
#define EXTI_BASE_ADDR		0x40013C00

typedef struct
{
	unsigned int IMR;
	unsigned int EMR;
	unsigned int RTSR;
	unsigned int FTSR;
	unsigned int SWIER;
	unsigned int PR;
} EXTIRegDef;



#define GPIO_SPEED_LOW	0x00000000 /* IO works at 2 MHz, please refer to the product datasheet */
#define GPIO_SPEED_MED	0x00000001 /* range 12,5 MHz to 50 MHz, please refer to the product datasheet */
#define GPIO_SPEED_HIGH	0x00000002 /* range 25 MHz to 100 MHz, please refer to the product datasheet  */
#define GPIO_SPEED_VERY_HIGH0x00000003 /* range 50 MHz to 200 MHz, please refer to the product datasheet  */

#include "stm32f4xx.h"

void config_rcc(void *ptr)
{
	if ((GPIORegDef *) ptr == GPIOD)
	{
		RCC->AHB1ENR = RCC->AHB1ENR | 0x8;
	}

	if ((GPIORegDef *) ptr == GPIOA)
	{
		RCC->AHB1ENR = RCC->AHB1ENR | 0x1;
	}
}