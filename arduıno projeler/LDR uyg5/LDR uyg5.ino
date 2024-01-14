#define led 3

void setup() {
  
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  int isik = analogRead(A0);
  Serial.println(isik);
  delay(500);

  if(isik > 900){
    digitalWrite(led, LOW);
  }
  if(isik < 750){
    digitalWrite(led, HIGH);
  }

}
