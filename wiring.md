# Robotic Arm Wiring

## Controller
Arduino Uno

## Servo Signal Connections

| Servo | Arduino Pin |
|---|---|
| Servo 1 | D3 |
| Servo 2 | D5 |
| Servo 3 | D6 |
| Servo 4 | D9 |
| Servo 5 | D10 |

These signal pins match the current `src/main.ino` firmware.

## Servo Power Connections

All five servos must receive power from a separate regulated DC supply.

- External supply positive → Servo power wires
- External supply negative → Servo ground wires
- Arduino GND → External supply negative
- Arduino digital pins → Individual servo signal wires

## Basic Wiring Diagram

                 ARDUINO UNO
               +-------------+
               |             |
               | D3  --------|---- Servo 1 Signal
               | D5  --------|---- Servo 2 Signal
               | D6  --------|---- Servo 3 Signal
               | D9  --------|---- Servo 4 Signal
               | D10 --------|---- Servo 5 Signal
               |             |
               | GND --------|---------+
               +-------------+         |
                                       |
             EXTERNAL REGULATED        |
                DC SUPPLY              |
               +-------------+         |
               | +V ---------|---- Servo Power
               | GND --------|---------+
               +-------------+

## Important Safety Instructions

1. Never power five servos directly from the Arduino Uno 5V output.
2. Use a regulated supply with sufficient current capacity.
3. Connect all grounds together.
4. Do not connect the external supply positive output to the Arduino 5V pin.
5. Check servo polarity and voltage ratings before powering the circuit.
6. Avoid operating the servos under mechanical load until the power supply is verified.

## Power Supply Selection

The final voltage and current rating must be selected after checking the exact servo specifications and combined current demand.

The wiring diagram is a conceptual reference, not a verified hardware installation.