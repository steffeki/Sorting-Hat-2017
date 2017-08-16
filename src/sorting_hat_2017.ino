// sorting_hat_2017.ino
//
// This is the main program to run the Sorting Hat project.
//

// Add the necessary libraries
#include <ServoTimer2.h>
#include <SD.h>
#include <TMRpcm.h>

// Define pin for touch sensor
#define TOUCH_SENSOR 8
// Define pin for SD chip
#define SD_ChipSelectPin 10

// Define the servos
ServoTimer2 top;
ServoTimer2 eye1;
ServoTimer2 eye2;
ServoTimer2 mouth1;
ServoTimer2 mouth2;

// Servo position in microseconds
int servoPos = 1000;

// Create a TMRpcm object
TMRpcm tmrpcm;

// Initialize random number variables
long randNumber1;
long randNumber2;
long randNumber3;

void setup() {
  // Define servo signal inputs (Digital PWM 3-4-5-6-7)
  top.attach(3);
  eye2.attach(4);
  eye1.attach(5);
  mouth2.attach(6);
  mouth1.attach(7);
  
  // Define touch sensor as input (Digital PWM 8)
  pinMode(TOUCH_SENSOR, INPUT);

  // Define speaker pin
  tmrpcm.speakerPin = 9;
  tmrpcm.volume(7);

  Serial.begin(9600);

  // See if the card is present and can be initialized
  if (!SD.begin(SD_ChipSelectPin)) {
    Serial.println("SD fail");
    return;
  }
  
  // Get a reading from analog 0
  randomSeed(analogRead(A0));
}

void loop() {
  // Read the current value of the sensor
  int sensorValue = digitalRead(TOUCH_SENSOR);
  // Generate random number 1 (number from 1 to 5)
  randNumber1 = random(1,6);
  // Generate random number 2 (number from 1 to 2)
  randNumber2 = random(1,3);
  // Generate random number 3 (number from 1 to 4)
  randNumber3 = random(1,5);
  
  // If the touch sensor is in contact with skin,
  // activate the servos and audio
  if (!sensorValue) {
    // Play first audio track based on the
    // first random number
    if (randNumber1 == 1) {
      // Play file A1.wav
      tmrpcm.play("A1.wav");

      // Delay until audio begins
      delay(1100);

      // Move the servos as audio plays
      for (int i = 0; i < 3; i++) {
        // Move servos up
        top.write(1200);
        mouth1.write(1200);
        mouth2.write(1100);
        eye1.write(1200);
        eye2.write(1100);
        delay(500);

        // Move servos down
        top.write(1500);
        mouth1.write(1500);
        mouth2.write(1500);
        eye1.write(1400);
        eye2.write(1400);
        delay(500);
      }
    }
    else if (randNumber1 == 2) {
      // Play file A2.wav
      tmrpcm.play("A2.wav");

      // Delay until audio begins
      delay(500);

      // Move the servos as audio plays
      for (int i = 0; i < 2; i++) {
        // Move servos up
        top.write(1200);
        mouth1.write(1200);
        mouth2.write(1100);
        eye1.write(1200);
        eye2.write(1100);
        delay(500);

        // Move servos down
        top.write(1500);
        mouth1.write(1500);
        mouth2.write(1500);
        eye1.write(1400);
        eye2.write(1400);
        delay(500);
      }
    }
    else if (randNumber1 == 3) {
      // Play file A3.wav
      tmrpcm.play("A3.wav");

      // Move the servos as audio plays
      for (int i = 0; i < 5; i++) {
        // Move servos up
        top.write(1200);
        mouth1.write(1300);
        mouth2.write(1200);
        eye1.write(1300);
        eye2.write(1200);
        delay(500);

        // Move servos down
        top.write(1500);
        mouth1.write(1400);
        mouth2.write(1400);
        eye1.write(1500);
        eye2.write(1400);
        delay(500);
      }
    }
    else if (randNumber1 == 4) {
      // Play file A4.wav
      tmrpcm.play("A4.wav");

      // Delay until audio begins
      delay(800);

      // Move the servos as audio plays
      for (int i = 0; i < 2; i++) {
        // Move servos up
        top.write(1200);
        mouth1.write(1200);
        mouth2.write(1100);
        eye1.write(1200);
        eye2.write(1200);
        delay(500);

        // Move servos down
        top.write(1500);
        mouth1.write(1400);
        mouth2.write(1400);
        eye1.write(1500);
        eye2.write(1400);
        delay(500);
      }
    }
    else {
      // Play file A5.wav
      tmrpcm.play("A5.wav");

      // Delay until audio begins
      delay(350);

      // Move the servos as audio plays
      for (int i = 0; i < 8; i++) {
        // Move servos up
        top.write(1200);
        mouth1.write(1200);
        mouth2.write(1100);
        eye1.write(1200);
        eye2.write(1200);
        delay(500);

        // Move servos down
        top.write(1500);
        mouth1.write(1400);
        mouth2.write(1400);
        eye1.write(1500);
        eye2.write(1400);
        delay(500);

        // Move servos up
        top.write(1300);
        mouth1.write(1200);
        mouth2.write(1100);
        eye1.write(1200);
        eye2.write(1100);
        delay(300);

        // Move servos down
        top.write(1500);
        mouth1.write(1500);
        mouth2.write(1500);
        eye1.write(1400);
        eye2.write(1300);
        delay(300);
      }
    }

    // Delay between audio tracks
    delay(1500);

    // Play second audio track
    if (randNumber2 == 1) {
      // Play file B1.wav
      tmrpcm.play("B1.wav");

      // Move the servos as audio plays
      for (int i = 0; i < 2; i++) {
        // Move servos up
        top.write(1200);
        mouth1.write(1200);
        mouth2.write(1100);
        eye1.write(1200);
        eye2.write(1200);
        delay(200);

        // Move servos down
        top.write(1500);
        mouth1.write(1400);
        mouth2.write(1400);
        eye1.write(1500);
        eye2.write(1400);
        delay(200);
      }
    }
    else {
      // Play file B2.wav
      tmrpcm.play("B2.wav");

      // Move the servos as audio plays
      for (int i = 0; i < 4; i++) {
        // Move servos up
        top.write(1200);
        mouth1.write(1200);
        mouth2.write(1100);
        eye1.write(1200);
        eye2.write(1200);
        delay(400);

        // Move servos down
        top.write(1500);
        mouth1.write(1400);
        mouth2.write(1400);
        eye1.write(1500);
        eye2.write(1400);
        delay(300);
      }
    }

    // Delay between tracks
    delay(1500);

    // Play third audio track
    if (randNumber3 == 1) {
      // Play file C1.wav
      tmrpcm.play("C1.wav");

      // Move the servos as audio plays
      for (int i = 0; i < 2; i++) {
        // Move servos up
        top.write(1200);
        mouth1.write(1200);
        mouth2.write(1100);
        eye1.write(1200);
        eye2.write(1200);
        delay(400);

        // Move servos down
        top.write(1500);
        mouth1.write(1300);
        mouth2.write(1300);
        eye1.write(1400);
        eye2.write(1300);
        delay(300);
      }
    }
    else if (randNumber3 == 2) {
      // Play file C2.wav
      tmrpcm.play("C2.wav");

      // Delay until audio begins
      delay(100);

      // Move the servos as audio plays
      for (int i = 0; i < 2; i++) {
        // Move servos up
        top.write(1200);
        mouth1.write(1200);
        mouth2.write(1100);
        eye1.write(1200);
        eye2.write(1200);
        delay(400);

        // Move servos down
        top.write(1500);
        mouth1.write(1300);
        mouth2.write(1300);
        eye1.write(1400);
        eye2.write(1300);
        delay(300);
      }
    }
    else if (randNumber3 == 3) {
      // Play file C3.wav
      tmrpcm.play("C3.wav");

      // Delay until audio begins
      delay(100);

      // Move the servos as audio plays
      for (int i = 0; i < 2; i++) {
        // Move servos up
        top.write(1200);
        mouth1.write(1200);
        mouth2.write(1100);
        eye1.write(1200);
        eye2.write(1200);
        delay(400);

        // Move servos down
        top.write(1500);
        mouth1.write(1300);
        mouth2.write(1300);
        eye1.write(1400);
        eye2.write(1300);
        delay(300);
      }
    }
    else {
      // Play file C4.wav
      tmrpcm.play("C4.wav");

      // Move servos up
      top.write(1200);
      mouth1.write(1200);
      mouth2.write(1100);
      eye1.write(1200);
      eye2.write(1200);
      delay(400);

      // Move servos down
      top.write(1500);
      mouth1.write(1300);
      mouth2.write(1300);
      eye1.write(1400);
      eye2.write(1300);
      delay(300);
    }

    // Reset servos to lowest position
    top.write(1500);
    mouth1.write(1500);
    mouth2.write(1500);
    eye1.write(1500);
    eye2.write(1500);

    // Delay to allow time to remove the hat
    delay(5000);
  }
}
