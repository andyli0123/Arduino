void setup() {
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  digitalWrite(12, HIGH);
  digitalWrite(11, LOW);
  delay(100);
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  delay(100);
}