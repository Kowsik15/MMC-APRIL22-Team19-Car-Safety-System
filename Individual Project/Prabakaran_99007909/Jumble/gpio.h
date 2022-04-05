#ifndef GPIO_H
#define GPIO_H

#include "stm324xx.h"
#define GPIOA		((GPIORegDef *) GPIOA_BASE_ADDR)
#define GPIOD		((GPIORegDef *) GPIOD_BASE_ADDR)
#define GPIO_SPEED_LOW	0x00000000 /* IO works at 2 MHz, please refer to the product datasheet */
#define GPIO_SPEED_MED	0x00000001 /* range 12,5 MHz to 50 MHz, please refer to the product datasheet */
#define GPIO_SPEED_HIGH	0x00000002 /* range 25 MHz to 100 MHz, please refer to the product datasheet  */
#define GPIO_SPEED_VERY_HIGH 0x00000003 /* range 50 MHz to 200 MHz, please refer to the product datasheet  */
#define NO_PR_BITS_IMPLEMENTED4 

typedef enum
{
	e_gpi,
	e_gpo,
	e_alt_func,
	e_analog,
	/* Please refer the stm32f4xx.h for more info on mode */
	e_exti_int = 1,
	e_exti_event,
	e_exti_swi
} Modes;

#define LEVEL	0
#define STATE	1

#define ENABLE	1
#define DISABLE	0

/* Configuration Functions */
typedef struct
{
	unsigned int OSPEEDR;
	unsigned int PUPDR;
	unsigned int IDR;
	unsigned int ODR;
	unsigned int MODER;
	unsigned int OTYPER;
	unsigned int BSRR;
	unsigned int LCKR;
	unsigned int AFRL;
	unsigned int AFRH;
} GPIORegDef; 

void config_gpiox(GPIORegDef *gpiox, int pin, int mode, int speed);

/* Input Functions */
int gpiox_read_pin(GPIORegDef *gpiox, int pin, int mode);

/* Interrupt Related Functions */
void config_gpio_irq_priority(unsigned char irq_number, unsigned char irq_priority);
void config_gpio_interrupt(unsigned char irq_number, unsigned char state);

#endif





