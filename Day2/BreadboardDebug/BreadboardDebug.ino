int ledPin = 13;
int buttonPin = 8;
boolean buttonPressed = false;
int pressedButtonState = HIGH; //normally closed

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  digitalWrite(buttonPin, 1); //pullup
  Serial.begin(9600);
  
  //get initial button state
  if (digitalRead(buttonPin) == pressedButtonState) {
    Serial.println("The button is currently pressed.");
    Serial.println("You may have wired it wrong.");
    Serial.println("If your button normally open, change pressedButtonState");
  }
  Serial.println("Initialized");
}

void loop() {
  int read1, read2;
  
  // pulse the light
  delay(5000);
  digitalWrite(ledPin, HIGH);
  delay(500);
  digitalWrite(ledPin, LOW);

  // check the button
  read1 = digitalRead(buttonPin);
  delay(1000);
  read2 = digitalRead(buttonPin);
  if (read1 == read2 && read1 == pressedButtonState) {
    buttonPressed = true;
  }

  // write the result
  if (buttonPressed) {
    Serial.println("OKAY!");
    buttonPressed = false;
  } else {
    Serial.println("I'm not seeing anything from the button :(");
  }
}
