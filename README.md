Arduino Music
===

## Installing

- Clone this repository recursively with `git clone --recursive https://github.com/shvelo/arduino-music.git`
- Run `make` to rebuild `miditones` for your system

## Generating a sketch
`ruby generate.rb file.mid`

This will make a directory with the sketch in it, just open with Arduino IDE and upload.

## Connecting
>   The easiest way to hear the music is to connect each of the output pins to a resistor
    (500 ohms, say).  Connect other ends of the resistors together and then to one
    terminal of an 8-ohm speaker.  The other terminal of the speaker is connected to
    ground.  No other hardware is needed!  If you are going to connect to an amplifier,
    you should DC-isolate the signal using a capacitor.


## Uses libraries from LenShustek
PlayTune from https://github.com/LenShustek/arduino-playtune   
MidiTones from https://github.com/LenShustek/miditones




# HI
You probably want to do this
~~~bash
arduino core update-index
arduino core install arduino:avr
~~~

