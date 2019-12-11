#ifndef RTE_H
#define	RTE_H

#include <xc.h>
#include "hal_dc.h"
#include "hal_servo.h"
#include "hal_lf.h"

#define RTE_vDcMotInit Hal_vDcMotInit
#define RTE_vSetDcMotDir Hal_vSetDcMotDir
#define RTE_vSetDcMotSpeed Hal_vSetDcMotSpeed

#define RTE_vServoInit Hal_vServoInit
#define RTE_vSetServoAngle Hal_vSetServoAngle

#define RTE_u16GetLineFollower Hal_u16GetLineFollower

#endif	/* RTE_H */