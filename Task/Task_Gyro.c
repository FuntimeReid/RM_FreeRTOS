//
// Created by 73932 on 2024/10/26.
//

#include "Task_Gyro.h"
#include "cmsis_os2.h"
#include "ins_task.h"

//每10ms解算一次陀螺仪数据
void GYRO_Get()
{
    for(;;)
    {
        INS_Task();
        osDelay(10);
    }
}