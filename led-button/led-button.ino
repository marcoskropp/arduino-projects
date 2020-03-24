const int led = 2;  
const int button = 3; 

void setup() {
  pinMode(led,OUTPUT);  
  pinMode(button,INPUT);
  digitalWrite(led,HIGH);
}

void loop() {  
  if (digitalRead(button) == LOW) {
    digitalWrite(led,HIGH);
  } else {
    digitalWrite(led,LOW);    
  }       
}
