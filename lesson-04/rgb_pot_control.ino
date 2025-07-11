const int potR = A0;    // Red potentiometer
const int potG = A1;    // Green potentiometer
const int potB = A2;    // Blue potentiometer

const int ledR = 9;     // Red LED PWM pin
const int ledG = 10;    // Green LED PWM pin
const int ledB = 11;    // Blue LED PWM pin

void setup() {
  pinMode(ledR, OUTPUT);  // Set LED pins as output
  pinMode(ledG, OUTPUT);
  pinMode(ledB, OUTPUT);
}

void loop() {
  int valR = analogRead(potR);  // Read red potentiometer value
  int valG = analogRead(potG);  // Read green potentiometer value
  int valB = analogRead(potB);  // Read blue potentiometer value

  valR = map(valR, 0, 1023, 0, 255);  // Map to PWM 0-255
  valG = map(valG, 0, 1023, 0, 255);
  valB = map(valB, 0, 1023, 0, 255);

  analogWrite(ledR, valR);  // Set red LED brightness
  analogWrite(ledG, valG);  // Set green LED brightness
  analogWrite(ledB, valB);  // Set blue LED brightness

  delay(10);                // Small delay for stability
}
