// C++ code
//

#include <Servo.h>

int pos = 0;

Servo servo_9;

void setup()
{
  servo_9.attach(9, 500, 2500);
}

void loop()
{
  for (pos = 0; pos <= 90; pos += 1) {
    servo_9.write(pos);
    delay(100); 
  }
  for (pos = 0; pos >= 0; pos -= 1) {
    servo_9.write(pos);
    delay(5);
  }
}