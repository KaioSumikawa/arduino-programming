// Include the Servo library to control servo motors
#include <Servo.h>

// Create a Servo object named "meuServo" to control the servo motor
Servo meuServo;

// Define the analog pins where the LDR sensors and panel are connected
const int LDRE = A0;   // Left LDR is connected to pin A0
const int LDRD = A1;   // Right LDR is connected to pin A1
const int painel = A2; // Panel light sensor (could be another LDR) is on A2

// Declare variables to store sensor readings
int leituraPainel = 0; // Value read from the panel sensor
int leituraD = 0;      // Value read from the right LDR
int leituraE = 0;      // Value read from the left LDR

int pos = 90;          // Initial position of the servo (middle: 0 to 180 degrees)
int margem = 5;        // Minimum difference margin between sensors to trigger movement

void setup() {
  Serial.begin(9600);        // Start serial communication at 9600 bps for monitoring

  meuServo.attach(5);        // Connect the servo to digital pin 5
  meuServo.write(pos);       // Move the servo to the initial position (90 degrees)
}

void loop() {
  // Read the sensor values (range: 0 to 1023)
  leituraPainel = analogRead(painel); // Read overall panel light
  leituraD = analogRead(LDRD);        // Read right LDR
  leituraE = analogRead(LDRE);        // Read left LDR

  // Print the overall panel light value to the Serial Monitor
  Serial.print("Panel: ");
  Serial.println(leituraPainel);

  // Check if the right side is significantly brighter than the left
  if (leituraD > (leituraE + margem)) {
    if (pos < 180) pos++;       // Ensure the servo doesn't exceed max limit
    meuServo.write(pos);        // Move the servo to the new position
    delay(30);                  // Small delay to stabilize movement
  }
  // Check if the left side is significantly brighter than the right
  else if (leituraE > (leituraD + margem)) {
    if (pos > 0) pos--;         // Ensure the servo doesn't exceed min limit
    meuServo.write(pos);        // Move the servo to the new position
    delay(30);                  // Small delay to stabilize movement
  }

  // If the difference in brightness between LDRs is small, the servo stays still
}
