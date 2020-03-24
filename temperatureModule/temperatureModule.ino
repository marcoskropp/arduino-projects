const int LM35 = A0;
float temp; 
 
void setup() {
  Serial.begin(9600);
}
 
void loop() {
  temp = (float(analogRead(LM35))*5/(1023))/0.01; // Converts into Degrees Celsius
  Serial.print("Temperature: ");
  Serial.println(temp);
  delay(2000);
}
