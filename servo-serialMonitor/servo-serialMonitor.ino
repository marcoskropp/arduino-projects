 //control servo motor with serial monitering window - by ujash patel
  //for more go to www.uu-machinetool.blogspot.com
#include <Servo.h> 
 
Servo myservo;  // create servo object to control a servo 
                // a maximum of eight servo objects can be created 
 
int pos = 0;
String servodata;

void setup()  {
 Serial.begin(9600);  
Serial.println("Redy");
  myservo.attach(2);
  
}

void loop()   
{
  if (Serial.available() > 0)
  {
   servodata = Serial.readString();

          myservo.write(servodata.toInt());
     
   }
    
//    if(servodata == '1') // Single Quote! This is a character.
//    {
//
//      Serial.println("speed 1 is selected");
//      Serial.println("DELAY 15MS");
//     for(pos = 0; pos < 180; pos += 1)  // goes from 0 degrees to 180 degrees 
//  {                                  // in steps of 1 degree 
//    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
//    delay(2);                       // waits 15ms for the servo to reach the position 
//  } 
//  for(pos = 180; pos>=1; pos-=1)     // goes from 180 degrees to 0 degrees 
//  {                                
//    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
//    delay(2);                       // waits 15ms for the servo to reach the position 
//  } 
//    }
    
    
    Serial.println();    // End the line

  
  }
