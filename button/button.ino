const int button = 2; 

void setup() {
  Serial.begin(9600);
  pinMode(button,INPUT_PULLUP); 
}

void loop() {  
  Serial.println(digitalRead(button));
}
