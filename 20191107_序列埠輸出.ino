int pushButton = 7;
int buttonState = 0;

void setup() {
  Serial.begin(9600);
  pinMode(pushButton, INPUT);
}

void loop() {
  int buttonState = digitalRead(pushButton);
  Serial.println("276-27");
  Serial.println(buttonState);
  delay(1000);
}