#include <LiquidCrystal_I2C.h>
#include <Wire.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.begin();
  lcd.clear();

}

void loop() {
  lcd.print("Kodla Bakalim");
  delay(2000);
  lcd.clear();
  lcd.print("Arduino");
  delay(2000);
  lcd.clear();

}
