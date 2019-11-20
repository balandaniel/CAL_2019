#ifndef HAL_DC_H
#define	HAL_DC_H

#include <xc.h>
#include "general.h"

extern void Hal_vDcMotInit();
extern void Hal_vSetDcMotDir(T_U8 dir);
extern void Hal_vSetDcMotSpeed(T_F16 speed);

#endif	/* HAL_DC_H */

