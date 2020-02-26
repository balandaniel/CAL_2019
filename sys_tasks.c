/* 
 * File:   sys_tasks.h
 * Author: Cristian T. A.
 *
 * Created on August 17, 2018, 1:26 PM
 */

#include "general.h"
#include "sys_tasks.h"

#include "mcal_init.h"
#include "asw_com.h"
#include "asw_move.h"
#include "mcal_interrupts.h"
#include "hal_interrupt.h"

T_U16 a = 0;

void TASK_Inits()
{
    MCAL_vInit();
    //GPIO_u8SetPortPin(PORT_A, 10, DIGITAL ,OUTPUT);
    Asw_vMoveInit();
}

void TASK_1ms()
{
    
}

void TASK_5ms()
{
   
}

void TASK_10ms()
{
    
}

void TASK_100ms()
{
    Hal_vCheckObstacle();
    //Hal_vSetDcMotSpeed(20);
    //Asw_vDoHandleLightSigBattery();
    //Asw_vMoveLineFollower();
    //Asw_vMove();
}

void TASK_500ms()
{ 

}

void TASK_1000ms()
{
    //Asw_vMove();
}