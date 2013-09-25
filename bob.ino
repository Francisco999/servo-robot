#include <Servo.h>

Servo bob;

void setup()
{
  bob.attach(3);
}

void loop()
{
  
  for (int angle = 0;angle <170; angle++)
  {
      bob.write(angle);
      delay(5);
  }   
}
