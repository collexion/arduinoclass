
int buttonPin = 8;
int presses = 0;
boolean heldDown = false;

void setup() {
  pinMode(buttonPin, INPUT);
  digitalWrite(buttonPin, 1);
  Serial.begin(9600);
}

void loop() {
  boolean buttonDown = (digitalRead(buttonPin) == HIGH);
  if (buttonDown) {
    if (!heldDown) {
      presses = presses + 1;
    }
    heldDown = true;
  } else {
    heldDown = false;
  }
  Serial.println(presses);
}
