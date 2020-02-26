#include "xc.h"
#include "hal_interrupt.h"

void Hal_vCheckObstacle()
{
    if(flag == 1)
    {
        //GPIO_u8SetPortPin(PORT_A, 10, DIGITAL, OUTPUT);
        GPIO_u8WritePortPin(PORT_A, 10, 1);
    }
    else
    {
        //GPIO_u8SetPortPin(PORT_A, 10, DIGITAL, OUTPUT);
        GPIO_u8WritePortPin(PORT_A, 10, 0);
    }
}