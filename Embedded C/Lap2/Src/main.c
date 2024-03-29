/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2022 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 */

/*
 * main.c
 *
 *  Created on: Oct 10, 2022
 *      Author: user
 */
#include "stdint.h"
typedef volatile unsigned int vint32_t ;

#define       SET_BIT(reg,bit_number)     reg|=(1<<bit_number)
#define       CLR_BIT(reg,bit_number)     reg&=(~(1<<bit_number))
#define       TOGGLE_BIT(reg,bit_number)  reg^=(1<<bit_number)
#define       GET_BIT(reg,bit_number)     (reg>>bit_number)&1

#define RCC_BASE       0x40021000
#define GPIOA_BASE     0x40010800
#define RCC_APB2ENR    *(volatile uint32_t *)(RCC_BASE +  0x18)
#define GPIOA_CRH      *(volatile uint32_t *)(GPIOA_BASE +  0x04)
#define GPIOA_ODR      *(volatile uint32_t *)(GPIOA_BASE +  0x0C)
#define RCC_IOPAEN (1<<2)
#define GPIOA13    (1UL<<13)

typedef union{
	vint32_t all_fields;
	struct {
		vint32_t reserved:13;
		vint32_t p_13:1;
	}Pin;
}R_ODR_t;

volatile R_ODR_t* R_ODR = (volatile R_ODR_t *)(GPIOA_BASE + 0x0c) ;

int main()
{
	RCC_APB2ENR |= RCC_IOPAEN;
	GPIOA_CRH &= 0xFF0FFFFF;
	GPIOA_CRH &= 0x00200000;
	while(1)
	{
		R_ODR->Pin.p_13 = 1;
		for(int i=0;i<5000;i++);
		R_ODR->Pin.p_13 = 0;
		for(int i=0;i<5000;i++);
	}

	return 0;
}
