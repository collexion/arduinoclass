---
published: true
layout: post
title: "Day Two: Communication, Digital I/O"
date: 2013-07-16T14:29:21.000Z
categories: class
---

### Handouts

* [Button + LED Schematic](https://github.com/collexion/arduinoclass/raw/master/Day2/ButtonSchematic.pdf)
* [Binary & Data Types Slides](https://docs.google.com/presentation/d/1yR_A3p7zKlw5DK3o3nOcD0FfpH211EEE2_l62ZOOo9Y)
* [Debouncing Slides](https://docs.google.com/presentation/d/17hWX8If7yBmvWJkEQ4riCVzp3hYwUlV-bQDXPQ74M10)
* [Analog circuitry](https://github.com/collexion/arduinoclass/raw/master/Day2/ButtonSchematicAnalog.pdf)

### Overview

* Welcome: Breadboard a button and LED
* Serial Communications
* Digital Input: button press toggles LED
* Digitial Dirtiness: counting button presses
* Differences Between Digital and Analog: button inline with LED
* Outtro: Build LED Throwies

### TODO

* Preperation: Acquire CR2032 batteries, LEDs, and magnets for throwies
* Slides: Analog vs Digital (maybe TTL voltages, etc)

### Breadboard a button and LED

* Build breadboard according to the first schematic in handout
* Have all Arduinos with a [debugging
  sketch](https://raw.github.com/collexion/arduinoclass/master/Day2/BreadboardDebug/BreadboardDebug.ino) installed
* Students breadboard the button and led
* Press the button when the LED lights up, debugging programs prints "SUCCESS" to serial
* Everyone gets a sticker!

### Serial Communications

* Show the [serial debugging program](https://github.com/collexion/arduinoclass/raw/master/Day2/SerialOut/SerialOut.ino) example for how to write to the serial console
* Students write a sketch to print "Hello, World"
* Everyone gets a sticker!
* Read serial input, compare to expected string ("1" to turn on, "0" to turn off) ([Example here](https://github.com/collexion/arduinoclass/blob/master/Day2/SerialLightToggle/SerialLightToggle.ino))
* Everyone gets a sticker!
* Sidebar: Data types -- read in bytes, comparte to strings that look like numbers ([slides](https://docs.google.com/presentation/d/1yR_A3p7zKlw5DK3o3nOcD0FfpH211EEE2_l62ZOOo9Y))

### Digital Dirtiness: Debouncing

* make a counter to record the number of times a button is pressed ([Example
  sketch](https://github.com/collexion/arduinoclass/blob/master/Day2/ButtonCount/ButtonCount.ino))
* continuously print the count to serial monitor
* press the button 10 times
* check the count
* Everyone gets a sticker!
* Explain power levels & digital interpretation
  ([slides](https://docs.google.com/presentation/d/17hWX8If7yBmvWJkEQ4riCVzp3hYwUlV-bQDXPQ74M10))

### Digital vs Analog

* Use a button to interrupt the power to a LED, via Fritzing diagram
* Everyone gets a sticker!
* No uC needed (it is just supplying power)
* Tomorrow will deal with analog components, things that deal with the amount of power, not just switching
* Examples of Ananlog effects: volume, brightness

### Outtro: Analog device

* Build an LED throwie
* Everyone gets and LED throwie!

### Further Study

* Find debouncing without loops
* Classify electronics around your house into digital and analog
* Use a 3-color LED and 3 buttons to pick a color for the LED
