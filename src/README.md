Source Code – 5-Axis Robotic Arm

Overview

This directory contains the Arduino firmware for controlling the five-axis robotic arm.

The firmware uses the Arduino Uno and the Servo library to control five servo motors independently.

Main Firmware

main.ino

Hardware Configuration

Component	Quantity
Arduino Uno	1
SG90 Servo	3
MG996R Servo	2

Pin Configuration

Servo	Arduino Pin
Servo 1	D3
Servo 2	D5
Servo 3	D6
Servo 4	D9
Servo 5	D10

Software Requirements

* Arduino IDE
* Arduino Servo library
* Arduino Uno board support

Firmware Functions

* Initialize five servo motors.
* Set initial servo positions to 90 degrees.
* Receive commands through Serial Monitor.
* Identify the selected servo.
* Validate joint number and angle.
* Execute individual servo movements.

Serial Command Format

joint,angle

Examples:

1,90
2,45
3,120
4,90
5,180

Upload Instructions

1. Open main.ino in Arduino IDE.
2. Connect the Arduino Uno through USB.
3. Select Arduino Uno under Tools → Board.
4. Select the correct COM port.
5. Upload the firmware.
6. Open Serial Monitor.
7. Set baud rate to 9600.
8. Enter a joint number and angle.

Safety Notes

* Use an appropriate external regulated power supply for the servos.
* Connect the external supply ground to Arduino GND.
* Verify servo voltage and current ratings.
* Test servo movement without mechanical load first.

Development Status

Basic servo-control firmware is prepared. Hardware testing and movement validation are still required.