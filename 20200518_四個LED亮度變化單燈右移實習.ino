//四個LED亮度變化單燈右移實習
const int led[]={3,9,10,11};
int brightness=0;
int lighten=5;
int ledNums=0;
int direct=0;

void setup(){
}

void loop(){
  while(1){
    if(direct==0){
      brightness = brightness + lighten;
      if(brightness>=250){
        direct=1;
      }
    }else{
      brightness=brightness-lighten;
      if(brightness<=5){
        analogWrite(led[ledNums],0);
        direct=0;
        ledNums=ledNums+1;
        if(ledNums>3){
          ledNums=0;
        }
      }
    }
    analogWrite(led[ledNums],brightness);
    delay(10);
  }
}
