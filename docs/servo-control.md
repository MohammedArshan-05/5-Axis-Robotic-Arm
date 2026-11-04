Servo Control System

1. Overview

The 5-Axis Robotic Arm uses five servo motors controlled by an Arduino Uno. Each servo is assigned an individual digital signal pin to control its joint position.

2. Servo Configuration

Servo Channel	Motor Model	Arduino Pin
Servo 1	SG90	D3
Servo 2	SG90	D5
Servo 3	SG90	D6
Servo 4	MG996R	D9
Servo 5	MG996R	D10

3. Control Library

The Arduino Servo.h library is used to generate servo control signals.

4. Serial Communication

The current firmware receives commands through the Arduino Serial Monitor.

Baud Rate: 9600

Command Format:

joint,angle

Examples:

Command	Operation
1,90	Move Servo 1 to 90°
2,45	Move Servo 2 to 45°
3,120	Move Servo 3 to 120°
4,90	Move Servo 4 to 90°
5,180	Move Servo 5 to 180°

The current starter firmware accepts joint numbers from 1 to 5 and angle values from 0° to 180°.

Actual mechanical travel limits may be narrower.

5. Control Logic

1. Initialize the Arduino Uno.
2. Attach all five servo objects to their assigned pins.
3. Set the initial servo positions to 90°.
4. Read incoming serial commands.
5. Extract the joint number and target angle.
6. Validate the command.
7. Move the selected servo to the requested angle.

6. Example Arduino Code

The following example represents the current starter control approach:

#include <Servo.h>
Servo servos[5];
const int servoPins[5] = {3, 5, 6, 9, 10};
void setup() {
  Serial.begin(9600);
  for (int i = 0; i < 5; i++) {
    servos[i].attach(servoPins[i]);
    servos[i].write(90);
  }
  Serial.println("5-Axis Robotic Arm Ready");
}
void loop() {
  if (Serial.available() > 0) {
    int joint = Serial.parseInt();
    int angle = Serial.parseInt();
    if (joint >= 1 && joint <= 5 &&
        angle >= 0 && angle <= 180) {
      servos[joint - 1].write(angle);
      Serial.println("Servo position updated");
    } else {
      Serial.println("Invalid command");
    }
  }
}

7. Important Considerations

* Use an external regulated power supply for the servo motors.
* Connect the Arduino ground and external supply ground.
* Do not exceed the voltage ratings of the servos.
* Verify each servo’s mechanical limits before testing.
* Avoid sudden movements under heavy mechanical loads.

8. Future Improvements

* Joystick-based control
* Wireless servo control
* Smooth joint movement
* Coordinated multi-axis movement
* Inverse kinematics
* Automated pick-and-place operations

9. Development Status

Basic five-channel servo control has been prepared. Physical testing, joint calibration, and coordinated movement validation remain future development tasks.