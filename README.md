# Sorting Hat [v1.0]

This repository is one example of how a person can build their a personal moving, talking Sorting Hat. There are a few different Sorting Hats out there with different levels of complexity. This is simply a proposal of another way which is easy for beginners and relatively inexpensive.

This project specifically is a Sorting Hat that uses a touch sensor for activation, servo motors for movement, and a mirco SD card/speaker for audio. It was built for a computer science class as a summer semester project and based off of a project from the Arduino Project Hub by user jegatheesan. The link to the original project can be found here:

https://create.arduino.cc/projecthub/jegatheesan

Here is what the final project looks like:

![alt text][img1]

[img1]: https://github.com/steffeki/Sorting-Hat-2017/blob/master/img/completed_hat.JPG "Completed Hat"

# Repository Contents

The following is a list of the contents of this repository:

* /build - This is where to find all the final software for the Sorting Hat (.ino).
* /img - This is where to find all the images contained in this README (.jpg).
* /examples - These are some example program files that can be run to test hardware (.ino).
* /README.md

# Requirements and Materials

The following is a list of required libraries and hardware:

Libraries:
-

* SD Library (included with Arduino IDE)
* ServoTimer2 Library https://github.com/nabontra/ServoTimer2
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

Audio files will also be necessary for the Sorting Hat and they can be found here:
https://github.com/Bachmann1234/sortinghat/tree/master/audio

Note: The names of the files will need to be changed to something shorted (ie. A1.wav). If the file name is too long, it will not play.

# Build Instructions

In this section, it is important to not only discuss the hardware used, but also the aesthetic choices made while constructing the Sorting Hat because for a project like this, appearance is paramount.

Step 1: You will need to construct the basic shape of the hat. This can be done using poster board and foam board.
* Create the cone out of the poster board.
* Draw the appearance of the Sorting Hat on it.
* Cut the cone into three separate pieces at the mouth, the eyes, and at the top.
* Using the foam board, create surfaces to place at the bottom and top of all three pieces (with the exception of the bottom of the hat).
* Once these surfaces have been added to the hat, use some sort of fabric to glue the back of all three pieces together, creating a single piece.

This is what your hat should look like by the end of this step:

![alt text][img2]

[img2]: https://github.com/steffeki/Sorting-Hat-2017/blob/master/img/basic_hat_front.JPG "Hat from Front"

![alt text][img3]

[img3]: https://github.com/steffeki/Sorting-Hat-2017/blob/master/img/basic_hat_back.JPG "Hat from Back"

Step 2: Now it is time to add the servo motors.

# Usage

Here are the instructions on how to use the device once it has been completed:

- Plug the Arduino into the computer.
- Upload the code sorting_hat_2017.ino to the Arduino.
- Place the Sorting Hat on someone's head to activate the touch sensor.
- The hat will then begin to speak and move until the person has been "sorted" into a house.
- Once the person has been sorted, there will be five seconds to remove the hat before the program loops again.
- And that's all there is to it! Unplug the hat from the computer when finished.

# Team

This project was built by Kim Steffenhagen.
