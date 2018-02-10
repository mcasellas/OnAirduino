# OnAirduino

This project uses the auxiliary output of a mixing table to trigger an ON AIR light and, in the future, stops a pair of speakers to avoid Audio feedback

## Material:

- Mixing desk
- Jack cable
- Jack connector
- Arduino nano
- Relay
- Jumping Wires
- Breadboard or a prototype board
- Case
- 5V Adapter (USB Charger)
- USB Cable

## Instructions:

1. Upload the sketch provided in `/code` folder to your Arduino.
2. Connect the ground of your mixing desk cable to the ground `GND` pin of the Arduino.
4. Connect the `tip` of the mixing desk cable to the input `A0` pin of the Arduino.
5. Connect the digital `2` pin to the corresponding relay `control pin` and connect the `5V` and the `GND` of the relay to the Arduino.
