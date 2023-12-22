#include "stm32f4xx.h"

//_____________________________________________________________________________________________
void delay(int count) {
    for (int i = 1; i <= count; i++) {}
}
//_____________________________________________________________________________________________


//_____________________________________________________________________________________________
void displayDigit(int digit) {
    // Define a lookup table for segment values (for common cathode display)
	
const uint8_t segmentValues[] = {0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F, 0x6F};

    // Set corresponding GPIO pins based on the segment value
    GPIOA->ODR |= (segmentValues[digit] << GPIO_ODR_OD0_Pos);

    // Delay
    delay(500000);

    // Clear all GPIO pins
    GPIOA->ODR &= ~(0x7F << GPIO_ODR_OD0_Pos);

    // Delay
    delay(500000);
}
//_____________________________________________________________________________________________



int main(void) {
    // Enable the clock for GPIOA
    RCC->AHB1ENR |= RCC_AHB1ENR_GPIOAEN;

    // Configure GPIOA pins as output
    GPIOA->MODER |= GPIO_MODER_MODE0_0 | GPIO_MODER_MODE1_0 | GPIO_MODER_MODE2_0 |
                    GPIO_MODER_MODE3_0 | GPIO_MODER_MODE4_0 | GPIO_MODER_MODE5_0 |
                    GPIO_MODER_MODE6_0;

    while (1) {
        // Display digits 0 to 9
        for (int digit = 0; digit <= 9; digit++) {
            displayDigit(digit);
        }
    }
}
