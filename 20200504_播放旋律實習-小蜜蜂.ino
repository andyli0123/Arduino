/*
 * 播放旋律實習-小蜜蜂
 * 麵包板A：GND、蜂鳴器一腳(8Ω/0.5W)
 * 麵包板B：蜂鳴器一腳(8Ω/0.5W)、電容器短腳(1000uF/25V)
 * 麵包板C：PWM 2、電容器長腳(1000uF/25V)
*/

const int speaker = 2;
char toneName[] = "CDEFGAB";
unsigned int frequency[7] = {523, 587, 659, 694, 784, 880, 988};
char beeTone[] = "GEEFDDCDEFGGGGEEFDDCEGGEDDDDDEFEEEEEFGGEEFDDCEGGC";
byte beeBeat[] = {1, 1, 2, 1, 1, 2, 1, 1, 1, 1, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 1, 1, 4, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 1, 1, 4};
const int beeLen = sizeof(beeTone);
unsigned long tempo = 180;
int i, j;

void setup() {
}

void loop() {
  for (i = 0; i < beeLen; i++)
    playTone(beeTone[i], beeBeat[i]);
  delay(3000);
}

void playTone(char toneNo, byte beatNo) {
  unsigned long duration = beatNo * 60000 / tempo;
  for (j = 0; j < 7; j++) {
    if (toneNo == toneName[j]) {
      tone(speaker, frequency[j]);
      delay(duration);
      noTone(speaker);
    }
  }
}
