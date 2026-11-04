5-Axis Robotic Arm

A servo-controlled robotic arm developed using Arduino Uno, designed to demonstrate multi-axis movement, joint positioning, and robotic manipulation.

Project Overview

This project focuses on developing a five-axis robotic arm using a combination of micro and high-torque servo motors. The Arduino Uno acts as the main controller and manages individual joint movements.

Hardware Configuration

Component	Quantity
Arduino Uno	1
SG90 Micro Servo	3
MG996R High-Torque Servo	2
Total Servo Motors	5

Key Features

* Five servo-controlled joints
* Individual joint positioning
* Serial Monitor-based control
* Arduino-based control architecture
* Expandable design for future automation

Pin Configuration

Servo Channel	Arduino Pin
Servo 1	D3
Servo 2	D5
Servo 3	D6
Servo 4	D9
Servo 5	D10

Repository Structure

5-Axis-Robotic-Arm/
├── README.md
├── components.md
├── wiring.md
├── .gitignore
├── src/
│   ├── main.ino
│   └── README.md
├── docs/
│   ├── project-overview.md
│   ├── servo-control.md
│   └── technical-specifications.md
└── images/
    └── README.md

Software

* Arduino IDE
* Arduino C/C++
* Servo.h library

Control Method

The current firmware accepts serial commands in this format:

joint,angle

Example:

1,90

This commands servo channel 1 to move to 90 degrees.

Power and Safety

The servo motors require a suitable external regulated power supply. The Arduino and servo supply grounds must be connected together.

Do not power all five servos from the Arduino Uno 5V output. Verify the exact servo voltage and current ratings before operation.

Development Status

* Arduino Uno control firmware prepared
* Five servo channels configured
* Basic serial joint control implemented
* Hardware integration and movement validation pending

Future Improvements

* Joystick control
* Wireless control
* Pick-and-place operation
* Inverse kinematics
* Object detection and automation

⸻

Project Category: Robotics | Mechatronics | Embedded Systems

Controller: Arduino Uno

Actuation: SG90 and MG996R Servo Motors