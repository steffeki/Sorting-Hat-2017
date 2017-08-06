// Add the servo library
#include <Servo.h>

// Define pin for touch sensor
#define TOUCH_SENSOR 8

// Define the servos
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;

// Servo position in degrees
int servoPos = 0;

void setup() {
  // Define servo signal inputs (Digital PWM 3-4-5-6-7)
  servo1.attach(3);
  servo2.attach(4);
  servo3.attach(5);
  servo4.attach(6);
  servo5.attach(7);
  
  // Define touch sensor as input (Digital PWM 8)
  pinMode(TOUCH_SENSOR, INPUT);
}

void loop() {
  // Read the current value of the sensor
  int sensorValue = digitalRead(TOUCH_SENSOR);
  
  // If the touch sensor is in contact with skin,
  // activate the servos
  if (!sensorValue) {
    // Scan from 0 to 90 degrees
    for (servoPos = 0; servoPos < 90; servoPos++) {
      servo1.write(servoPos);
      servo2.write(servoPos);
      servo3.write(servoPos);
      servo4.write(servoPos);
      servo5.write(servoPos);
      delay(10);
    }

    // Scan back from 90 to 0 degrees
    for (servoPos = 90; servoPos > 0; servoPos--) {
      servo1.write(servoPos);
      servo2.write(servoPos);
      servo3.write(servoPos);
      servo4.write(servoPos);
      servo5.write(servoPos);
      delay(10);
    }
  }
}
