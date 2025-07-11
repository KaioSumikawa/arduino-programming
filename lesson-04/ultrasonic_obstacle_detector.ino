// Define ultrasonic sensor pins
const int TRIG = 7;  // Trigger pin (sends the pulse)
const int ECHO = 6;  // Echo pin (receives the reflected pulse)

// Define the distance threshold to detect an obstacle
const int obstacle_distance = 20;  // In centimeters

void setup() {
  Serial.begin(9600);       // Start serial communication
  pinMode(TRIG, OUTPUT);    // Set TRIG pin as output
  pinMode(ECHO, INPUT);     // Set ECHO pin as input
}

void loop() {
  // Send ultrasonic pulse
  digitalWrite(TRIG, LOW);          // Ensure TRIG starts low
  delayMicroseconds(2);             // Wait for 2 microseconds
  digitalWrite(TRIG, HIGH);         // Send a 10-microsecond pulse
  delayMicroseconds(10);           // Duration of the pulse
  digitalWrite(TRIG, LOW);          // End the pulse

  // Measure the round-trip time of the sound (in microseconds)
  long duration = pulseIn(ECHO, HIGH);  // Time ECHO pin stayed HIGH

  // Convert time to distance (formula: distance = time / 58)
  int distance = duration / 58;         // Result in centimeters

  // Check if the distance is less than or equal to the threshold
  if (distance <= obstacle_distance) {
    Serial.print("Obstacle detected: ");
    Serial.print(distance);
    Serial.println("cm");
  } else {
    Serial.print("No obstacle: ");
    Serial.print(distance);
    Serial.println("cm");
  }

  delay(100);  // Wait 100 milliseconds before the next reading
}
