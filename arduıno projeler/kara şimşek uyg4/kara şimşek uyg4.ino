
int ledler[] = {2,3,4,5,6};

void setup() {
  
  for (int i=0; i<6; i++){

    pinMode(ledler[i], OUTPUT);

  }
}

void loop() {
   
  for(int i=0; i<6; i++){

    digitalWrite(ledler[i], HIGH);
    delay(100);
    digitalWrite(ledler[i], LOW);
  }
  
  for(int j=5; j>0; j--){
    digitalWrite(ledler[j], HIGH);
    delay(100);
    digitalWrite(ledler[j], LOW);

  }
}
