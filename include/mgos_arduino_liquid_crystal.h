/*
 * Copyright (c) 2014-2017 Cesanta Software Limited
 * All rights reserved
 *
 * Arduino LiquidCrystal library API wrapper
 */

#ifndef _MGOS_ARDUINO_LIQUID_CRYSTAL_H_
#define _MGOS_ARDUINO_LIQUID_CRYSTAL_H_

#include "LiquidCrystal.h"


#ifdef __cplusplus
extern "C" {
#endif

LiquidCrystal *mgos_arduino_lcd_create(int rs, int en, int d4, int d5, int d6, int d7);


#ifdef __cplusplus
}
#endif

#endif /* _MGOS_ARDUINO_LIQUID_CRYSTAL_H_ */
