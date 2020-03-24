#include <LiquidCrystal_I2C.h>
#include <Wire.h>

LiquidCrystal_I2C lcd(0x27,2,1,0,4,5,6,7,3, POSITIVE); // Initialize the LCD

boolean var;
 
void setup(){
  Serial.begin(9600);
  lcd.begin (16,2); // Width, Height
  lcd.setBacklight(HIGH);
}
 
void loop(){
  if(Serial.available()){
    String text = Serial.readString();
    text.remove(text.length() - 1, 2);    
    if(!var){      
      lcd.setCursor(0,0); // X, Y
      lcd.print("                ");
      lcd.setCursor(0,0);
      lcd.print(text);
      var = true;
    }else{
      lcd.setCursor(0,1);
      lcd.print("                ");
      lcd.setCursor(0,1);
      lcd.print(text);
      var = false;
    }
  }
}
