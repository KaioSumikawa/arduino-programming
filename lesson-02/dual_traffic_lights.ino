// Declaration of the traffic light 1 LED pins
int ledred1 = 12;        // Red LED of traffic light 1 on digital pin 12
int ledorange1 = 2;      // Yellow LED of traffic light 1 on digital pin 2
int ledgreen1 = 4;       // Green LED of traffic light 1 on digital pin 4

// Declaration of the traffic light 2 LED pins
int ledred2 = 6;         // Red LED of traffic light 2 on digital pin 6
int ledorange2 = 8;      // Yellow LED of traffic light 2 on digital pin 8
int ledgreen2 = 10;      // Green LED of traffic light 2 on digital pin 10

void setup() 
{
  // Set all LED pins as digital outputs
  pinMode(ledred1, OUTPUT);     // Output for red LED of traffic light 1
  pinMode(ledorange1, OUTPUT);  // Output for yellow LED of traffic light 1
  pinMode(ledgreen1, OUTPUT);   // Output for green LED of traffic light 1

  pinMode(ledred2, OUTPUT);     // Output for red LED of traffic light 2
  pinMode(ledorange2, OUTPUT);  // Output for yellow LED of traffic light 2
  pinMode(ledgreen2, OUTPUT);   // Output for green LED of traffic light 2
}

void loop() 
{
  // ====== TRAFFIC LIGHT 1: GREEN | TRAFFIC LIGHT 2: RED ======
  digitalWrite(ledgreen1, HIGH); // Turn on green of traffic light 1 (go)
  digitalWrite(ledred2, HIGH);   // Turn on red of traffic light 2 (stop)
  delay(3000);                   // Wait 3 seconds

  // ====== TRAFFIC LIGHT 1: YELLOW (WARNING OF CLOSING) ======
  digitalWrite(ledgreen1, LOW);   // Turn off green of traffic light 1
  digitalWrite(ledorange1, HIGH); // Turn on yellow of traffic light 1
  delay(2000);                    // Wait 2 seconds

  // ====== TRAFFIC LIGHT 1: RED | TRAFFIC LIGHT 2: GREEN ======
  digitalWrite(ledorange1, LOW); // Turn off yellow of traffic light 1
  digitalWrite(ledred1, HIGH);   // Turn on red of traffic light 1 (stop)

  digitalWrite(ledred2, LOW);    // Turn off red of traffic light 2
  digitalWrite(ledgreen2, HIGH); // Turn on green of traffic light 2 (go)
  delay(2000);                   // Wait 2 seconds

  // ====== TRAFFIC LIGHT 2: YELLOW (WARNING OF CLOSING) ======
  digitalWrite(ledgreen2, LOW);   // Turn off green of traffic light 2
  digitalWrite(ledorange2, HIGH); // Turn on yellow of traffic light 2
  delay(2000);                    // Wait 2 seconds

  // ====== TRAFFIC LIGHT 2: RED | TRAFFIC LIGHT 1: GREEN ======
  digitalWrite(ledorange2, LOW); // Turn off yellow of traffic light 2
  digitalWrite(ledred1, LOW);    // Turn off red of traffic light 1

  // The loop restarts with traffic light 1 green again
}
