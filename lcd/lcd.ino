#include <LiquidCrystal_I2C.h>
#include <Wire.h>

LiquidCrystal_I2C lcd(0x27,2,1,0,4,5,6,7,3, POSITIVE); // Initialize the LCD
 
void setup(){
 lcd.begin (16,2); // Width, Height
}
 
void loop(){
  lcd.setBacklight(HIGH);
  lcd.setCursor(0,0); // X, Y
  lcd.print("First Line");
  lcd.setCursor(0,1);
  lcd.print("Second Line");
}
