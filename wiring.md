Wiring and Connections — 5-Axis Robotic Arm

Arduino Uno Pin Mapping

Servo	Arduino Pin
Servo 1	D3
Servo 2	D5
Servo 3	D6
Servo 4	D9
Servo 5	D10

Wiring Diagram

Arduino UNO                  Servo Motors
D3  ----------------------> Servo 1 Signal
D5  ----------------------> Servo 2 Signal
D6  ----------------------> Servo 3 Signal
D9  ----------------------> Servo 4 Signal
D10 ----------------------> Servo 5 Signal
External Servo Power Supply
Supply (+) ---------------> Servo V+
Supply (-) ---------------> Servo GND
Arduino GND --------------> Common GND

Power Requirements

* Use a separate regulated power supply for the servos.
* Do not power five servos through the Arduino 5V pin.
* Connect Arduino GND and external supply GND.
* Never connect external servo supply positive directly to Arduino 5V.
* Confirm servo voltage and current requirements before powering.

Status

Signal pin assignments match the current Arduino firmware. Exact power ratings depend on the servo models.