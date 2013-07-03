---
published: true
layout: post
title: "Day Two: Communication, Digital I/O"
date: 2013-07-16T14:29:21.000Z
categories: class
---

### Handouts

* First schematic:
  https://github.com/collexion/arduinoclass/raw/master/Day2/ButtonSchematic.pdf
* Analog circuitry:
  https://github.com/collexion/arduinoclass/raw/master/Day2/ButtonSchematicAnalog.pdf

### Overview

* Welcome: Breadboard a button and LED
* Serial Communications
* Digital Input: button press toggles LED
* Digitial Dirtiness: counting button presses
* Differences Between Digital and Analog: button inline with LED
* Outtro: Build LED Throwies

### TODO

* Preperation: Acquire CR2032 batteries, LEDs, and magnets for throwies
* Slides: Data types (i.e. strings vs ints)
* Slides: Power levels and digital interpretation (button debouncing)
* Slides: Analog vs Digital (maybe TTL voltages, etc)
* Sketch: LED and button debugger
* Sketch: Serial output
* Sketch: Serial Input to LED status
* Sketch: Serial Input to LED status
* Sketch: Button press counter and serial reporting

### Breadboard a button and LED

* Build breadboard according to the first schematic in handout
* Have all Arduinos with a dubugging program installed
* Students breadboard the button and led
* Press the button when the LED lights up, debugging programs prints "SUCCESS" to serial
* Everyone gets a sticker!

### Serial Communications

* Show the debugging program example for how to write to the serial console
* Students write a sketch to print "Hello, World"
* Everyone gets a sticker!
* Read serial input, compare to expected string ("1" to turn on, "0" to turn off)
* Everyone gets a sticker!
* Sidebar: Data types -- read in bytes, comparte to strings that look like numbers

### Digital Dirtiness: Debouncing

* make a counter to record the number of times a button is pressed
* continuously print the count to serial monitor
* press the button 10 times
* check the count
* Everyone gets a sticker!
* Explain power levels & digital interpretation

### Digital vs Analog

* Use a button to interrupt the power to a LED, via Fritzing diagram
* Everyone gets a sticker!
* No uC needed (it is just supplying power)
* Tomorrow will deal with analog components, things that deal with the amount of power, not just switching
* Examples of Ananlog effects: volume, brightness

### Outtro: Analog device

* Build an LED throwie
* Everyone gets and LED throwie!
