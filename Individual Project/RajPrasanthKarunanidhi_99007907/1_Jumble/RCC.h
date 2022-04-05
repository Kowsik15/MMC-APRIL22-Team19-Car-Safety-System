

#ifndef RCC_H
#define RCC_H

void config_rcc(void *ptr);

#endif
#include <stdint.h>

#define SRAM_START  0x20000000U
#define SRAM_SIZE   (128U * 1024U) // 128KB
#define SRAM_END    ((SRAM_START) + (SRAM_SIZE))

#define STACK_START   SRAM_END


// Prototype of main

MEMORY
{
	FLASH(rx):ORIGIN =0x08000000,LENGTH =1024K
	SRAM(rwx):ORIGIN =0x20000000,LENGTH =128K
}


int main(void);



#define RCC_BASE_ADDR	0x40023800

typedef struct
{
	unsigned int CR;
	unsigned int PLLCFGR;
	unsigned int CFGR;
	unsigned int CIR;
	unsigned int AHB1RSTR;
	unsigned int AHB2RSTR;
	unsigned int AHB3RSTR;
	unsigned int : 32;
	unsigned int APB1RSTR;
	unsigned int APB2RSTR;
	unsigned int : 32;
	unsigned int : 32;
	unsigned int AHB1ENR;
	unsigned int AHB2ENR;
	unsigned int AHB3ENR;
	unsigned int : 32;
	unsigned int APB1ENR;
	unsigned int APB2ENR;
	unsigned int : 32;
	unsigned int : 32;
	unsigned int AHB1LPENR;
	unsigned int AHB2LPENR;
	unsigned int AHB3LPENR;
	unsigned int : 32;
	unsigned int APB1LPENR;
	unsigned int APB2LPENR;
	unsigned int : 32;
	unsigned int : 32;
	unsigned int BDCR;
	unsigned int CSR;
	unsigned int : 32;
	unsigned int SSCGR;
	unsigned int PLLI2SCFGR;
} RCCRegDef;



#define GPIOA		((GPIORegDef *) GPIOA_BASE_ADDR)
#define GPIOD		((GPIORegDef *) GPIOD_BASE_ADDR)


#define RCC		((RCCRegDef *) RCC_BASE_ADDR)

#endif







/* RCC Registers */
#define RCC_BASE_ADDR	0x40023800

typedef struct
{
	unsigned int CR;
	unsigned int PLLCFGR;
	unsigned int CFGR;
	unsigned int CIR;
	unsigned int AHB1RSTR;
	unsigned int AHB2RSTR;
	unsigned int AHB3RSTR;
	unsigned int : 32;
	unsigned int APB1RSTR;
	unsigned int APB2RSTR;
	unsigned int : 32;
	unsigned int : 32;
	unsigned int AHB1ENR;
	unsigned int AHB2ENR;
	unsigned int AHB3ENR;
	unsigned int : 32;
	unsigned int APB1ENR;
	unsigned int APB2ENR;
	unsigned int : 32;
	unsigned int : 32;
	unsigned int AHB1LPENR;
	unsigned int AHB2LPENR;
	unsigned int AHB3LPENR;
	unsigned int : 32;
	unsigned int APB1LPENR;
	unsigned int APB2LPENR;
	unsigned int : 32;
	unsigned int : 32;
	unsigned int BDCR;
	unsigned int CSR;
	unsigned int : 32;
	unsigned int SSCGR;
	unsigned int PLLI2SCFGR;
} RCCRegDef;

}> SRAM AT> FLASH
