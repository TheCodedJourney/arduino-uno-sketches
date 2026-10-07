# Arduino Uno Sketches

A collection of Arduino sketches (`.ino`) for the Arduino Uno.

## Layout

The Arduino IDE requires each sketch to live in a folder with the same name:

```
SketchName/
  SketchName.ino
```

## Uploading

Open the `.ino` file in the Arduino IDE, select **Tools → Board → Arduino Uno** and the correct port, then click **Upload**.

Or with [arduino-cli](https://arduino.github.io/arduino-cli/):

```bash
arduino-cli compile --fqbn arduino:avr:uno Blink
arduino-cli upload -p /dev/cu.usbmodemXXXX --fqbn arduino:avr:uno Blink
```

## Sketches

| Sketch | Description |
| --- | --- |
| [Blink](Blink/Blink.ino) | Blinks the onboard LED on pin 13 |
