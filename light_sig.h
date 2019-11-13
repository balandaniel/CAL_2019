#ifndef XC_HEADER_TEMPLATE_H
#define	XC_HEADER_TEMPLATE_H

#include <xc.h> // include processor files - each processor file is guarded.  



#ifdef	__cplusplus
extern "C" {
#endif /* __cplusplus */
#include "mcal_gpio.h"

extern void vDoHandleLightSig();
    
#ifdef	__cplusplus
}
#endif /* __cplusplus */

#endif	/* XC_HEADER_TEMPLATE_H */

