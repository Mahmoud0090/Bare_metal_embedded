#include "led.h"
#include "stm32f4xx.h"
// Function to initialize GPIO pins for LEDs
void LED_Init(void)
{
    // Enable the GPIOA clock (PA0 to PA3 are on GPIOA)
    RCC->AHB1ENR |= RCC_AHB1ENR_GPIOAEN;

    // Configure PA0 to PA3 as output pins
    GPIOA->MODER &= ~(0xFF << 0); // Clear mode bits for PA0-PA3
    GPIOA->MODER |= (0x55 << 0);  // Set PA0-PA3 to output mode (01 for each pin)

    // Set output type to push-pull (default, so no need to change OTYPER)
    // Set speed to low (default, so no need to change OSPEEDR)
    // No pull-up/pull-down (default, so no need to change PUPDR)
}

// Function to toggle all LEDs
void LED_ToggleAll(void)
{
    // Toggle PA0 to PA3 using the GPIOA ODR register
    GPIOA->ODR ^= (0xF << 0); // XOR with 0xF to toggle PA0-PA3
}