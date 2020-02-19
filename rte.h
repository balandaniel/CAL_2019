#ifndef RTE_H
#define	RTE_H

#include <xc.h>
#include "hal_dc.h"
#include "hal_servo.h"
#include "hal_lf.h"
#include "hal_battery.h"

#define RTE_vDcMotInit Hal_vDcMotInit
#define RTE_vSetDcMotDir Hal_vSetDcMotDir
#define RTE_vSetDcMotSpeed Hal_vSetDcMotSpeed

#define RTE_vServoInit Hal_vServoInit
#define RTE_vSetServoAngle Hal_vSetServoAngle

#define RTE_u16GetLineFollower Hal_u16GetLineFollower

#define RTE_f16GetBatteryValue Hal_f16GetBatteryValue

#endif	/* RTE_H */