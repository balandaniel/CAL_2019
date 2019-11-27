#include "xc.h"
#include "rte.h"
#include "asw_move.h"

void Asw_vMoveInit()
{
    RTE_vDcMotInit();
    GPIO_u8SetPortPin(PORT_A, 9, DIGITAL, OUTPUT);
}

void Asw_vMove()
{
    RTE_vSetDcMotDir(0);
    //RTE_vSetDcMotSpeed(10);
    RTE_SetServoAngle(130);
    /*T_F16 counter;
    for (counter = 60; counter <= 130; counter++)
    {
        RTE_SetServoAngle(counter);
    }*/
}