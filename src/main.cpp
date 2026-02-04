#include <Arduino.h>
#include <Servo.h>
Servo myServo;
void setup() {
    // write your initialization code here
    Serial.begin(9600);
    myServo.attach(10); // Attach servo to pin 10
    Serial.println("Servo initiate");
}

void loop() {
    // write your code here
    for (int angle = 0; angle <= 180; angle += 10) { // Move from 0 to 180 degrees
        myServo.write(angle);
        Serial.print("Angle: ");
        Serial.print(angle);
        Serial.println(" degrees");
        delay(500); // Wait for the servo to reach the position
    }
    for (int angle = 180; angle >= 0; angle -= 10) { // Move from 180 to 0 degrees
        myServo.write(angle);
        Serial.print("Angle: ");
        Serial.print(angle);
        Serial.println(" degrees");
        delay(500); // Wait for the servo to reach the position.
    }
}