// Define the Arduino digital pins connected to the LEDs
const int redLed = 12;    // Pin for the red LED (stop signal)
const int yellowLed = 11; // Pin for the yellow LED (caution signal)
const int greenLed = 10;  // Pin for the green LED (go signal)

void setup() {
  // Set the pins as digital outputs
  pinMode(redLed, OUTPUT);    // Red LED will be controlled as output
  pinMode(yellowLed, OUTPUT); // Yellow LED will be controlled as output
  pinMode(greenLed, OUTPUT);  // Green LED will be controlled as output
}

void loop() {
  // Turn on the green LED (cars can go)
  digitalWrite(greenLed, HIGH); // Turn green LED on
  delay(4000);                  // Keep it on for 4 seconds
  digitalWrite(greenLed, LOW);  // Turn green LED off

  // Turn on the yellow LED (caution, signal will change)
  digitalWrite(yellowLed, HIGH); // Turn yellow LED on
  delay(1500);                   // Keep it on for 1.5 seconds
  digitalWrite(yellowLed, LOW);  // Turn yellow LED off

  // Turn on the red LED (cars must stop)
  digitalWrite(redLed, HIGH);  // Turn red LED on
  delay(4000);                 // Keep it on for 4 seconds
  digitalWrite(redLed, LOW);   // Turn red LED off

  // The cycle restarts automatically
}
