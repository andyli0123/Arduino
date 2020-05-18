//雨滴燈實習
const int led[]={3,9,10,11};
int varNums;
int ledNums;
const int brightness[7][4]={
  {250,0,0,0},
  {100,250,0,0},
  {50,100,250,0},
  {5,50,100,250},
  {0,5,50,100},
  {0,0,5,50},
  {0,0,0,5}
};

void setup(){
}

void loop(){
  for(varNums=0;varNums<7;varNums++){
    for(ledNums=0;ledNums<4;ledNums++){
      analogWrite(led[ledNums],brightness[varNums][ledNums]);
      delay(100);
    }
  }
}
