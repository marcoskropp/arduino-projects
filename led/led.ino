const int led = 2;  

void setup() {
  pinMode(led,OUTPUT);  
}

void loop() {  
  for(int i = 1000; i > 50; i-=100){
  digitalWrite(led , HIGH);
  delay(i);
  digitalWrite(led , LOW);
  delay(i);
  }
}
