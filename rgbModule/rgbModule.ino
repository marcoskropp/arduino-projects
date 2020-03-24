int redPin = 2; 
int greenPin = 3; 
int bluePin = 4; 
                                                                                 
void setup(){
  pinMode(redPin, OUTPUT); 
  pinMode(bluePin, OUTPUT); 
  pinMode(greenPin, OUTPUT);
  Serial.begin(9600);
  randomSeed(analogRead(0)); // pin 0 needs to be disconnected 
}

void loop (){
  int randNumberRed = random(1, 255);
  analogWrite(redPin, randNumberRed); 
  delay(50);
  int randNumberGreen = random(1, 255);
  analogWrite(greenPin, randNumberGreen); 
  delay(50);
  int randNumberBlue = random(1, 255);
  analogWrite(bluePin, randNumberBlue); 
  delay(50);
  Serial.println(randNumberRed);
  Serial.println(randNumberGreen);
  Serial.println(randNumberBlue);
  delay(500);
}
