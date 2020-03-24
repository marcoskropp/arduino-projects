#include <Servo.h>
  
Servo servo; 

void setup (){
  servo.attach(2); // Pin
  Serial.begin(9600);
  servo.write(0); // Initiates the motor at the 0 position 
}
 
void loop(){
  int pos = 0;
  servo.write(pos);
  delay(500);
  pos = 720;
  servo.write(pos);
  delay(500);
}
