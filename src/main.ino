
#include <Servo.h>

// 5-Axis Robotic Arm
// Controller: Arduino Uno
// Actuators: 5 Servo Motors

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;

// Servo signal pins
const int servoPins[5] = {3, 5, 6, 9, 10};

Servo* servos[5] = {
  &servo1, &servo2, &servo3, &servo4, &servo5
};

int servoPositions[5] = {90, 90, 90, 90, 90};

void setup() {
  Serial.begin(9600);

  for (int i = 0; i < 5; i++) {
    servos[i]->attach(servoPins[i]);
    servos[i]->write(servoPositions[i]);
  }

  Serial.println("5-Axis Robotic Arm Initialized");
}

void loop() {
  // Enter commands through Serial Monitor:
  // Format: joint,angle
  // Example: 1,90
  if (Serial.available()) {
    int joint = Serial.parseInt();
    int angle = Serial.parseInt();

    if (joint >= 1 && joint <= 5 &&
        angle >= 0 && angle <= 180) {

      servoPositions[joint - 1] = angle;
      servos[joint - 1]->write(angle);

      Serial.print("Joint ");
      Serial.print(joint);
      Serial.print(" moved to ");
      Serial.println(angle);
    }

    while (Serial.available()) {
      Serial.read();
    }
  }
}
