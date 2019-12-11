#ifndef HAL_SERVO_H
#define	HAL_SERVO_H

#include <xc.h>
#include "general.h"

extern void Hal_vServoInit();
extern void Hal_vSetServoAngle(T_F16 angle);

#endif	/* HAL_SERVO_H */