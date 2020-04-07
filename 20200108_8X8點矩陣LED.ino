int line[6]={2,3,4,5,6,7};
int col[6]={8,9,10,11,12,13};
int appear[6][6]={{1,1,1,1,1,1},
                  {0,0,1,0,0,1},
                  {1,1,1,0,0,1},
                  {1,0,0,0,0,1},
                  {1,1,1,0,0,1},
                  {0,0,0,0,0,0}};

void setup() {
  for(int i=0;i<6;i++){
    pinMode(line[i],OUTPUT);
    pinMode(col[i],OUTPUT);
    digitalWrite(line[i],HIGH);
    digitalWrite(col[i],LOW);
  }
}

void loop() {
  for(int i=0;i<6;i++){
    for(int j=0;j<6;j++){
      if(appear[j][i]==1){
        digitalWrite(line[i],LOW);
        digitalWrite(col[j],HIGH);
        delay(1);
        digitalWrite(line[i],HIGH);
        digitalWrite(col[j],LOW);
      }
    }
  }
}