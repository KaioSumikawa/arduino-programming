/*
  Project: Gate Control with Servo via Bluetooth
  Author: Marcelo L. O. Santos
  Date: 07/06/2025
  Hardware: Arduino + Servo + Bluetooth Module HC-05
  Description: Receives commands from the phone ('A' to open and 'F' to close the gate).
*/

#include <Servo.h>              // Library to control the servo motor
#include <SoftwareSerial.h>     // Library to create a virtual serial port

Servo gateServo;               // Object to control the servo motor

// Create serial communication with the Bluetooth HC-05
// bluetooth(RX, TX) → Arduino pins used to receive and transmit data to the module
// Physical connections:
//     HC-05 TX → Arduino pin 10 (receives data from the Bluetooth module)
//     HC-05 RX ← Arduino pin 11 (sends data to the Bluetooth module - use voltage divider!)
// NOTE: HC-05 RX should receive a maximum of 3.3V, so use two resistors (1k + 2k) to form a voltage divider.
SoftwareSerial bluetooth(10, 11);  // Arduino RX = pin 10, TX = pin 11

bool gateOpen = false;         // Variable to store the current state of the gate

void setup() {
  gateServo.attach(9);         // Servo motor connected to digital pin 9 on Arduino
  gateServo.write(0);          // Ensure the gate starts closed

  bluetooth.begin(9600);       // Start serial communication with the Bluetooth module (9600 bps)
  Serial.begin(9600);          // Start communication with the computer via USB (serial monitor)

  Serial.println("System started. Send 'A' to open and 'F' to close the gate.");
}

void loop() {
  // Check if any data was received via Bluetooth
  if (bluetooth.available()) {
    char command = bluetooth.read();  // Read the character sent from the phone

    // Display the received command in the serial monitor
    Serial.print("Received command: ");
    Serial.println(command);

    if (command == 'A') {
      // Open the gate
      gateServo.write(180);           // Move the servo to 180 degrees
      gateOpen = true;
      Serial.println("Gate opening...");
      bluetooth.println("Gate opening...");
    }
    else if (command == 'F') {
      // Close the gate
      gateServo.write(0);             // Move the servo to 0 degrees
      gateOpen = false;
      Serial.println("Gate closing...");
      bluetooth.println("Gate closing...");
    }
    else {
      // Invalid command
      Serial.println("Unknown command.");
      bluetooth.println("Invalid command. Use 'A' or 'F'.");
    }
  }
}
