#include "led.h"


// the below variables for only elf file analysis
const int v1 = 10; //should be in .rodata section
const int v2 = 20;

int x1 = 13; //should be in .data section
int x2 = 53;

int y1; //should be in .bss section
int y2;


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