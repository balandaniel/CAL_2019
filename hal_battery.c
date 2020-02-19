#include "xc.h"
#include "hal_battery.h"

T_F16 Hal_f16GetBatteryValue()
{
    T_F16 medie = 0;
    T_U8 i;
    for(i = 0; i < 5; ++i)
    {
        medie = medie + ADC_u16Read(0);
    }
    medie = medie / 5;
    T_F16 rezolutie = 8.4 / 4095;
    T_F16 x = (8.4 - 0) * rezolutie + 0;
    T_F16 rez;
    if(x < 8.4 && x > 7)
    {
        rez = (100 - 20) / (8.4 - 7);
        x = (8.4 - 7) * rez + 20;
    }
    if(x < 7 && x > 6.5)
    {
        rez = (20 - 10) / (7 - 6.5);
        x = (7 - 6.5) * rez + 10;
    }
    if(x < 6.5 && x > 6)
    {
        rez = (10 - 0) / (6.5 - 6);
        x = (6.5 - 6) * rez + 0;
    }
    return x;
}