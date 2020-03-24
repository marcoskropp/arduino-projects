const int totalRounds = 100; 
const int numbPinsArray = 4;

int level = 0;

int randomNumber;
int lastRandomNumber;

int principalVector[totalRounds]; 

const int btnPins[numbPinsArray] = {
  2,3,4,5  
};

const int ledPins[numbPinsArray] = {
  8,9,10,11
};

int btnState[numbPinsArray];

boolean played;

void setup() {
  for(int i = 0; i < numbPinsArray; i++){
    pinMode(ledPins[i], OUTPUT);
    pinMode(btnPins[i], INPUT);
  }
  Serial.begin(9600);
}

void loop() {
  newLevel();
}

void newLevel(){
  generateRandomicNumber();
  principalVector[level] = randomNumber;
  level++;
  show();
}

void generateRandomicNumber(){
  // The input pin 0 needs to be unconnected
  randomSeed(analogRead(0));
  randomNumber = random(1, 5);
  Serial.println(randomNumber);
  if(lastRandomNumber == randomNumber && level != 0){
    delay(75);
    generateRandomicNumber();
  }else{
     lastRandomNumber = randomNumber;
  }
}

void show(){
  for(int i = 0; i < level; i++){
    for(int o = 0; o < numbPinsArray; o++){
      if(principalVector[i] == o + 1){
        digitalWrite(ledPins[o], HIGH);
        delay(1000);
        digitalWrite(ledPins[o], LOW);
      }
    }
  }
  readAndVerifyUser();
}

void readAndVerifyUser(){
  for(int i = 0; i < level; i++){
    played = false;
    while(!played){
      for(int o = 0; o < numbPinsArray; o++){
        btnState[o] = digitalRead(btnPins[o]); 
        verifyUser(i,o);
      }
      delay(300);
      lowLed();
    }
  }           
  delay(500);
  newLevel();
}

void verifyUser(int i , int o){
  if(btnState[o] == HIGH){
    digitalWrite(ledPins[o], HIGH);
    played = true;
    if(principalVector[i] != o + 1){
      loseGame();
    }
    if(i == totalRounds - 1){
      winGame();  
    }
   }
}

void lowLed(){
  for(int o = 0; o < numbPinsArray; o++){
    digitalWrite(ledPins[o], LOW);
  }
}

void loseGame(){
  for(int i = 0; i < 10; i++){
    for(int o = 0; o < numbPinsArray; o++){
      digitalWrite(ledPins[o], HIGH);
    }
    delay(100);
    for(int o = 0; o < numbPinsArray; o++){
      digitalWrite(ledPins[o], LOW);
    }
    delay(100);
  }
  delay(2000);
  restartGame();
}

void winGame(){
  for(int i = 0; i < 10; i++){
     for(int o = 0; o < numbPinsArray; o++){
      digitalWrite(ledPins[o], HIGH);
      delay(100);
      digitalWrite(ledPins[o], LOW);
     }
  }
  delay(2000);
  restartGame();
}

void restartGame(){
  level = 0;
  newLevel();
}


  

  
