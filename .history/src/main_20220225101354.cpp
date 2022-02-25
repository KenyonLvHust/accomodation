#include <Arduino.h>
#include "servo.h"

Servo servo;  // create servo object to control a servo
int angle = 0;

void setup() {
  // put your setup code here, to run once:
  servo.attach(16);

}

void loop() {
  // put your main code here, to run repeatedly:
  for(angle = 0; angle < 360; angle++)
  {
  servo.write(angle);
  delay(15);
  }
  for(angle = 180; angle < 0; angle--)
  {
  servo.write(angle);
  delay(15);
  }
}