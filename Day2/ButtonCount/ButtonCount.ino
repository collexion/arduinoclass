int buttonPin = 8;
int count = 0;
int buttonPressedState = LOW; // HIGH for normally closed, LOW for normally open buttons
int lastState = HIGH; // inverse of above for starting out w/o press

void setup() {
  pinMode(buttonPin, INPUT);
  digitalWrite(buttonPin, HIGH); // pullup
  Serial.begin(9600);
  Serial.println("I will count the number of times you press a button");
  Serial.println("If the counter starts at 1 and not zero, but you have not pressed the button, you need to change buttonPressedState and lastState.");
  Serial.println("I will wait five seconds before starting.");
  delay(1000);
  Serial.println("I will wait four seconds before starting.");
  delay(1000);
  Serial.println("I will wait three seconds before starting.");
  delay(1000);
  Serial.println("I will wait two seconds before starting.");
  delay(1000);
  Serial.println("I will wait one second before starting.");
  delay(1000);
}

void loop() {
  int newState = digitalRead(buttonPin);
  if (newState == buttonPressedState && lastState != buttonPressedState) {
    count++;
  }
  lastState = newState;
  Serial.println(count);
}
