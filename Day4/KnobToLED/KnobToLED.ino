int led = 11;
int knob = 5;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  int inputValue = analogRead(knob);
  int outputValue = map(inputValue, 0, 1023, 0, 255);
  analogWrite(led, outputValue);
}
