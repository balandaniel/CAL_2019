#include "xc.h"
#include "mcal_pwm.h"
#include "hal_servo.h"

#define rezolutie 0.04375

void Hal_ServoInit()
{
    PWM1_vInit();
}

void Hal_SetServoAngle(T_F16 angle) 
{
    T_F16 dutyCycle = (angle - 10) * rezolutie + 4;
    if (dutyCycle < 6.15)
    {
        dutyCycle = 6.15;
    }
    if (dutyCycle > 8.81)
    {
        dutyCycle = 8.81;
    }
    PWM1_vSetDuty(dutyCycle, 1);
}