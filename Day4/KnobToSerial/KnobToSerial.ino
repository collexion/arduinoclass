int knob = 5;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(knob);
  Serial.println(value);
}
