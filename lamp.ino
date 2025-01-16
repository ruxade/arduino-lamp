

#include <Servo.h>
//establishing the servo library

Servo servo1;
Servo servo2;
//initialing each servo motor so they can be controlled

int servoPos = 0;
// variable to store the servo position

void setup()
{
servo1.attach(9);
servo2.attach(3);
//attaching the two servos to pins 9 and 3
}


void loop()
{
for (servoPos = 0; servoPos < 90 ; servoPos++)
//the motors only have space on the lamp to go from 0 to 90 degrees without hitting other components
{
 servo1.write(servoPos);  //servo goes to the position stored in variable ‘servoPos’
 servo2.write(servoPos);
 delay(30);               //the delay is meant to mimic the movement of the rib cage while breathing
}

for (servoPos = 90; servoPos > 0; servoPos--)
  //reversing the rotating direction of the servo arm
{
 servo1.write(servoPos);
 servo2.write(servoPos);
 delay(10);

}
}
