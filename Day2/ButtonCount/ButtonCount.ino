int buttonPin = 8;
int count = 0;
int buttonPressedState = HIGH; // HIGH for normally closed
int lastState = LOW; // inverse of above for starting out w/o press

void setup() {
  pinMode(buttonPin, INPUT);
  digitalWrite(buttonPin, HIGH); // pullup
  Serial.begin(9600);
}

void loop() {
  int newState = digitalRead(buttonPin);
  if (newState == buttonPressedState && lastState != buttonPressedState) {
    count++;
  }
  lastState = newState;
  Serial.println(count);
}
