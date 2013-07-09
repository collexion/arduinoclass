//Use ButtonSchematic.pdf
// Button appears to connect to ground, HIGH means button not pressed, LOW means button pressed
// Momentary buttons are usually open (off) when not pressed
int ledPin = 13;
int buttonPin = 8;
boolean buttonPressed = false;
int pressedButtonState = LOW; //normally closed

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  digitalWrite(buttonPin, HIGH); //pullup
  // digitalWrite to an input pin as HIGH turns on internal pullup resistor
  Serial.begin(9600);
  
  //get initial button state
  if (digitalRead(buttonPin) == pressedButtonState) {
    Serial.println("The button is currently pressed.");
    Serial.println("If you are not pressing it, you may have wired it wrong.");
    Serial.println("If your button is normally closed, change pressedButtonState to HIGH");
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
  delay(100); // used to be delay(1000);
  // one second seems like a long time
  // especially given the fact the LED is on for five seconds.
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
