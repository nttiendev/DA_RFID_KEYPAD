/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define led_Pin GPIO_PIN_13
#define led_GPIO_Port GPIOC
#define r1_Pin GPIO_PIN_1
#define r1_GPIO_Port GPIOA
#define r2_Pin GPIO_PIN_2
#define r2_GPIO_Port GPIOA
#define r3_Pin GPIO_PIN_3
#define r3_GPIO_Port GPIOA
#define SDA_Pin GPIO_PIN_4
#define SDA_GPIO_Port GPIOA
#define c1_Pin GPIO_PIN_0
#define c1_GPIO_Port GPIOB
#define c2_Pin GPIO_PIN_1
#define c2_GPIO_Port GPIOB
#define c3_Pin GPIO_PIN_10
#define c3_GPIO_Port GPIOB
#define c4_Pin GPIO_PIN_11
#define c4_GPIO_Port GPIOB
#define loa_Pin GPIO_PIN_12
#define loa_GPIO_Port GPIOB
#define LCD_RS_Pin GPIO_PIN_14
#define LCD_RS_GPIO_Port GPIOB
#define LCD_EN_Pin GPIO_PIN_15
#define LCD_EN_GPIO_Port GPIOB
#define LCD_D4_Pin GPIO_PIN_8
#define LCD_D4_GPIO_Port GPIOA
#define LCD_D5_Pin GPIO_PIN_9
#define LCD_D5_GPIO_Port GPIOA
#define LCD_D6_Pin GPIO_PIN_10
#define LCD_D6_GPIO_Port GPIOA
#define LCD_D7_Pin GPIO_PIN_11
#define LCD_D7_GPIO_Port GPIOA
#define r4_Pin GPIO_PIN_12
#define r4_GPIO_Port GPIOA
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
