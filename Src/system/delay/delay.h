/*
 * delay.h
 *
 *  Created on: 2020年10月25日
 *      Author: mito
 */

#ifndef SYSTEM_DELAY_DELAY_H_
#define SYSTEM_DELAY_DELAY_H_

#include <stm32f10x.h>
#include <misc.h>

void SysTick_Init(u8 SYSCLK);
void delay_ms(u16 nms);
void delay_us(u32 nus);

#endif /* SYSTEM_DELAY_DELAY_H_ */
