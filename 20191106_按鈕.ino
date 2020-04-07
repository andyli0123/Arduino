int buttonOn = 0;

void setup(){
  pinMode(13, OUTPUT);
  pinMode(7, INPUT);
}
void loop(){
  buttonOn = digitalRead(7);
  if (buttonOn == HIGH) {
    digitalWrite(13, HIGH);
  } else {
    digitalWrite(13, LOW);
  }
}