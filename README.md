# Arduino Liquid Crystal library for Mongoose OS

This is a Mongoose compatible wrapper for [1602A-1 LCD](https://www.openhacks.com/uploadsproductos/eone-1602a1.pdf), from Arduino Library [LiquidCrystal](https://www.arduino.cc/en/Reference/LiquidCrystal). 



# Usage

`main.cpp`:
```c++
#include "mgos.h"
#include "mgos_arduino_liquid_crystal.h"

enum mgos_app_init_result mgos_app_init(void) {
  const int rs = 12, en = 14, d4 = 16, d5 = 5, d6 = 4, d7 = 0;
  LiquidCrystal *lcd = mgos_arduino_lcd_create(rs, en, d4, d5, d6, d7);
  lcd->begin(16, 2);
  lcd->setCursor(0, 0);
  lcd->print("Hello World");
  return MGOS_APP_INIT_SUCCESS;
}

```

# Problems known:
 - May need to free the memory of lcd object manually. It's allocated on heap. 
 - Only works with `main.cpp`, not with `main.c`. If anyone could explain why and improve it, I'll be grateful. 
 
# Next step plan
None

