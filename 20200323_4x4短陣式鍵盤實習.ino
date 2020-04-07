#include <Keypad.h>
const byte ROWS = 4;
const byte COLS = 4;
char keys[ROWS][COLS] = {
  {'A','3','2','1'},
  {'B','6','5','4'},
  {'C','9','8','7'},
  {'D','#','0','*'}
};
byte rowPins[ROWS] = {22,24,26,28};
byte colPins[COLS] = {36,34,32,30};
Keypad keynum = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);
void setup(){
  Serial.begin(9600);
}
void loop(){
  char key = keynum.getKey();
  if(key != NO_KEY){
    Serial.println(key);
  }
}