#include <Arduino.h>
#include "servo.h"

Servo servo;  // create servo object to control a servo
int servo_pin = 16;
int open_signal_pin = 12;
int close_signal_pin = 13;

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

void light_control(void)
{
  if(digitalRead(open_signal_pin) == 1) open_light();
  else if(digitalRead(close_signal_pin) ==1) close_light(0);
}

void loop() {
  // put your main code here, to run repeatedly:
  light_control();
}