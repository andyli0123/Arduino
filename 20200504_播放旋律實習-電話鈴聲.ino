const int speaker = 2;

void setup() {
}

void loop() {
  for (int i = 0; i < 10; i++) {
    tone(speaker, 1000);
    delay(50);
    tone(speaker, 500);
    delay(50);
  }
  noTone(speaker);
  delay(2000);
}