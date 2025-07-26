#include <Servo.h>

Servo servo1;
const int leftServoPin = 9
;const int ledPins[]= {13};

void setup()
{
 int index;
 servo1.attach(9);
 for(index = 0; index <= 4; index++)
 {
  pinMode (ledPins[index], OUTPUT);
 }
 }

void loop() 
{
  pingPong(); // Chase lights
  int position 
  int index;
  servo1.write(90); // Tell servo to go to 90 degrees
  delay(1000); // Pause to get it time to move
  servo1.write(180); Tell servo to go to 180 degrees
  delay(1000);         // Pause to get it time to move

   servo1.write(0);     // Tell servo to go to 0 degrees

   delay(1000);         // Pause to get it time to move
  
   for(position = 0; position < 180; position += 2)
    {
      servo1.write(position);  // Move to next position
      delay(20);               // Short pause to allow it to move
    }

      // Tell servo to go to 0 degrees, stepping by one degree

   for(position = 180; position >= 0; position -= 1)
    {                                
      servo1.write(position);  // Move to next position
      delay(20);               // Short pause to allow it to move
    }
}

void pingPong()
{
  int position;
  int index;
  int delayTime = 35;

  for(index = 0; index <= 4; index++)
   {
     digitalWrite(ledPins[index], HIGH);
     delay(delayTime);
     digitalWrite(ledPins[index], LOW);
   }  
  
  for(index = 4; index >= 0; index--)
   {
     digitalWrite(ledPins[index], HIGH);
     delay(delayTime);
     digitalWrite(ledPins[index], LOW);
   }
}




}
