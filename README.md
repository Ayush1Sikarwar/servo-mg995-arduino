Servo MG995 Demo

Brief demo project that initializes and sweeps an MG995 (or similar) servo connected to a microcontroller using the Arduino Servo library. See src/main.cpp for the implementation.

Using CLion

Open the project in CLion.
Recommended to use the Arduino or PlatformIO plugin for flashing and serial monitor support.
Build/run configuration depends on your board/toolchain (Arduino CLI, PlatformIO, or custom CMake).

IDE Version

Tested with CLion 2025.3.2.

Code Overview

Entry: src/main.cpp.
Behavior:
- Initializes Serial at 9600 baud.
- Attaches a Servo object to digital pin 10 (changeable in code).
- Sweeps the servo from 0 to 180 degrees in 10° steps, then back from 180 to 0°, printing each angle to Serial.
- Main loop runs the sweep continuously; adjust delays or angles for your use case.
Key calls: myServo.attach(10); myServo.write(angle); Serial.print(...);

Libraries

- Servo (Arduino built-in Servo library)
- Arduino.h (core)

Install via Arduino Library Manager or PlatformIO library registry if required.

Dependencies

- Arduino core for your board (e.g., Arduino AVR, ESP32, ESP8266).
- Servo library (usually included with Arduino core for many platforms).
- I/O and power support from board core.

Components used with the MG995

- MG995 (or similar) hobby servo module (5V, high-torque).
- Microcontroller board (Arduino Uno / Nano / Mega, ESP8266, ESP32, etc.).
- External 5V power supply capable of supplying servo current (recommended).
- Jumper wires and breadboard.

Wiring (summary)

- MG995 VCC -> 5V external power supply (+)
- MG995 GND -> external power supply ground and microcontroller GND (common ground)
- MG995 Signal -> digital pin D10 on the microcontroller (matches myServo.attach(10) in code)
- USB -> microcontroller for programming only (do NOT power high-current servos from USB)

Power and safety notes

- MG995 draws significantly more current under load than small micro-servos. Use an external 5V supply rated for the expected current (1–2A or higher depending on load).
- Always connect grounds (MCU and servo supply) together.
- Avoid powering the servo from the MCU 5V/USB if the servo will be under load; this can cause voltage drops or damage.

Software Requirements

- CLion 2025.3.2
- Arduino toolchain: Arduino IDE or Arduino CLI, or
- PlatformIO (recommended for integrated build/flash in CLion).
- Board support package / cores for your target board.

Hardware Requirements

- 5V-capable microcontroller (match servo voltage).
- MG995 or similar high-torque servo.
- External 5V power supply (recommended: able to supply several amps for peak current).
- USB cable for programming and power (programming only if servo on external supply).
- Optional: logic level shifter if your MCU uses 3.3V signal levels (many servos accept 3.3V PWM but check datasheet).

Author

Ayush1Sikarwar (GitHub)
