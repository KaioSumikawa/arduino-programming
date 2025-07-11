// Define the pins used
const int ldr = A0;   // Analog pin where the LDR is connected
const int led = 9;    // Digital PWM pin where the LED is connected

void setup() {
  pinMode(led, OUTPUT);     // Set the LED pin as output
  Serial.begin(9600);       // Start serial communication at 9600 bps
}

void loop() {
  int reading = analogRead(ldr); // Read the analog value from the LDR (0 to 1023)

  // Map the read value to invert the brightness: the brighter the light, the dimmer the LED
  // analogRead ranges from 0 (very dark) to 1023 (very bright)
  // analogWrite ranges from 0 (off) to 255 (maximum brightness)
  // Inverting: strong light => low LED value
  int brightness = map(reading, 0, 1023, 255, 0); 

  analogWrite(led, brightness);       // Adjust the LED brightness according to ambient light
  Serial.println(reading);            // Print the LDR value to the serial monitor
  delay(300);                         // Wait 300 milliseconds before the next reading
}
