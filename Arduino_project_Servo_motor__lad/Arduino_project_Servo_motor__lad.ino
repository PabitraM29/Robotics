#include <Servo.h>
Servo d = Servo();

void setup() {
  d.attach(9);
  pinMode(13,OUTPUT);
  
}

void loop() {
  d.write(0);
  delay(2000);
  d.write(90);
  delay(1000);

  digitalWrite(13,HIGH);
  delay(500)
  ,digitalWrite(13,LOW);
  delay(500);
  
  d.write(60);
  delay(1000);
  
}
