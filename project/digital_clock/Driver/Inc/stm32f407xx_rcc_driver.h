/*
 * stm32f407xx_rcc_driver.h
 *
 *  Created on: Aug 22, 2025
 *      Author: Sandeep J
 *  @brief This file contains definitions and functions prototypes for the STM32F407xx rcc driver.
 */

#ifndef STM32F407XX_RCC_DRIVER_H
#define STM32F407XX_RCC_DRIVER_H

#include "stm32f407xx.h"

/*******************************************************************************
 * APIs supported by the SPI driver
 * (See function definitions for more information)
 ******************************************************************************/

uint32_t RCC_GetPCLK1Value(void);
uint32_t RCC_GetPCLK2Value(void);
uint32_t RCC_GetPLLOutputClk(void);


#endif /* STM32F407XX_RCC_DRIVER_H */
