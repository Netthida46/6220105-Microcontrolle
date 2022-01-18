#include <LiquidCrystal.h>

LiquidCrystal My_LCD(13,12 ,14 ,15 ,27 ,26,25);

  void setup() {
  My_LCD.begin(16,2);
  My_LCD.clear();
}

void loop() {
  My_LCD.setCursor(0,0);
  My_LCD.print("Hello World!");
  My_LCD.setCursor(5,1);
  My_LCD.print("EN2022");
}
