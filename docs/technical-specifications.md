# Technical Specifications

## Project Overview

The 5-Axis Robotic Arm is an Arduino Uno-based robotic system designed to demonstrate multi-joint movement using servo motor actuation.

## Controller Specifications

| Parameter | Specification |
|---|---|
| Microcontroller | Arduino Uno |
| Programming Language | Arduino C/C++ |
| Servo Control Library | Servo.h |
| Number of Controlled Servos | 5 |
| Serial Communication | USB Serial |
| Serial Baud Rate | 9600 |

## Actuator Specifications

| Parameter | Specification |
|---|---|
| Servo Type 1 | SG90 Micro Servo |
| SG90 Quantity | 3 |
| Servo Type 2 | MG996R High-Torque Servo |
| MG996R Quantity | 2 |
| Total Servo Motors | 5 |

## Control Specifications

- Individual control of five servo channels
- Serial Monitor-based joint control
- Joint selection using numeric commands
- Servo angle command range: 0–180 degrees in the current starter firmware
- Default startup position: 90 degrees

## Pin Configuration

| Servo Channel | Arduino Pin |
|---|---|
| Servo 1 | D3 |
| Servo 2 | D5 |
| Servo 3 | D6 |
| Servo 4 | D9 |
| Servo 5 | D10 |

## Power Requirements

- Dedicated regulated external supply for servo motors
- Common ground between Arduino and servo power supply
- Supply voltage must be compatible with both servo models
- Supply current capacity must account for simultaneous servo movement and peak current demand

Final power ratings must be verified using the actual servo datasheets.

## Software Architecture

1. Initialize the Arduino Uno.
2. Attach the five servo channels.
3. Set the initial servo positions.
4. Read joint and angle commands through Serial Monitor.
5. Validate the joint number and angle.
6. Send the requested position to the selected servo.

## Development Status

- Arduino Uno control firmware prepared.
- Five servo channels defined.
- Serial-based joint control implemented.
- Hardware testing and movement validation remain necessary.

## Future Improvements

- Joystick-based control
- Wireless robotic arm operation
- Pick-and-place functionality
- Improved joint positioning
- Inverse kinematics
- Object detection and automation

## Important Note

This document describes the proposed hardware configuration and current starter firmware. Actual performance, torque, movement range, and electrical ratings require hardware verification.