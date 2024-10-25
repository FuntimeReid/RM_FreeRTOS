//
// Created by 73932 on 2024/10/26.
//

#include "Task_LED.h"
#include "cmsis_os2.h"
#include "main.h"

//红色LED以周期500ms闪烁
void LED_Red()
{
    for(;;)
    {
        HAL_GPIO_TogglePin(GPIOH, LED_R_Pin);
        osDelay(250);
    }
}

//绿色LED以周期1000ms闪烁
void LED_Green()
{
    for(;;)
    {
        HAL_GPIO_TogglePin(GPIOH, LED_G_Pin);
        osDelay(500);
    }
}