#include "general.h"
#include "light_sig.h"

int counter = 0;

void vDoHandleLightSig()
{
    if(counter < 10)
    {
        if(counter < 6 && counter%2 == 1)
        {
            GPIO_u8WritePortPin(PORT_A, 10, 1);
        }
        else
        {
            GPIO_u8WritePortPin(PORT_A, 10, 0);
        }
    }
    else
    {
        counter = 0;
    }
    counter++;
}