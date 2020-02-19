#include "xc.h"
#include "asw_light_battery.h"

int i = 0;

void Asw_vDoHandleLightSigBattery()
{
    T_F16 val = Hal_f16GetBatteryValue();
    if(val == 90)
    {
        if(i < 10)
        {
            if(i < 7)
            {
                GPIO_u8WritePortPin(PORT_A, 10, 1);
            }
            else
            {
                GPIO_u8WritePortPin(PORT_A, 10, 0);
            }
        }
    }
}