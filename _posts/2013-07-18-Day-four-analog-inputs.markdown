---
layout: post
title:  "Day Four: Analog inputs & space tour"
date:   2013-07-18 14:29:21
categories: class
---

### Handouts

* [Knob + LED
  Schematic](https://github.com/collexion/arduinoclass/raw/master/Day4/KnobSchematic.pdf)

### Overview

* Read levels from Potentiometer to serial
* Convert from potentiometer to LED brightness
* Discuss temparature sensing
* Collexion Visit!

### TODO

* Preperation: Make sure the space is cooled, demos are ready
* Sketch: read potentiometer levels in a loop and print serial
* Sketch: set LED brightness from pot input
* Demo: print something on makerbot
* Demo: draw something with CNC
* Demo: temperature sensor
* Demo: lightbar

### Read levels from kno (potentiometer), display via serial

* Breadboard a knob and LED from schematic (only knob is important now)
* Build & run [the
  sketch](https://raw.github.com/collexion/arduinoclass/master/Day4/KnobToSerial/KnobToSerial.ino)
* See what min & max values are, discuss binary numbers again
* Everyone gets a sticker!

### Convert from a potentiometer to LED brightness

* Using same breadboard [from
  before](https://github.com/collexion/arduinoclass/raw/master/Day4/KnobSchematic.pdf)
* convert from x/1024 to x/256 for PWM (using map function)
* pwm out the led port
* Run the sketch
  ([Example](https://raw.github.com/collexion/arduinoclass/master/Day4/KnobToLED/KnobToLED.ino))
* Everyone gets a sticker!

### Temperature sensing theory

* measuring voltage differences
* there are now IC to do this as well

### Collexion Visit!

* Arduino bits: LED strip lights, temperature sensing
* Other bits: CNC, 3d printing, entry system
