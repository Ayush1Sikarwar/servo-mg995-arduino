#include <Arduino.h>
#include <Servo.h>
Servo myServo;
void setup() {
    Serial.begin(9600);
    myServo.attach(10); // Attach servo to pin 10
    Serial.println("Servo ");
}

void loop() {
// write your code here
}