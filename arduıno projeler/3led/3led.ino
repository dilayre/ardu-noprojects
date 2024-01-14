#define PIN_LED_1 10
#define PIN_LED_2 11
#define PIN_LED_3  9

unsigned long gecen_sure_led_1,gecen_sure_led_2,gecen_sure_led_3;

void setup() {
  // put your setup code here, to run once:
  digitalWrite(PIN_LED_1,HIGH);
  digitalWrite(PIN_LED_2,HIGH);
  digitalWrite(PIN_LED_3,HIGH);

  pinMode(PIN_LED_1,OUTPUT);
  pinMode(PIN_LED_2,OUTPUT);
  pinMode(PIN_LED_3,OUTPUT);

  gecen_sure_led_1=gecen_sure_led_2=gecen_sure_led_3=millis();
}

void loop() {
  // put your main code here, to run repeatedly:
  if(millis()-gecen_sure_led_1>100 && millis()-gecen_sure_led_1<110){
    digitalWrite(PIN_LED_1,LOW);
  }else if(millis()-gecen_sure_led_1 > 300){
    digitalWrite(PIN_LED_1,HIGH);
    gecen_sure_led_1 = millis();
  }

  if(millis()-gecen_sure_led_2>200 && millis()-gecen_sure_led_2<210){
    digitalWrite(PIN_LED_2,LOW);
  }else if(millis()-gecen_sure_led_2 > 400){
    digitalWrite(PIN_LED_2,HIGH);
    gecen_sure_led_2 = millis();
  }

  if(millis()-gecen_sure_led_3>200 && millis()-gecen_sure_led_3<205){
    digitalWrite(PIN_LED_3,LOW);
  }else if(millis()-gecen_sure_led_3 > 400){
    digitalWrite(PIN_LED_3,HIGH);
    gecen_sure_led_3 = millis();
  }
  
}

