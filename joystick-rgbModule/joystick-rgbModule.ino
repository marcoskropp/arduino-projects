int redPin = 2; 
int greenPin = 3; 
int bluePin = 4; 

const int SW_pin = 5; 
const int X_pin = 0; 
const int Y_pin = 1; 

int val; 
int stX = 0;
int stY = 0;
                                                                                 
void setup(){
  pinMode(redPin, OUTPUT); 
  pinMode(bluePin, OUTPUT); 
  pinMode(greenPin, OUTPUT);
  pinMode(SW_pin, INPUT);
  digitalWrite(SW_pin, HIGH);
  Serial.begin(9600);
  randomSeed(analogRead(0)); // pin 0 needs to be disconnected 
}

void loop (){
  int randNumber = random(1, 255);
  
  Serial.println(analogRead(X_pin));
  Serial.println(analogRead(Y_pin));
           
  int x = map(analogRead(X_pin), 0, 1023, 1, 255); // Converts 0 - 1023 to 1 - 255
  int y = map(analogRead(Y_pin), 0, 1023, 1, 255);   
  
  analogWrite(redPin, x); 
  analogWrite(bluePin, y); 
  delay (10); 
  if(stX != x && stY != y){
    analogWrite(greenPin, randNumber); 
  }
  stX = x;
  stY = y;     
}
