int LED_R=11;
int LED_G=10;
int LED_B=9;

void setup() {
  Serial.begin(9600);
  pinMode(LED_R,OUTPUT);
  pinMode(LED_G,OUTPUT);
  pinMode(LED_B,OUTPUT);
}

void loop() {
  analogWrite(LED_R,255);
  analogWrite(LED_G,255);
  analogWrite(LED_B,255);
  Serial.println("turn off LED");
  delay(3000);
  analogWrite(LED_R,0);
  analogWrite(LED_G,255);
  analogWrite(LED_B,255);
  Serial.println("turn on Red LED");
  delay(3000);
  analogWrite(LED_R,255);
  analogWrite(LED_G,0);
  analogWrite(LED_B,255);
  Serial.println("turn on Green LED");
  delay(3000);
  analogWrite(LED_R,255);
  analogWrite(LED_G,255);
  analogWrite(LED_B,0);
  Serial.println("turn on Blue LED");
  delay(3000);
  analogWrite(LED_R,0);
  analogWrite(LED_G,0);
  analogWrite(LED_B,0);
  Serial.println("turn on White LED");
  delay(3000);
}