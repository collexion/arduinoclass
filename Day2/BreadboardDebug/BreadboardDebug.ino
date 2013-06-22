int ledPin = 13;
int buttonPin = 8;
boolean buttonPressed = false;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  digitalWrite(buttonPin, 1);
  Serial.begin(9600);
}

void loop() {
  // pulse the light
  delay(5000);
  digitalWrite(ledPin, HIGH);
  delay(500);
  digitalWrite(ledPin, LOW);

  // check the button
  buttonPressed = (buttonPressed || (digitalRead(buttonPin) == HIGH));
  delay(800);
  buttonPressed = (buttonPressed || (digitalRead(buttonPin) == HIGH));
  delay(200);
  buttonPressed = (buttonPressed || (digitalRead(buttonPin) == HIGH));
  delay(200);
  buttonPressed = (buttonPressed || (digitalRead(buttonPin) == HIGH));
  delay(200);
  buttonPressed = (buttonPressed || (digitalRead(buttonPin) == HIGH));
  
  // write the result
  if (buttonPressed) {
    Serial.println("OKAY!");
    buttonPressed = false;
  } else {
    Serial.println("I'm not seeing anything from the button :(");
  }
}
