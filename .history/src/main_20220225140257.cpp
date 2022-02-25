#include <Arduino.h>
#include "servo.h"

Servo servo;  // create servo object to control a servo
int servo_pin = 16;
int open_signal_pin = 13;
int close_signal_pin = 12;

// void setup() {
//   // put your setup code here, to run once:
//   servo.attach(servo_pin);

//   servo.write(90);
//   delay(1000);
// }

// void default_light(void)
// {
//   servo.write(90);
//   delay(500);
// }

// void open_light(void)
// {
//   servo.write(62);
//   delay(500);
//   servo.write(90);
//   delay(500);
// }
// void close_light(void)
// {
//   servo.write(118);
//   delay(500);
//   servo.write(90);
//   delay(500);
// }

// void light_control(void)
// {
//   if(digitalRead(open_signal_pin) == 1) open_light();
//   else if(digitalRead(close_signal_pin) ==1) close_light();
//   else default_light();
// }

// void loop() {
//   // put your main code here, to run repeatedly:
//   light_control();
//   // open_light();
//   // close_light();
// }

#include "LD3320_Demo.h"

void blink() {
  ProcessInt();
}

void setup() {
  // put your setup code here, to run once:
  System_Init();
  attachInterrupt(0, blink, FALLING);
  Serial.print("---------------LD3320 DEMO---------------\r\n");
  LD3320_test();
}

void loop() {
  // put your main code here, to run repeatedly:

}


