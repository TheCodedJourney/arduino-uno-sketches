// Controls a servo's angle with a potentiometer.
// Wiring: pot wiper -> A0, servo signal -> pin 9.

#include <Servo.h>

Servo myServo;

const int potPin = A0;
const int servoPin = 9;

void setup() {
  myServo.attach(servoPin);
}

void loop() {
  // Read the potentiometer (0–1023)
  int potValue = analogRead(potPin);

  // Convert it to a servo angle (0–180 degrees)
  int angle = map(potValue, 0, 1023, 180, 0);
  
  // Move the servo
  myServo.write(angle);

  delay(10);
}
