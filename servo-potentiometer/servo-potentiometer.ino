#include <Servo.h> 
Servo servo;  

int potentiometerPin = 0; //Analog Pin

int val;     

void setup(){ 
  servo.attach(2);  
  Serial.begin(9600);
} 

void loop(){ 
  val = analogRead(potentiometerPin); // Value between 0 and 1023      
  val = map(val, 0, 1023, 0, 180); // Converts the value to be used on servo (value between 0 and 180)
  Serial.println(val);
  servo.write(val);                  
  delay(15);                           
}
