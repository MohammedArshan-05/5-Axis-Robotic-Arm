# Hardware Components

## Main Controller
- Arduino Uno – 1

## Actuators
- SG90 Micro Servo Motor – 3
- MG996R High-Torque Servo Motor – 2

## Total Actuators
- 5 Servo Motors

## Hardware Overview

| Component | Quantity | Purpose |
|---|---:|---|
| Arduino Uno | 1 | Main controller |
| SG90 Servo | 3 | Lightweight joint movement |
| MG996R Servo | 2 | Higher-torque joint movement |
| External Power Supply | 1 | Dedicated servo power |

## Servo Motor Details

### SG90 Micro Servo
- Compact and lightweight servo
- Used for lower-load movements
- Typical operating voltage: 4.8–6V

### MG996R High-Torque Servo
- Higher-torque servo
- Used for joints requiring greater force
- Common operating range: 4.8–7.2V

Actual voltage and current limits must be verified against the specific servo manufacturer's datasheet.

## Important Notes
- Servo motors require an external regulated power supply.
- Do not power all five servos directly from the Arduino Uno 5V pin.
- Connect the external supply ground to Arduino GND.
- Verify servo wire polarity before connecting.