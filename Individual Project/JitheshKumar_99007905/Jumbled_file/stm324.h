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
