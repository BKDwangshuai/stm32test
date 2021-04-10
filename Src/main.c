#include "main.h"

int main(void) {
	SysTick_Init(72);
	LED_Init();

	while (1) {
		GPIO_ResetBits(LED1_PORT, LED1_PIN);
		GPIO_SetBits(LED2_PORT, LED2_PIN);
		delay_ms(1000);
		GPIO_SetBits(LED1_PORT, LED1_PIN);
		GPIO_ResetBits(LED2_PORT, LED2_PIN);
		delay_ms(1000);
	}
}
