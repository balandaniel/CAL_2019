#ifndef HAL_LF_H
#define	HAL_LF_H

#include <xc.h>
#include "general.h"

extern void Hal_vSetLineFollower(T_U8 dir);
extern void Hal_vWriteLineFollower();
extern T_U16 Hal_u16GetLineFollower();

#endif	/* HAL_LF_H */