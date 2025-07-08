// Define the LED pins for the car traffic light
const int ledVermelho = 12; // Red LED for cars (stop)
const int ledAmarelo = 11;  // Yellow LED for cars (caution)
const int ledVerde = 10;    // Green LED for cars (go)

// Define the LED pins for the pedestrian traffic light
const int ledVermelhoPed = 8;  // Red LED for pedestrians (do not cross)
const int ledVerdePed = 9;     // Green LED for pedestrians (safe to cross)

void setup() {
  // Set the car traffic light LED pins as output
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVerde, OUTPUT);

  // Set the pedestrian traffic light LED pins as output
  pinMode(ledVermelhoPed, OUTPUT);
  pinMode(ledVerdePed, OUTPUT);
}

void loop() {
  // Phase 1: Green light for cars, red for pedestrians
  digitalWrite(ledVerde, HIGH);           // Turn on car green LED (cars can go)
  digitalWrite(ledAmarelo, LOW);          // Turn off car yellow LED
  digitalWrite(ledVermelho, LOW);         // Turn off car red LED

  digitalWrite(ledVermelhoPed, HIGH);     // Turn on pedestrian red LED (do not cross)
  digitalWrite(ledVerdePed, LOW);         // Turn off pedestrian green LED

  delay(4000); // Keep this condition for 4 seconds

  // Phase 2: Car green about to change, blink pedestrian red
  for (int i = 0; i < 5; i++) {            // Blink pedestrian red LED 5 times
    digitalWrite(ledVermelhoPed, LOW);    // Turn off pedestrian red LED (blink)
    delay(500);                           
    digitalWrite(ledVermelhoPed, HIGH);   // Turn on pedestrian red LED
    delay(500);
  }

  // Phase 3: Yellow light for cars, red for pedestrians
  digitalWrite(ledVerde, LOW);            // Turn off car green LED
  digitalWrite(ledAmarelo, HIGH);         // Turn on car yellow LED (caution)
  digitalWrite(ledVermelho, LOW);         // Turn off car red LED

  digitalWrite(ledVermelhoPed, HIGH);     // Keep pedestrian red LED on (do not cross)
  digitalWrite(ledVerdePed, LOW);         // Ensure pedestrian green LED is off

  delay(1500); // Keep this condition for 1.5 seconds

  // Phase 4: Red light for cars, green for pedestrians
  digitalWrite(ledVerde, LOW);            // Turn off car green LED
  digitalWrite(ledAmarelo, LOW);          // Turn off car yellow LED
  digitalWrite(ledVermelho, HIGH);        // Turn on car red LED (cars must stop)

  digitalWrite(ledVermelhoPed, LOW);      // Turn off pedestrian red LED
  digitalWrite(ledVerdePed, HIGH);        // Turn on pedestrian green LED (safe to cross)

  delay(4000); // Keep this condition for 4 seconds

  // Phase 5: Pedestrian green ending, blink pedestrian green LED
  for (int i = 0; i < 5; i++) {            // Blink pedestrian green LED 5 times
    digitalWrite(ledVerdePed, LOW);       // Turn off pedestrian green LED (blink)
    delay(500);
    digitalWrite(ledVerdePed, HIGH);      // Turn on pedestrian green LED
    delay(500);
  }

  // Phase 6: Red for both (final pause)
  digitalWrite(ledVermelhoPed, HIGH);     // Turn on pedestrian red LED (do not cross)
  digitalWrite(ledVerdePed, LOW);         // Turn off pedestrian green LED

  digitalWrite(ledVerde, LOW);            // Ensure car green LED is off
  digitalWrite(ledAmarelo, LOW);          // Ensure car yellow LED is off
  digitalWrite(ledVermelho, HIGH);        // Keep car red LED on (cars must stop)

  delay(1000); // Short pause before next cycle
}
