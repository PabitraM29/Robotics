#include<Servo.h>
Servo motor;
int p=0;
void setup() {
  motor.attach(9);
  motor.write(90);  
}

void loop() {
  for(p=0;p<90;p++)
  {
    motor.write(p);
    delay(30);
  }
for(p=90;p>+1;p--)
  {
    motor.write(p);
    delay(10);
     }
     for(p=0;p<180;p++)
  {
    motor.write(p);
    delay(30.5);
  }
  for(p=180;p>+1;p--)
  {
    motor.write(p);
    delay(30.5);  
}
}
