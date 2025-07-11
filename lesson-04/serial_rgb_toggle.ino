// Define the pins where the LEDs are connected
int led_red = 7;    // Red LED on digital pin 7
int led_green = 8;  // Green LED on digital pin 8
int led_blue = 12;  // Blue LED on digital pin 12

void setup() {
  Serial.begin(9600);               // Start serial communication at 9600 bps
  pinMode(led_red, OUTPUT);         // Set red LED pin as output
  pinMode(led_green, OUTPUT);       // Set green LED pin as output
  pinMode(led_blue, OUTPUT);        // Set blue LED pin as output
}

void loop() {
  // Check if data is available in the serial monitor
  if (Serial.available()) {
    char Led = Serial.read();       // Read the character typed in the serial monitor

    // Check which key was pressed and perform the corresponding action
    switch (Led) {
      case 'r': // If key 'r' was pressed
        // Toggle red LED
        digitalWrite(led_red, !digitalRead(led_red));
        break;

      case 'g': // If key 'g' was pressed
        // Toggle green LED
        digitalWrite(led_green, !digitalRead(led_green));
        break;

      case 'b': // If key 'b' was pressed
        // Toggle blue LED
        digitalWrite(led_blue, !digitalRead(led_blue));
        break;

      default: // If another key was pressed
        Serial.print("Unrecognized key: ");
        Serial.print(Led);
        Serial.println(". Please type r for red, g for green, or b for blue.");
    }
  }
}
