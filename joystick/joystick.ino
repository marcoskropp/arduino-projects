const int SW_pin = 2;
const int X_pin = 0; 
const int Y_pin = 1; 
                                                                                 
void setup(){
  pinMode(SW_pin, INPUT);
  digitalWrite(SW_pin, HIGH);
  Serial.begin(9600);
}

void loop (){
  Serial.print("X: ");
  Serial.print(analogRead(X_pin)); // 0 to 1023
  Serial.print("\n");
  Serial.print("Y: ");
  Serial.print(analogRead(Y_pin)); // 0 to 1023
  Serial.print("\n\n");
  delay(500);
}
