#include "stm32f4xx.h" // Include the STM32F4xx library

int main(void) {
    // Enable the clock for GPIOA
    RCC->AHB1ENR |= RCC_AHB1ENR_GPIOAEN;

    // Configure GPIOA pin 5 as output
    GPIOA->MODER |= GPIO_MODER_MODE0_0;
		GPIOA->MODER |= GPIO_MODER_MODE1_0;
		GPIOA->MODER |= GPIO_MODER_MODE2_0;
		GPIOA->MODER |= GPIO_MODER_MODE3_0;
		GPIOA->MODER |= GPIO_MODER_MODE4_0;
		GPIOA->MODER |= GPIO_MODER_MODE5_0;
		GPIOA->MODER |= GPIO_MODER_MODE6_0;

    while (1) {

			
///////////////////////////////////////////////////////////////////////////////	
							// For 0
        GPIOA->ODR |= GPIO_ODR_OD0;
				GPIOA->ODR |= GPIO_ODR_OD1;
				GPIOA->ODR |= GPIO_ODR_OD2;
				GPIOA->ODR |= GPIO_ODR_OD3;
				GPIOA->ODR |= GPIO_ODR_OD4;
				GPIOA->ODR |= GPIO_ODR_OD5;
				//GPIOA->ODR |= GPIO_ODR_OD6;

        // Delay
        for (int i = 1; i <= 500000; i++) {}
				

        GPIOA->ODR &= ~GPIO_ODR_OD0;
				GPIOA->ODR &= ~GPIO_ODR_OD1;
				GPIOA->ODR &= ~GPIO_ODR_OD2;
				GPIOA->ODR &= ~GPIO_ODR_OD3;
				GPIOA->ODR &= ~GPIO_ODR_OD4;
				GPIOA->ODR &= ~GPIO_ODR_OD5;
				GPIOA->ODR &= ~GPIO_ODR_OD6;

        // Delay
        for (int i = 1; i <= 500000; i++) {}
///////////////////////////////////////////////////////////////////////////////				
							// For 1
        //GPIOA->ODR |= GPIO_ODR_OD0;
				GPIOA->ODR |= GPIO_ODR_OD1;
				GPIOA->ODR |= GPIO_ODR_OD2;
				//GPIOA->ODR |= GPIO_ODR_OD3;
				//GPIOA->ODR |= GPIO_ODR_OD4;
				//GPIOA->ODR |= GPIO_ODR_OD5;
				//GPIOA->ODR |= GPIO_ODR_OD6;

        // Delay
        for (int i = 1; i <= 500000; i++) {}
				

        GPIOA->ODR &= ~GPIO_ODR_OD0;
				GPIOA->ODR &= ~GPIO_ODR_OD1;
				GPIOA->ODR &= ~GPIO_ODR_OD2;
				GPIOA->ODR &= ~GPIO_ODR_OD3;
				GPIOA->ODR &= ~GPIO_ODR_OD4;
				GPIOA->ODR &= ~GPIO_ODR_OD5;
				GPIOA->ODR &= ~GPIO_ODR_OD6;

        // Delay
        for (int i = 1; i <= 500000; i++) {}
///////////////////////////////////////////////////////////////////////////////	
							// For 2
        GPIOA->ODR |= GPIO_ODR_OD0;
				GPIOA->ODR |= GPIO_ODR_OD1;
				//GPIOA->ODR |= GPIO_ODR_OD2;
				GPIOA->ODR |= GPIO_ODR_OD3;
				GPIOA->ODR |= GPIO_ODR_OD4;
				//GPIOA->ODR |= GPIO_ODR_OD5;
				GPIOA->ODR |= GPIO_ODR_OD6;

        // Delay
        for (int i = 1; i <= 500000; i++) {}
				

        GPIOA->ODR &= ~GPIO_ODR_OD0;
				GPIOA->ODR &= ~GPIO_ODR_OD1;
				GPIOA->ODR &= ~GPIO_ODR_OD2;
				GPIOA->ODR &= ~GPIO_ODR_OD3;
				GPIOA->ODR &= ~GPIO_ODR_OD4;
				GPIOA->ODR &= ~GPIO_ODR_OD5;
				GPIOA->ODR &= ~GPIO_ODR_OD6;

        // Delay
        for (int i = 1; i <= 500000; i++) {}
///////////////////////////////////////////////////////////////////////////////	
							// For 3
        GPIOA->ODR |= GPIO_ODR_OD0;
				GPIOA->ODR |= GPIO_ODR_OD1;
				GPIOA->ODR |= GPIO_ODR_OD2;
				GPIOA->ODR |= GPIO_ODR_OD3;
				//GPIOA->ODR |= GPIO_ODR_OD4;
				//GPIOA->ODR |= GPIO_ODR_OD5;
				GPIOA->ODR |= GPIO_ODR_OD6;

        // Delay
        for (int i = 1; i <= 500000; i++) {}
				

        GPIOA->ODR &= ~GPIO_ODR_OD0;
				GPIOA->ODR &= ~GPIO_ODR_OD1;
				GPIOA->ODR &= ~GPIO_ODR_OD2;
				GPIOA->ODR &= ~GPIO_ODR_OD3;
				GPIOA->ODR &= ~GPIO_ODR_OD4;
				GPIOA->ODR &= ~GPIO_ODR_OD5;
				GPIOA->ODR &= ~GPIO_ODR_OD6;

        // Delay
        for (int i = 1; i <= 500000; i++) {}
///////////////////////////////////////////////////////////////////////////////
							// For 4
        //GPIOA->ODR |= GPIO_ODR_OD0;
				GPIOA->ODR |= GPIO_ODR_OD1;
				GPIOA->ODR |= GPIO_ODR_OD2;
				//GPIOA->ODR |= GPIO_ODR_OD3;
				//GPIOA->ODR |= GPIO_ODR_OD4;
				GPIOA->ODR |= GPIO_ODR_OD5;
				GPIOA->ODR |= GPIO_ODR_OD6;

        // Delay
        for (int i = 1; i <= 500000; i++) {}
				

        GPIOA->ODR &= ~GPIO_ODR_OD0;
				GPIOA->ODR &= ~GPIO_ODR_OD1;
				GPIOA->ODR &= ~GPIO_ODR_OD2;
				GPIOA->ODR &= ~GPIO_ODR_OD3;
				GPIOA->ODR &= ~GPIO_ODR_OD4;
				GPIOA->ODR &= ~GPIO_ODR_OD5;
				GPIOA->ODR &= ~GPIO_ODR_OD6;

        // Delay
        for (int i = 1; i <= 500000; i++) {}
///////////////////////////////////////////////////////////////////////////////
							// For 5
        GPIOA->ODR |= GPIO_ODR_OD0;
				//GPIOA->ODR |= GPIO_ODR_OD1;
				GPIOA->ODR |= GPIO_ODR_OD2;
				GPIOA->ODR |= GPIO_ODR_OD3;
				//GPIOA->ODR |= GPIO_ODR_OD4;
				GPIOA->ODR |= GPIO_ODR_OD5;
				GPIOA->ODR |= GPIO_ODR_OD6;

        // Delay
        for (int i = 1; i <= 500000; i++) {}
				

        GPIOA->ODR &= ~GPIO_ODR_OD0;
				GPIOA->ODR &= ~GPIO_ODR_OD1;
				GPIOA->ODR &= ~GPIO_ODR_OD2;
				GPIOA->ODR &= ~GPIO_ODR_OD3;
				GPIOA->ODR &= ~GPIO_ODR_OD4;
				GPIOA->ODR &= ~GPIO_ODR_OD5;
				GPIOA->ODR &= ~GPIO_ODR_OD6;

        // Delay
        for (int i = 1; i <= 500000; i++) {}
///////////////////////////////////////////////////////////////////////////////
							// For 6
        GPIOA->ODR |= GPIO_ODR_OD0;
				//GPIOA->ODR |= GPIO_ODR_OD1;
				GPIOA->ODR |= GPIO_ODR_OD2;
				GPIOA->ODR |= GPIO_ODR_OD3;
				GPIOA->ODR |= GPIO_ODR_OD4;
				GPIOA->ODR |= GPIO_ODR_OD5;
				GPIOA->ODR |= GPIO_ODR_OD6;

        // Delay
        for (int i = 1; i <= 500000; i++) {}
				

        GPIOA->ODR &= ~GPIO_ODR_OD0;
				GPIOA->ODR &= ~GPIO_ODR_OD1;
				GPIOA->ODR &= ~GPIO_ODR_OD2;
				GPIOA->ODR &= ~GPIO_ODR_OD3;
				GPIOA->ODR &= ~GPIO_ODR_OD4;
				GPIOA->ODR &= ~GPIO_ODR_OD5;
				GPIOA->ODR &= ~GPIO_ODR_OD6;

        // Delay
        for (int i = 1; i <= 500000; i++) {}
///////////////////////////////////////////////////////////////////////////////
							// For 7
        GPIOA->ODR |= GPIO_ODR_OD0;
				GPIOA->ODR |= GPIO_ODR_OD1;
				GPIOA->ODR |= GPIO_ODR_OD2;
				//GPIOA->ODR |= GPIO_ODR_OD3;
				//GPIOA->ODR |= GPIO_ODR_OD4;
				//GPIOA->ODR |= GPIO_ODR_OD5;
				//GPIOA->ODR |= GPIO_ODR_OD6;

        // Delay
        for (int i = 1; i <= 500000; i++) {}
				

        GPIOA->ODR &= ~GPIO_ODR_OD0;
				GPIOA->ODR &= ~GPIO_ODR_OD1;
				GPIOA->ODR &= ~GPIO_ODR_OD2;
				GPIOA->ODR &= ~GPIO_ODR_OD3;
				GPIOA->ODR &= ~GPIO_ODR_OD4;
				GPIOA->ODR &= ~GPIO_ODR_OD5;
				GPIOA->ODR &= ~GPIO_ODR_OD6;

        // Delay
        for (int i = 1; i <= 500000; i++) {}
///////////////////////////////////////////////////////////////////////////////
							// For 8
        GPIOA->ODR |= GPIO_ODR_OD0;
				GPIOA->ODR |= GPIO_ODR_OD1;
				GPIOA->ODR |= GPIO_ODR_OD2;
				GPIOA->ODR |= GPIO_ODR_OD3;
				GPIOA->ODR |= GPIO_ODR_OD4;
				GPIOA->ODR |= GPIO_ODR_OD5;
				GPIOA->ODR |= GPIO_ODR_OD6;

        // Delay
        for (int i = 1; i <= 500000; i++) {}
				

        GPIOA->ODR &= ~GPIO_ODR_OD0;
				GPIOA->ODR &= ~GPIO_ODR_OD1;
				GPIOA->ODR &= ~GPIO_ODR_OD2;
				GPIOA->ODR &= ~GPIO_ODR_OD3;
				GPIOA->ODR &= ~GPIO_ODR_OD4;
				GPIOA->ODR &= ~GPIO_ODR_OD5;
				GPIOA->ODR &= ~GPIO_ODR_OD6;

        // Delay
        for (int i = 1; i <= 500000; i++) {}
///////////////////////////////////////////////////////////////////////////////
							// For 9
        GPIOA->ODR |= GPIO_ODR_OD0;
				GPIOA->ODR |= GPIO_ODR_OD1;
				GPIOA->ODR |= GPIO_ODR_OD2;
				GPIOA->ODR |= GPIO_ODR_OD3;
				//GPIOA->ODR |= GPIO_ODR_OD4;
				GPIOA->ODR |= GPIO_ODR_OD5;
				GPIOA->ODR |= GPIO_ODR_OD6;

        // Delay
        for (int i = 1; i <= 500000; i++) {}
				

        GPIOA->ODR &= ~GPIO_ODR_OD0;
				GPIOA->ODR &= ~GPIO_ODR_OD1;
				GPIOA->ODR &= ~GPIO_ODR_OD2;
				GPIOA->ODR &= ~GPIO_ODR_OD3;
				GPIOA->ODR &= ~GPIO_ODR_OD4;
				GPIOA->ODR &= ~GPIO_ODR_OD5;
				GPIOA->ODR &= ~GPIO_ODR_OD6;

        // Delay
        for (int i = 1; i <= 500000; i++) {}
///////////////////////////////////////////////////////////////////////////////
					
    }
}

