int serialValue = 0;
int lightOn = false;
int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    serialValue = Serial.read();
  }
  if (serialValue == '1') {
    lightOn = true;
  }
  if (serialValue == '0') {
    lightOn = false;
  }
  if (lightOn) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
}
