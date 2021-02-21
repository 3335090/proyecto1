
int Led = 2;
int BUZZER = 3

void setup() {
 pinMode (Led,OUTPUT);
pinMode (BUZZER, OUTPUT);
}

void loop() {
  
digitalWrite(Led,HIGH);
delay (2000);
digittalWrite (Led,LOW);
digitalWrite (BUZZER,HIGH);
delay (2000);

}
