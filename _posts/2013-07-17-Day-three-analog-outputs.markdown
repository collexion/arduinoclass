---
layout: post
title:  "Day Three: Analog outputs and PWM"
date:   2013-07-17 14:29:21
categories: class
---

### Overview

* Pulsing notification light
* Design a glowing mood orb
* Outtro: Bleeps & Bloops

### Slides

* [Analog and PWM Slides](https://docs.google.com/presentation/d/12bd8uHvKZANBWFjK9huWuNpiCIWGVpAV_4cKFGDwwpI)

* Sketch: 3-state PWM (20% intensity, 50% intensity, 100% intensity)
* Sketch: Color Fading for tri-color LED
* Sketch: Making a series of beeps at different lengths and pitches
* Schematics: LED on PWM pin
* Schematics: Tri-color LED on many PWM pins
* Schematics: Piezo speaker on PWM pin

### Pulsing notification light

* [Pulsing LED Diagram](https://raw.github.com/collexion/arduinoclass/master/Day3/Analog_LED_Pulsing/Analog_LED_Pulsing_bb.pdf)
* [Pulsing LED Sketch](https://raw.github.com/collexion/arduinoclass/master/Day3/Analog_LED_Pulsing/Analog_LED_Pulsing.ino)
* Breadboard an LED to a PWM port on Arduino
* Output PWM in three states: off, medium, bright
* Everyone gets a sticker!
* Sidebar: number systems -- why is 100% bright = 255 on the PWM scale?

### Design a glowing mood orb

* [RGB LED Mood Diagram](https://raw.github.com/collexion/arduinoclass/master/Day3/Analog_LED_RGB/Analog_LED_RGB_bb.pdf)
* [RGB LED Mood Sketch](https://raw.github.com/collexion/arduinoclass/master/Day3/Analog_LED_RGB/Analog_LED_RGB.ino)
* How 3-color LEDs work
* Breadboard a 3-color LED
* Fade between colors
* Everyone gets a sticker!
* Fade bettwen colors, and at each transition dim & brighten
* Everyone gets two stickers!

### Outtro: Bleeps & Bloops

* [Digital Tune Player Diagram](https://raw.github.com/collexion/arduinoclass/master/Day3/toneMelody/toneMelody_bb.pdf)
* [Digital Tune Player Sketch](https://raw.github.com/collexion/arduinoclass/master/Day3/toneMelody/toneMelody.ino)
* [Digital Tune Player Sketch - Header](https://raw.github.com/collexion/arduinoclass/master/Day3/toneMelody/pitches.h)
* Wire up a piezo speaker
* Make some noise at different pitches
* Play Marry Had a Little Lamb
* Everyone who can give the teachers a headache gets a sticker!

### Bonus: Light Theremin

* [Light Theremin Diagram](https://raw.github.com/collexion/arduinoclass/master/Day3/tonePitchFollower/tonePitchFollower_bb.pdf)
* [Light Theremin Sketch](https://raw.github.com/collexion/arduinoclass/master/Day3/tonePitchFollower/tonePitchFollower.ino)
* Add light monitoring circuit to analog inputs
* Make some noise at different pitches
* Play some Portishead
* Everyone who can chill the teachers gets a sticker!
