/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * This notice applies to any and all portions of this file
  * that are not between comment pairs USER CODE BEGIN and
  * USER CODE END. Other portions of this file, whether 
  * inserted by the user or by software development tools
  * are owned by their respective copyright owners.
  *
  * Copyright (c) 2018 STMicroelectronics International N.V. 
  * All rights reserved.
  *
  * Redistribution and use in source and binary forms, with or without 
  * modification, are permitted, provided that the following conditions are met:
  *
  * 1. Redistribution of source code must retain the above copyright notice, 
  *    this list of conditions and the following disclaimer.
  * 2. Redistributions in binary form must reproduce the above copyright notice,
  *    this list of conditions and the following disclaimer in the documentation
  *    and/or other materials provided with the distribution.
  * 3. Neither the name of STMicroelectronics nor the names of other 
  *    contributors to this software may be used to endorse or promote products 
  *    derived from this software without specific written permission.
  * 4. This software, including modifications and/or derivative works of this 
  *    software, must execute solely and exclusively on microcontroller or
  *    microprocessor devices manufactured by or for STMicroelectronics.
  * 5. Redistribution and use of this software other than as permitted under 
  *    this license is void and will automatically terminate your rights under 
  *    this license. 
  *
  * THIS SOFTWARE IS PROVIDED BY STMICROELECTRONICS AND CONTRIBUTORS "AS IS" 
  * AND ANY EXPRESS, IMPLIED OR STATUTORY WARRANTIES, INCLUDING, BUT NOT 
  * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR A 
  * PARTICULAR PURPOSE AND NON-INFRINGEMENT OF THIRD PARTY INTELLECTUAL PROPERTY
  * RIGHTS ARE DISCLAIMED TO THE FULLEST EXTENT PERMITTED BY LAW. IN NO EVENT 
  * SHALL STMICROELECTRONICS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
  * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
  * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, 
  * OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF 
  * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING 
  * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
  * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H__
#define __MAIN_H__

/* Includes ------------------------------------------------------------------*/

/* USER CODE BEGIN Includes */
#include "common.h"
/* USER CODE END Includes */

/* Private define ------------------------------------------------------------*/

#define RTC_INTR_Pin GPIO_PIN_13
#define RTC_INTR_GPIO_Port GPIOC
#define DIN1_Pin GPIO_PIN_0
#define DIN1_GPIO_Port GPIOC
#define DIN2_Pin GPIO_PIN_1
#define DIN2_GPIO_Port GPIOC
#define BMP_CTRL_Pin GPIO_PIN_2
#define BMP_CTRL_GPIO_Port GPIOC
#define ADC_SPI_CSB_Pin GPIO_PIN_3
#define ADC_SPI_CSB_GPIO_Port GPIOC
#define ADC_RDY_Pin GPIO_PIN_0
#define ADC_RDY_GPIO_Port GPIOA
#define BAT_VOL_Pin GPIO_PIN_1
#define BAT_VOL_GPIO_Port GPIOA
#define A1_Pin GPIO_PIN_4
#define A1_GPIO_Port GPIOA
#define A2_Pin GPIO_PIN_5
#define A2_GPIO_Port GPIOA
#define A3_Pin GPIO_PIN_6
#define A3_GPIO_Port GPIOA
#define A4_Pin GPIO_PIN_7
#define A4_GPIO_Port GPIOA
#define RS485_REB_Pin GPIO_PIN_0
#define RS485_REB_GPIO_Port GPIOB
#define RS485_TE_Pin GPIO_PIN_1
#define RS485_TE_GPIO_Port GPIOB
#define GSM_EN_Pin GPIO_PIN_2
#define GSM_EN_GPIO_Port GPIOB
#define FLASH_SPI_CSB_Pin GPIO_PIN_12
#define FLASH_SPI_CSB_GPIO_Port GPIOB
#define K1_Pin GPIO_PIN_6
#define K1_GPIO_Port GPIOC
#define K2_Pin GPIO_PIN_7
#define K2_GPIO_Port GPIOC
#define K3_Pin GPIO_PIN_8
#define K3_GPIO_Port GPIOC
#define K4_Pin GPIO_PIN_9
#define K4_GPIO_Port GPIOC
#define SE1_Pin GPIO_PIN_8
#define SE1_GPIO_Port GPIOA
#define SE2_Pin GPIO_PIN_9
#define SE2_GPIO_Port GPIOA
#define SE3_Pin GPIO_PIN_10
#define SE3_GPIO_Port GPIOA
#define SE4_Pin GPIO_PIN_11
#define SE4_GPIO_Port GPIOA
#define LCD_ON_Pin GPIO_PIN_12
#define LCD_ON_GPIO_Port GPIOA
#define LCD_RS_Pin GPIO_PIN_15
#define LCD_RS_GPIO_Port GPIOA
#define LCD_EN_Pin GPIO_PIN_3
#define LCD_EN_GPIO_Port GPIOB
#define LCD_D4_Pin GPIO_PIN_4
#define LCD_D4_GPIO_Port GPIOB
#define LCD_D5_Pin GPIO_PIN_5
#define LCD_D5_GPIO_Port GPIOB
#define LCD_D6_Pin GPIO_PIN_6
#define LCD_D6_GPIO_Port GPIOB
#define LCD_D7_Pin GPIO_PIN_7
#define LCD_D7_GPIO_Port GPIOB
#define RTC_SCL_Pin GPIO_PIN_8
#define RTC_SCL_GPIO_Port GPIOB
#define RTC_SDA_Pin GPIO_PIN_9
#define RTC_SDA_GPIO_Port GPIOB

/* ########################## Assert Selection ############################## */
/**
  * @brief Uncomment the line below to expanse the "assert_param" macro in the 
  *        HAL drivers code
  */
/* #define USE_FULL_ASSERT    1U */

/* USER CODE BEGIN Private defines */



/* USER CODE END Private defines */

#ifdef __cplusplus
 extern "C" {
#endif
void _Error_Handler(char *, int);

#define Error_Handler() _Error_Handler(__FILE__, __LINE__)
#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H__ */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
