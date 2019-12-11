#include "xc.h"
#include "mcal_pwm.h"
#include "hal_servo.h"

#define rezolutie 0.117

void Hal_vServoInit()
{
    PWM1_vInit();
}

void Hal_vSetServoAngle(T_F16 angle) 
{
    if (angle < 65)
    {
        angle = 65;
    }
    if (angle > 115)
    {
        angle = 115;
    }
    T_F16 dutyCycle = (angle - 65) * rezolutie + 4;
    PWM1_vSetDuty(dutyCycle, 1);
}