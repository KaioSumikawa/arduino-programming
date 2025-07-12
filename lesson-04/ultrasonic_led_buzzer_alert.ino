// Define pins for ultrasonic sensor and buzzer
const int TRIG = 3, ECHO = 2, buzzer = 7;

// Variables to store buzzer blink interval and distance
unsigned int interval, distance;

void setup() {
  Serial.begin(9600);      // Start serial communication for monitoring

  pinMode(TRIG, OUTPUT);   // Set TRIG pin as output to send pulse
  pinMode(ECHO, INPUT);    // Set ECHO pin as input to receive echo
  pinMode(buzzer, OUTPUT); // Set buzzer pin as output

  // Set LED pins (8 to 13) as output
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  // Call the function to measure distance
  distance = measure_distance(TRIG, ECHO);

  Serial.println(distance); // Display measured distance in serial monitor

  // If distance is less than or equal to 10cm, max alert
  if (distance <= 10) {
    // Turn on all LEDs for alert
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(8, HIGH);
    tone(buzzer, 1750); // Turn on buzzer at 1750 Hz
  }
  // If distance is greater than 60cm, turn everything off
  else if (distance > 60) {
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
    digitalWrite(8, LOW);
    noTone(buzzer); // Turn off buzzer
  }
  // If distance is between 11cm and 60cm
  else {
    // Turn on LEDs gradually based on proximity
    if (distance <= 20) {
      digitalWrite(13, LOW);
      digitalWrite(12, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(8, HIGH);
      interval = 100; // Fast buzzer beep
    } else if (distance <= 30) {
      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
      digitalWrite(11, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(8, HIGH);
      interval = 150;
    } else if (distance <= 40) {
      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
      digitalWrite(11, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(8, HIGH);
      interval = 200;
    } else if (distance <= 50) {
      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
      digitalWrite(11, LOW);
      digitalWrite(10, LOW);
      digitalWrite(9, HIGH);
      digitalWrite(8, HIGH);
      interval = 250;
    } else if (distance <= 60) {
      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
      digitalWrite(11, LOW);
      digitalWrite(10, LOW);
      digitalWrite(9, LOW);
      digitalWrite(8, HIGH);
      interval = 300;
    }

    // Blink buzzer at defined interval
    tone(buzzer, 1750);   // Turn on buzzer
    delay(interval);      // Wait for interval
    noTone(buzzer);       // Turn off buzzer
    delay(interval);      // Wait again
  }
}

// Function to send ultrasonic pulse and calculate distance
int measure_distance(int trig_pin, int echo_pin) {
  digitalWrite(trig_pin, LOW);       // Ensure TRIG is low
  delayMicroseconds(2);              // Short pause for stability
  digitalWrite(trig_pin, HIGH);      // Send 10µs pulse
  delayMicroseconds(10);
  digitalWrite(trig_pin, LOW);       // End pulse

  // pulseIn returns time (µs) ECHO stayed high
  // Divide by 58 to convert time to distance in cm
  return pulseIn(echo_pin, HIGH) / 58;
}
