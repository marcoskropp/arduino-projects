int detector = 2; 

void setup(){
  Serial.begin(9600);
  pinMode(detector, INPUT);
}

void loop(){
  Serial.println(digitalRead(detector));
}
