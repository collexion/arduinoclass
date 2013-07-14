int notes = 5;

int led_start = 8;
int pot_start = 1;
int rate_pot = 0;
int speaker = 7;

int delay_min = 200;
int delay_max = 2000;

int pitch_min = 30;
int pitch_max = 5000;

void test_speaker() {
  Serial.println("Speaker should play for 1 second");
  tone(speaker, 900, 1000);
}

void setup_and_test_leds() {
  Serial.println("EACH LED SHOULD BE ON FOR 1 SECOND"); 
  for(int led = 0; led < notes; led++) {
    pinMode(led_start + led, OUTPUT);
    digitalWrite(led_start + led, HIGH);
    delay(1000);
    digitalWrite(led_start + led, LOW);
  }
}

void test_note_pots() {
  int pot_value = 9999;
  for(int pot = 0; pot < notes; pot++) {
    pot_value = analogRead(pot_start + pot);
    Serial.print("NOTE POT ");
    Serial.print(pot);
    Serial.print(" = ");
    Serial.println(pot_value);
  }
}

void test_rate_pot() {
  int pot_value = analogRead(rate_pot);
  Serial.print("Rate pot = ");
  Serial.println(pot_value);
}

void setup() {
  Serial.begin(9600);
  test_speaker();
  setup_and_test_leds();
  test_note_pots();
  test_rate_pot();
}

void loop() {
  int pot_value = 0;
  int pitch = pitch_min;
  int duration = delay_min;
  for (int note = 0; note < notes; note++) {
    pot_value = analogRead(pot_start + note);
    pitch = map(pot_value, 0, 1023, pitch_min, pitch_max);
    duration = map(analogRead(rate_pot), 0, 1023, delay_min, delay_max);
    
    Serial.print("Playing tone ");
    Serial.print(note);
    Serial.print(" at ");
    Serial.print(pitch);
    Serial.print(" (");
    Serial.print(pot_value);
    Serial.print(")");
    Serial.print(" for ");
    Serial.println(duration);
    
    digitalWrite(led_start + note, HIGH);
    tone(speaker, pitch, duration);
    delay(duration);
    digitalWrite(led_start + note, LOW);
  }
}
