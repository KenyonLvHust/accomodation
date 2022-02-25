#include <Arduino.h>
#include "servo.h"

Servo servo;  // create servo object to control a servo
int servo_pin = 16;

void setup() {
  // put your setup code here, to run once:
  servo.attach(servo_pin);

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

int read_cotrol_code(void)
{
  
}

void loop() {
  // put your main code here, to run repeatedly:
  open_light();
  close_light();
}