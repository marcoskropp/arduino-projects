void setup() {  
   
 }  
   
 void loop() { 
  tone(3, 220);   // 220Hz
  delay(500);  
  tone(3, 440);   // 440Hz
  delay(500);  
  tone(3, 880);   // 880Hz
  delay(500);  
  tone(3, 1760);  // 1760Hz
  delay(500);  
  tone(3, 3520);  // 3520Hz
  delay(500);  
  tone(3, 7040);  // 7040Hz
  delay(500);  
  tone(3, 14080); // 14080Hz
  delay(500);  
  noTone(11); // not required  
 }  
