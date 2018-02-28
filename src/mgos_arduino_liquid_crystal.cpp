/*
 * Copyright (c) 2014-2017 Cesanta Software Limited
 * All rights reserved
 *
 * Arduino LiquidCrystal library API wrapper
 */

#include "mgos_arduino_liquid_crystal.h"

LiquidCrystal *mgos_arduino_lcd_create(int rs, int en, int d4, int d5, int d6, int d7)
{
  return new LiquidCrystal(rs, en, d4, d5, d6, d7);
}
