#ifndef STM32F4XX_H
#define STM32F4XX_H

#include <stdint.h>

// Base addresses for peripherals
#define RCC_BASE    0x40023800
#define GPIOA_BASE  0x40020000

// Register definitions
typedef struct
{
    volatile uint32_t MODER;    // GPIO port mode register
    volatile uint32_t OTYPER;   // GPIO port output type register
    volatile uint32_t OSPEEDR;  // GPIO port output speed register
    volatile uint32_t PUPDR;    // GPIO port pull-up/pull-down register
    volatile uint32_t IDR;      // GPIO port input data register
    volatile uint32_t ODR;      // GPIO port output data register
    volatile uint32_t BSRR;     // GPIO port bit set/reset register
    volatile uint32_t LCKR;     // GPIO port configuration lock register
    volatile uint32_t AFR[2];   // GPIO alternate function registers
} GPIO_TypeDef;

typedef struct
{
    volatile uint32_t CR;       // Clock control register
    volatile uint32_t PLLCFGR;  // PLL configuration register
    volatile uint32_t CFGR;     // Clock configuration register
    volatile uint32_t CIR;      // Clock interrupt register
    volatile uint32_t AHB1RSTR; // AHB1 peripheral reset register
    volatile uint32_t AHB2RSTR; // AHB2 peripheral reset register
    volatile uint32_t AHB3RSTR; // AHB3 peripheral reset register
    volatile uint32_t APB1RSTR; // APB1 peripheral reset register
    volatile uint32_t APB2RSTR; // APB2 peripheral reset register
    volatile uint32_t AHB1ENR;  // AHB1 peripheral clock enable register
    volatile uint32_t AHB2ENR;  // AHB2 peripheral clock enable register
    volatile uint32_t AHB3ENR;  // AHB3 peripheral clock enable register
    volatile uint32_t APB1ENR;  // APB1 peripheral clock enable register
    volatile uint32_t APB2ENR;  // APB2 peripheral clock enable register
} RCC_TypeDef;

// Peripheral declarations
#define RCC     ((RCC_TypeDef *)RCC_BASE)
#define GPIOA   ((GPIO_TypeDef *)GPIOA_BASE)

// Bit definitions
#define RCC_AHB1ENR_GPIOAEN  (1 << 0) // GPIOA clock enable bit

#endif // STM32F4XX_H