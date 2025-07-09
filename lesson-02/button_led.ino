const int botao = 2;  // Pin connected to the button
const int led = 13;   // LED pin

void setup() {
  pinMode(botao, INPUT);  // Set the button pin as digital input
  pinMode(led, OUTPUT);   // Set the LED pin as digital output
}

void loop() {
  if (digitalRead(botao) == HIGH) {  // Check if the button is pressed (HIGH)
    digitalWrite(led, HIGH);         // Turn on the LED by sending 5V to pin 13
  } else {
    digitalWrite(led, LOW);          // Turn off the LED by sending 0V to pin 13
  }
}
