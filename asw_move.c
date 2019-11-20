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
    /*T_U16 counter = 0;
    if(counter < 50)
    {
        if(counter < 10)
        {
            RTE_vSetDcMotDir(0);
            RTE_vSetDcMotSpeed(20);
        }
        else
        {
            RTE_vSetDcMotDir(0);
            RTE_vSetDcMotSpeed(80);
        }
    }
    else
    {
        RTE_vSetDcMotSpeed(0);
        counter = 0;
    }
    counter++;*/
    RTE_vSetDcMotDir(1);
    RTE_vSetDcMotSpeed(30);
}