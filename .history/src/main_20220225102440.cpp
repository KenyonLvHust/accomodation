#include <Arduino.h>
#include "servo.h"

Servo servo;  // create servo object to control a servo
int angle = 0;

void setup() {
  // put your setup code here, to run once:
  servo.attach(16);

}

void open_light(void)
{
  servo.write(0);
  delay(1000);
  servo.write(90);
  delay(1000);
}
void close_light(void)
{
  servo.write(180);
  delay(1000);
  servo.write(90);
  delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
  open_light();
  close_light();
}