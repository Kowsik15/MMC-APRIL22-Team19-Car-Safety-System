#ifndef STM324XX_H
#define STM324XX_H

#include<stddef.h>
#include<stdint.h>
#define EXTI		((EXTIRegDef *) EXTI_BASE_ADDR)

#define EXTI_BASE_ADDR		0x40013C00
#define IRQ_NO_EXTI0	6
#define IRQ_NO_EXTI1	7

#define NVIC_IRQ_PR_LVL_00
#define NO_PR_BITS_IMPLEMENTED4
#define NVIC_IRQ_PR_LVL_00
void exti0_irqhandler(void);





#define NVIC_IPR_BASE_ADDRESS  ((volatile unsigned int *) 0xE000E400)
#define NVIC_IPR0	((volatile unsigned int *) 0xE000E400)


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

/* ARM Cortex Mx specific defines */

/* ARM Cortex Mx Processor NVIC Interrupt Set-Enable Register Addresses */
#define NVIC_ISER	((volatile unsigned int *) 0xE000E100)
#define NVIC_ISER0	((volatile unsigned int *) 0xE000E100)
#define NVIC_ISER1	((volatile unsigned int *) 0xE000E104)
#define NVIC_ISER2	((volatile unsigned int *) 0xE000E108)
#define NVIC_ISER3	((volatile unsigned int *) 0xE000E10C)
#define NVIC_ISER4	((volatile unsigned int *) 0xE000E110)
#define NVIC_ISER5	((volatile unsigned int *) 0xE000E114)
#define NVIC_ISER6	((volatile unsigned int *) 0xE000E118)
#define NVIC_ISER7	((volatile unsigned int *) 0xE000E11C)

/* ARM Cortex Mx Processor NVIC Interrupt Set-Pending Register Addresses */
#define NVIC_ISPR0	((volatile unsigned int *) 0xE000E200)
#define NVIC_ISPR1	((volatile unsigned int *) 0xE000E204)
#define NVIC_ISPR2	((volatile unsigned int *) 0xE000E208)
#define NVIC_ISPR3	((volatile unsigned int *) 0xE000E20C)
#define NVIC_ISPR4	((volatile unsigned int *) 0xE000E210)
#define NVIC_ISPR5	((volatile unsigned int *) 0xE000E214)
#define NVIC_ISPR6	((volatile unsigned int *) 0xE000E218)
#define NVIC_ISPR7	((volatile unsigned int *) 0xE000E21C)

/* ARM Cortex Mx Processor NVIC Interrupt Clear-Pending Register Addresses */
#define NVIC_ICPR0	((volatile unsigned int *) 0xE000E280)
#define NVIC_ICPR1	((volatile unsigned int *) 0xE000E284)
#define NVIC_ICPR2	((volatile unsigned int *) 0xE000E288)
#define NVIC_ICPR3	((volatile unsigned int *) 0xE000E28C)
#define NVIC_ICPR4	((volatile unsigned int *) 0xE000E290)
#define NVIC_ICPR5	((volatile unsigned int *) 0xE000E294)
#define NVIC_ICPR6	((volatile unsigned int *) 0xE000E298)
#define NVIC_ICPR7	((volatile unsigned int *) 0xE000E29C)

/* ARM Cortex Mx Processor NVIC Interrupt Active Bit Register Addresses */
#define NVIC_IABR0	((volatile unsigned int *) 0xE000E300)
#define NVIC_IABR1	((volatile unsigned int *) 0xE000E304)
#define NVIC_IABR2	((volatile unsigned int *) 0xE000E308)
#define NVIC_IABR3	((volatile unsigned int *) 0xE000E30C)
#define NVIC_IABR4	((volatile unsigned int *) 0xE000E310)
#define NVIC_IABR5	((volatile unsigned int *) 0xE000E314)
#define NVIC_IABR6	((volatile unsigned int *) 0xE000E318)
#define NVIC_IABR7	((volatile unsigned int *) 0xE000E31C)


/* GPIO Registers */
#define GPIOA_BASE_ADDR	0x40020000
#define GPIOB_BASE_ADDR	0x40020400
#define GPIOC_BASE_ADDR	0x40020800
#define GPIOD_BASE_ADDR	0x40020C00
#define GPIOE_BASE_ADDR	0x40021000
#define GPIOF_BASE_ADDR	0x40021400
#define GPIOG_BASE_ADDR	0x40021800
#define GPIOH_BASE_ADDR	0x40021C00
#define GPIOI_BASE_ADDR	0x40022000
#define GPIOJ_BASE_ADDR	0x40022400
#define GPIOK_BASE_ADDR	0x40022800
#define GPIO_INPUT	0x00000000 /* Input Floating Mode */
#define GPIO_INPUT_PU	0x00000010 /* Input Pull Up */
#define GPIO_INPUT_PD	0x00000020 /* Input Pull Down */
#define GPIO_OUTPUT_PP	0x00000001 /* Output Push Pull Mode */
#define GPIO_OUTPUT_OD	0x00000011 /* Output Open Drain Mode */
#define GPIO_AF_PP	0x00000002 /* Alternate Function Push Pull Mode */
#define GPIO_AF_OD	0x00000012 /* Alternate Function Open Drain Mode */
#define GPIO_ANALOG	0x00000003 /* Analog Mode */

#define GPIO_IT_RISING	0x00001100 /* Ext Int with Rising edge trigger detection */
#define GPIO_IT_FALLING	0x00002100 /* Ext Int Falling edge trigger detection */
#define GPIO_IT_RISING_FALLING0x00003100 /* Ext Int Rising/Falling edge trigger detection */
#define GPIO_EVT_RISING	0x00001200 /* Ext Event Rising edge trigger detection */
#define GPIO_EVT_FALLING0x00002200 /* Ext Event Falling edge trigger detection */
#define GPIO_EVT_RISING_FALLING0x00003200 /* Ext Event Rising/Falling edge trigger detection */
#define GPIO_SWT_INT	0x00003300 /* Sotfware Interrupt */


#define PIN_0		0
#define PIN_1		1
#define PIN_2		2
#define PIN_3		3
#define PIN_4		4
#define PIN_5		5
#define PIN_6		6
#define PIN_7		7
#define PIN_8		8
#define PIN_9		9
#define PIN_10		10
#define PIN_11		11
#define PIN_12		12
#define PIN_13		13
#define PIN_14		14
#define PIN_15		15

typedef struct
{
	unsigned int IMR;
	unsigned int EMR;
	unsigned int RTSR;
	unsigned int FTSR;
	unsigned int SWIER;
	unsigned int PR;
} EXTIRegDef;

#endif

