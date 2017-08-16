# Sorting Hat [v1.0]

This repository is one example of how a person can build their own moving, talking Sorting Hat. There are a few different Sorting Hats out there with different levels of complexity. I would like to propose my own, which is easy for beginners and relatively inexpensive.

This project specifically is a Sorting Hat that uses a touch sensor for activation, servo motors for movement, and a mirco SD card/speaker for audio. It was built for a computer science class as a summer semester project.

# Repository Contents

The following is a list of the contents of this repository:

* /src - This is where you'll find all the software, including some programs for testing and the final program (.ino).
* /README.md

# Requirements and Materials

The following is a list of required libraries and hardware:

Libraries:
-

* ServoTimer2 Library https://github.com/nabontra/ServoTimer2
* SD Library (included with Arduino IDE)
* TMRpcm Library https://github.com/TMRh20/TMRpcm

Hardware:
-

* 1 x Arduino Uno 
* 1 x breadboard
* 5 x servo motors
* 1 x touch sensor (AT42QT1070)
* 1 x mirco SD card
* 1 x mirco SD card reader
* 1 x speaker
* 1 x 560 ohm resistor
* 1 x transistor
* Wires to connect everything

Audio:
-

You will also need audio files for the Sorting Hat, which can be found here:
https://github.com/Bachmann1234/sortinghat/tree/master/audio

# Build Instructions

# Usage

Here are the instructions on how to use the device once it has been completed:

- Plug your Arduino into the computer.
- Upload the code sorting_hat_2017.ino to the Arduino.
- Place the Sorting Hat on someone's head to activate the touch sensor.
- The hat will then begin to speak and move until the person has been "sorted" into a house.
- Once the person has been sorted, you have five seconds to remove the hat before the program loops again.
- And that's all there is to it! Unplug the hat from the computer when you are done.

# Team

This project was built by Kim Steffenhagen.
