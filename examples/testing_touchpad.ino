// testing_touchpad.ino
//
// This program can be used to test out the touch pad for the
// Sorting Hat after it has been installed.
//

// Add the Servo library
#include <Servo.h>

// Define pin for touch sensor
#define TOUCH_SENSOR 8

// Define the servos
Servo top;
Servo eye1;
Servo eye2;
Servo mouth1;
Servo mouth2;

// Servo position in degrees
int servoPos = 0;

void setup() {
  // Define servo signal inputs (Digital PWM 3-4-5-6-7)
  top.attach(3);
  eye1.attach(5);
  eye2.attach(4);
  mouth1.attach(7);
  mouth2.attach(6);

  // Define touch sensor as input (Digital PWN 8)
  pinMode(TOUCH_SENSOR, INPUT);
}

void loop() {
  // Read the current value of the sensor
  int sensorValue = digitalRead(TOUCH_SENSOR);

  if(!sensorValue) {
      // Scan from 0 to 60 degrees
      for (servoPos = 1500; servoPos > 1000; servoPos--) {
        top.write(servoPos);
        eye1.write(servoPos);
        eye2.write(servoPos);
        mouth1.write(servoPos);
        mouth2.write(servoPos);
        delay(30);
       }

      // Scan from 0 to 60 degrees
      for (servoPos = 0; servoPos < 60; servoPos++) {
        top.write(servoPos);
        eye1.write(servoPos);
        eye2.write(servoPos);
        mouth1.write(servoPos);
        mouth2.write(servoPos);
        delay(30);
      }
  }
}
