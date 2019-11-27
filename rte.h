#ifndef RTE_H
#define	RTE_H

#include <xc.h>
#include "hal_dc.h"
#include "hal_servo.h"

#define RTE_vDcMotInit Hal_vDcMotInit
#define RTE_vSetDcMotDir Hal_vSetDcMotDir
#define RTE_vSetDcMotSpeed Hal_vSetDcMotSpeed
#define RTE_ServoInit Hal_ServoInit
#define RTE_SetServoAngle Hal_SetServoAngle

#endif	/* RTE_H */