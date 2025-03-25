#include "led.h"

int main(void)
{
    // Initialize the LED pins
    LED_Init();

    while (1)
    {
        // Toggle all LEDs
        LED_ToggleAll();

        // Delay for visibility (simple loop-based delay)
        for (volatile int i = 0; i < 1000000; i++); // Adjust delay as needed
    }
}