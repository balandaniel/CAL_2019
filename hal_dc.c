#include "xc.h"
#include "mcal_pwm.h"
#include "hal_dc.h"

void Hal_vDcMotInit()
{
    PWM1_vInit();
    //GPIO_u8SetPortPin(PORT_A, 9, DIGITAL, OUTPUT);
}

void Hal_vSetDcMotDir(T_U8 dir)
{
    GPIO_u8WritePortPin(PORT_A, 9, dir);
}

void Hal_vSetDcMotSpeed(T_F16 speed)
{
    PWM1_vSetDuty(speed, 2);
}