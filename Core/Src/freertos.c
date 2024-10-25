/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * File Name          : freertos.c
  * Description        : Code for freertos applications
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Includes ------------------------------------------------------------------*/
#include "FreeRTOS.h"
#include "task.h"
#include "main.h"
#include "cmsis_os.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
/* USER CODE BEGIN Variables */

/* USER CODE END Variables */
/* Definitions for LED_RED */
osThreadId_t LED_REDHandle;
const osThreadAttr_t LED_RED_attributes = {
  .name = "LED_RED",
  .stack_size = 128 * 4,
  .priority = (osPriority_t) osPriorityHigh,
};
/* Definitions for LED_GREEN */
osThreadId_t LED_GREENHandle;
const osThreadAttr_t LED_GREEN_attributes = {
  .name = "LED_GREEN",
  .stack_size = 128 * 4,
  .priority = (osPriority_t) osPriorityHigh,
};
/* Definitions for GYRO_GET */
osThreadId_t GYRO_GETHandle;
const osThreadAttr_t GYRO_GET_attributes = {
  .name = "GYRO_GET",
  .stack_size = 1024 * 4,
  .priority = (osPriority_t) osPriorityLow,
};

/* Private function prototypes -----------------------------------------------*/
/* USER CODE BEGIN FunctionPrototypes */

/* USER CODE END FunctionPrototypes */

void LED_Red(void *argument);
void LED_Green(void *argument);
void GYRO_Get(void *argument);

void MX_FREERTOS_Init(void); /* (MISRA C 2004 rule 8.1) */

/**
  * @brief  FreeRTOS initialization
  * @param  None
  * @retval None
  */
void MX_FREERTOS_Init(void) {
  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* USER CODE BEGIN RTOS_MUTEX */
  /* add mutexes, ... */
  /* USER CODE END RTOS_MUTEX */

  /* USER CODE BEGIN RTOS_SEMAPHORES */
  /* add semaphores, ... */
  /* USER CODE END RTOS_SEMAPHORES */

  /* USER CODE BEGIN RTOS_TIMERS */
  /* start timers, add new ones, ... */
  /* USER CODE END RTOS_TIMERS */

  /* USER CODE BEGIN RTOS_QUEUES */
  /* add queues, ... */
  /* USER CODE END RTOS_QUEUES */

  /* Create the thread(s) */
  /* creation of LED_RED */
  LED_REDHandle = osThreadNew(LED_Red, NULL, &LED_RED_attributes);

  /* creation of LED_GREEN */
  LED_GREENHandle = osThreadNew(LED_Green, NULL, &LED_GREEN_attributes);

  /* creation of GYRO_GET */
  GYRO_GETHandle = osThreadNew(GYRO_Get, NULL, &GYRO_GET_attributes);

  /* USER CODE BEGIN RTOS_THREADS */
  /* add threads, ... */
  /* USER CODE END RTOS_THREADS */

  /* USER CODE BEGIN RTOS_EVENTS */
  /* add events, ... */
  /* USER CODE END RTOS_EVENTS */

}

/* USER CODE BEGIN Header_LED_Red */
/**
  * @brief  Function implementing the LED_RED thread.
  * @param  argument: Not used
  * @retval None
  */
/* USER CODE END Header_LED_Red */
__weak void LED_Red(void *argument)
{
  /* USER CODE BEGIN LED_Red */
  /* Infinite loop */
  for(;;)
  {
    osDelay(1);
  }
  /* USER CODE END LED_Red */
}

/* USER CODE BEGIN Header_LED_Green */
/**
* @brief Function implementing the LED_GREEN thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_LED_Green */
__weak void LED_Green(void *argument)
{
  /* USER CODE BEGIN LED_Green */
  /* Infinite loop */
  for(;;)
  {
    osDelay(1);
  }
  /* USER CODE END LED_Green */
}

/* USER CODE BEGIN Header_GYRO_Get */
/**
* @brief Function implementing the GYRO_GET thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_GYRO_Get */
__weak void GYRO_Get(void *argument)
{
  /* USER CODE BEGIN GYRO_Get */
  /* Infinite loop */
  for(;;)
  {
    osDelay(1);
  }
  /* USER CODE END GYRO_Get */
}

/* Private application code --------------------------------------------------*/
/* USER CODE BEGIN Application */

/* USER CODE END Application */

