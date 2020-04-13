/* 接收紅外線訊號並解碼
 * 匯入程式庫：http://downloads.arduino.cc/libraries/github.com/z3t0/IRremote-2.2.3.zip
 * 零件：Keyes IR Receiver
 * GND：GND
 * VCC：5V
 * DAT：PWM 2
*/

#include <IRremote.h> //使用 IRremote 函式庫
const int irReceiverPin = 2; //紅外線接收器訊號接在 pin 2

IRrecv irrecv(irReceiverPin); //定義 IRrecv 物件接收紅外線訊號
decode_results results; //解碼結果放在 results 變數裡

void setup() {
  Serial.begin(9600); //開啟 Serial port 鮑率為 9600 bps
  irrecv.enableIRIn(); //啟動紅外線解碼
}

void loop() {
  if(irrecv.decode(&results)){  //收到紅外線訊號
    Serial.print("irCode: "); //列印紅外線編碼值
    Serial.print(results.value, HEX); //紅外線編碼值，十六進制
    Serial.print(", bits: "); //列印紅外線位元數
    Serial.println(results.bits);  //紅外線編碼位元數
    irrecv.resume(); //繼續接收下一組紅外線訊號
  }
}
