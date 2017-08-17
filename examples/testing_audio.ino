// testing_audio.ino
//
// This program can be used to test out the audio for the
// Sorting Hat after the speaker and micro SD card have
// been installed.
//

// Add the necessary libraries
#include <SD.h>
#include <TMRpcm.h>
#include <ServoTimer2.h>

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

void setup() {
  // Define servo signal inputs (Digital PWN 3-4-5-6-7)
  top.attach(3);
  eye1.attach(5);
  eye2.attach(4);
  mouth1.attach(7);
  mouth2.attach(6);

  // Define touch sensor as input (Digital PWN 8)
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
}

void loop() {
  // Read the current value of the sensor
  int sensorValue = digitalRead(TOUCH_SENSOR);

  // If the touch sensor has been activated,
  // activate the audio and servos
  if (!sensorValue) {
    // Play file C4.wav
    tmrpcm.play("C4.wav");

    // Delay until audio begins
    delay(100);

    // Move the servos up
    top.write(1200);
    mouth1.write(1200);
    mouth2.write(1100);
    eye1.write(1200);
    eye2.write(1200);
    delay(400);

    // Move the servos down
    top.write(1500);
    mouth1.write(1400);
    mouth2.write(1400);
    eye1.write(1400);
    eye2.write(1300);
    delay(300);
    
    delay(1000);
  }
}
