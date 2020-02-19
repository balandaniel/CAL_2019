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
    RTE_vSetDcMotSpeed(20);
    //RTE_vSetServoAngle(130);
    //RTE_f16GetBatteryValue();
}

void Asw_vMoveLineFollower()
{
    RTE_vSetDcMotDir(0);
    RTE_vSetServoAngle(100);
    T_U16 lf = RTE_u16GetLineFollower();
    if (lf == 63) //cei 6 pini sunt 111111(negru)
    {
        RTE_vSetDcMotSpeed(0);
    }
    else
    {
        RTE_vSetDcMotSpeed(40);
    }
    
    /*if (lf == 63)
    {
        RTE_vSetDcMotSpeed(0);
    }
    else if (lf <= 62) //11110
    {
        RTE_vSetDcMotSpeed(20);
        RTE_vSetServoAngle(85);
    }
    else if (lf >= 31) //011111
    {
        RTE_vSetDcMotSpeed(20);
        RTE_vSetServoAngle(95);
    }*/
}