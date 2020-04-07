int pushButton = 7;
int buttonState = 0;
int beforeState = 0;

void setup() {
  Serial.begin(9600);
  pinMode(pushButton, INPUT);
}

void loop() {
  buttonState = digitalRead(pushButton);
  if (buttonState==1 and beforeState==0){
    Serial.println("276-27");
    Serial.println(buttonState);  
  }
  beforeState=buttonState;
  delay(1);
}