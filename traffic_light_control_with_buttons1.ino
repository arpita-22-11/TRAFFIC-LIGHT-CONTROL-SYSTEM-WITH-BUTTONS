int redPin = 2;
int yellowPin = 4;
int greenPin = 7;
int buttonPin = 8; // define the button pin

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(buttonPin) == LOW) {
    // Button pressed → stop traffic
    digitalWrite(redPin, HIGH);    // turn red ON
    digitalWrite(greenPin, LOW);   // turn green OFF
    digitalWrite(yellowPin, LOW);  // turn yellow OFF
    delay(5000);                   // wait 5 sec for pedestrians
    digitalWrite(redPin, LOW);     // turn red OFF after wait
  } 
  else {
    // Normal traffic cycle
    digitalWrite(redPin, HIGH);
    delay(3000);
    digitalWrite(redPin, LOW);
  
    digitalWrite(greenPin, HIGH);
    delay(3000);
    digitalWrite(greenPin, LOW);
  
    digitalWrite(yellowPin, HIGH);
    delay(2000);
    digitalWrite(yellowPin, LOW);
  }
}



    
    
    
    
  