// testing_servos.ino
//
// This program can be used to test out the servos for the
// Sorting Hat after they have been installed.
//

// Add the Servo library
#include <Servo.h>

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
}

void loop() {
  // Scan from 60 to 0 degrees
  for (servoPos = 60; servoPos > 0; servoPos--) {
    top.write(servoPos);
    eye1.write(servoPos);
    eye2.write(servoPos);
    mouth1.write(servoPos);
    mouth2.write(servoPos);
    delay(50);
  }

  // Scan from 0 to 60 degrees
  for (servoPos = 0; servoPos < 60; servoPos++) {
    top.write(servoPos);
    eye1.write(servoPos);
    eye2.write(servoPos);
    mouth1.write(servoPos);
    mouth2.write(servoPos);
    delay(50);
  }
}
