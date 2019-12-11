#include "xc.h"
#include "hal_lf.h"
#include "mcal_gpio.h"

//setarea directiei pinilor
void Hal_vSetLineFollower(T_U8 dir)
{
    int pin;
    for (pin = 0; pin < 6; ++pin)
    {
        GPIO_u8SetPortPin(PORT_C, pin, DIGITAL, dir);
    }
}

//aplica tensiune(1 logic) pe pini
void Hal_vWriteLineFollower()
{
    int pin;
    for (pin = 0; pin <6; ++pin)
    {
        GPIO_u8WritePortPin(PORT_C, pin, 1);
    }
}

T_U16 Hal_u16GetLineFollower()
{
    T_U16 val;
    Hal_vSetLineFollower(0); //OUTPUT
    Hal_vWriteLineFollower();
    __delay_us(10);
    Hal_vSetLineFollower(1); //INPUT
    __delay_us(1000);
    val = GPIO_u16ReadPort(PORT_C) & 63;
    return val;
}