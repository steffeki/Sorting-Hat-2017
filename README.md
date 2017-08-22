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

Note: The names of the files will need to be changed to something shorter (ie. A1.wav). If the file name is too long, it will not play.

# Build Instructions

In this section, it is important to not only discuss the hardware used, but also the aesthetic choices made while constructing the Sorting Hat because for a project like this, appearance is paramount.

Here is a schematic for the hardware of Sorting Hat:

![alt text][img2]

[img2]: https://github.com/steffeki/Sorting-Hat-2017/blob/master/img/sorting_hat_schematic.jpg "Sorting Hat Schematic"

Step 1: You will need to construct the basic shape of the hat. This can be done using poster board and foam board.
* Create the cone out of the poster board.
* Draw the appearance of the Sorting Hat on it.
* Cut the cone into three separate pieces at the mouth and the eyes, with an additional partial cut at the top.
* Using the foam board, create platforms to place at the bottom and top of all three pieces (with the exception of the bottom of the hat).
* Once these platforms have been added to the hat, use some sort of fabric to glue the back of all three pieces together, creating a single piece.

This is what your hat should look like by the end of this step:

![alt text][img3]

[img3]: https://github.com/steffeki/Sorting-Hat-2017/blob/master/img/basic_hat_front.JPG "Hat from Front"

![alt text][img4]

[img4]: https://github.com/steffeki/Sorting-Hat-2017/blob/master/img/basic_hat_back.JPG "Hat from Back"

Step 2: Now it is time to add the servo motors.
* Follow the schematic to connect the five servos to the Arduino.
* Test the servos with the testing_servos.ino program in the examples folder to ensure they are working.
* Once you know they work and how they work, you can glue them into the hat.
* You will glue one in the top, two in the eyes, and two in the mouth.
* Following Jegatheesan's tutorial, you can create links to connect the servos to the platforms above them.
* Once you have added the links, test the servos again with the testing_servos.ino program.

Here is what your servos should look like once complete:

![alt text][img5]

[img5]: https://github.com/steffeki/Sorting-Hat-2017/blob/master/img/top.JPG "Top"

![alt text][img6]

[img6]: https://github.com/steffeki/Sorting-Hat-2017/blob/master/img/eyes.JPG "Eyes"

![alt text][img7]

[img7]: https://github.com/steffeki/Sorting-Hat-2017/blob/master/img/mouth.JPG "Mouth"

Step 3: The next piece to add is the touch pad.
* Follow the schematic to connect the Adafruit 5-pad capacitive touch sensor to the Arduino.
* Test the touch sensor using the testing_touchpad.ino program in the examples folder.
* Using aluminum foil, you can create a larger touch pad for the hat.
* Place the input wire in the foil.
* Glue the foil on the inside of the hat at the front.
* Test the touch pad again using the testing_touchpad.ino program.

Here is what the touch pad should look like:

![alt text][img8]

[img8]: https://github.com/steffeki/Sorting-Hat-2017/blob/master/img/touch_pad.JPG "Touch Pad"

Step 4: Add the micro SD card and speaker.
* Upload the audio files to the micro SD card.
* Follow the schematic to connect the micro SD card reader and speaker to the Arduino.
* Test the card reader and the speaker using the testing_audio.ino program in the examples folder.
* Once you know they are working, glue the speaker down in the mouth of the Sorting Hat.

Step 5: Add the rim of the hat and the fabric.
* Create the rim of the hat out of the same poster board as before.
* If you can, place the Arduino in the mouth. If there's not enough room, you'll have to put in underneath the hat, above where it will sit on a person's head.
* Make sure to tape the cord for the Arduino to the rim.
* Now you can start gluing or sewing the fabric onto the Sorting Hat. It's also not a bad idea to add some cushioning to the bottom of the hat to make it more comfortable for wearing.
* From this point forward, it is up to you how to proceed with the appearance of the hat.
* Once you are done, you can upload the sorting_hat_2017.ino code from the build folder.

Here is roughly what your finished Arduino should look like:

![alt text][img9]

[img9]: https://github.com/steffeki/Sorting-Hat-2017/blob/master/img/arduino.JPG "Arduino"

And you're done! Congrats, you have your very own Sorting Hat.

# Usage

Here are the instructions on how to use the device once it has been completed:

- Plug the Arduino into the computer.
- Upload the code sorting_hat_2017.ino to the Arduino if it has not already been done.
- Place the Sorting Hat on someone's head to activate the touch sensor.
- The hat will then begin to speak and move until the person has been "sorted" into a house.
- Once the person has been sorted, there will be five seconds to remove the hat before the program loops again.
- And that's all there is to it! Unplug the hat from the computer when finished.

# Team

This project was built by Kim Steffenhagen.
