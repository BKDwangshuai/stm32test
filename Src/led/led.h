/*
 * main.h
 *
 *  Created on: 2020年10月25日
 *      Author: mito
 */

#ifndef LED_H_
#define LED_H_

#include <stm32f10x.h>
#include <stm32f10x_gpio.h>
#include <stm32f10x_rcc.h>

#define LED1_PORT 			GPIOB   
#define LED1_PIN 			GPIO_Pin_5
#define LED1_PORT_RCC		RCC_APB2Periph_GPIOB

#define LED2_PORT 			GPIOE   
#define LED2_PIN 			GPIO_Pin_5
#define LED2_PORT_RCC		RCC_APB2Periph_GPIOE	

void LED_Init(void);

#endif
