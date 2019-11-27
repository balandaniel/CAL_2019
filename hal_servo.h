#ifndef HAL_SERVO_H
#define	HAL_SERVO_H

#include <xc.h>
#include "general.h"

extern void Hal_ServoInit();
extern void Hal_SetServoAngle(T_F16 angle);

#endif	/* HAL_SERVO_H */