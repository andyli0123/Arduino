/* 紅外線遙控可接收二位數字控制LED
 * 匯入程式庫：http://downloads.arduino.cc/libraries/github.com/z3t0/IRremote-2.2.3.zip
*/

#include <boarddefs.h>
#include <IRremote.h>
#include <IRremoteInt.h>
#include <ir_Lego_PF_BitStreamEncoder.h>

int RECV_PIN=2;
long key1;
long key2;
int R=6;
int G=7;
int B=8;
int Key_counter;
long Key_Array[2];
IRrecv irrecv(RECV_PIN);
decode_results results1;
decode_results results2;

void setup() {
  Serial.begin(9600);
  Serial.println("Enabling IRin");
  irrecv.enableIRIn();
  Serial.println("Enabled IRin");
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);
  analogWrite(R, LOW);
  analogWrite(G, LOW);
  analogWrite(B, LOW);
  Key_counter=0;
}

void loop() {
  if(irrecv.decode(&results1)){
    if(Key_counter==0){
      Key_Array[0]=results1.value;
      Serial.println("Key_Array[0]=");
      Serial.println(Key_Array[0],HEX);
      delay(50);
      irrecv.resume();
      Key_counter=Key_counter+1;
    }
  }
  
  if(irrecv.decode(&results2)){
    if(Key_counter==1){
      Key_Array[1]=results2.value;
      Serial.println("Key_Array[1]=");
      Serial.println(Key_Array[1],HEX);
      Key_counter=0;
      delay(50);
      irrecv.resume();
    }
  }
  
  if(Key_Array[0]==0xFF6897 && Key_Array[1]==0xFF7A85){
    analogWrite(R,HIGH);
    delay(100);
    analogWrite(R,LOW);
    delay(100);
  }

  if(Key_Array[0]==0xFF42BD && Key_Array[1]==0xFF4AB5){
    analogWrite(G,HIGH);
    delay(100);
    analogWrite(G,LOW);
    delay(100);
  }
  
  if(Key_Array[0]==0xFF52AD && Key_Array[1]==0xFF5AA5){
    analogWrite(B,HIGH);
    delay(100);
    analogWrite(B,LOW);
    delay(100);
  }
}
