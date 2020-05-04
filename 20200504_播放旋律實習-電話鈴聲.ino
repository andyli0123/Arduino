/*
 * 播放旋律實習-電話鈴聲
 * 麵包板A：GND、蜂鳴器一腳(8Ω/0.5W)
 * 麵包板B：蜂鳴器一腳(8Ω/0.5W)、電容器短腳(1000uF/25V)
 * 麵包板C：PWM 2、電容器長腳(1000uF/25V)
*/

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
