// Variables to store the pins of each connected component
const int pin_button1 = 7;   // Button 1 on digital pin 7
const int pin_button2 = 8;   // Button 2 on digital pin 8
const int pin_button3 = 9;   // Button 3 on digital pin 9
const int pin_button4 = 4;   // Button 4 on digital pin 4
const int pin_button5 = 5;   // Button 5 on digital pin 5
const int pin_buzzer = 10;   // Buzzer on digital pin 10
const int pin_led1 = 11;     // LED 1 on digital pin 11
const int pin_led2 = 12;     // LED 2 on digital pin 12
const int pin_led3 = 13;     // LED 3 on digital pin 13
const int pin_led4 = 14;     // LED 4 on digital pin 14
const int pin_led5 = 15;     // LED 5 on digital pin 15

// Musical note frequencies in Hertz
const int c = 261; // Note C
const int d = 293; // Note D
const int e = 329; // Note E
const int f = 349; // Note F
const int g = 391; // Note G
const int a = 440; // Note A
const int b = 493; // Note B

void setup() {
  // Set button pins as input with internal pull-up resistors
  pinMode(pin_button1, INPUT_PULLUP);
  pinMode(pin_button2, INPUT_PULLUP);
  pinMode(pin_button3, INPUT_PULLUP);
  pinMode(pin_button4, INPUT_PULLUP);
  pinMode(pin_button5, INPUT_PULLUP);
  
  // Set buzzer and LED pins as outputs
  pinMode(pin_buzzer, OUTPUT);
  pinMode(pin_led1, OUTPUT);
  pinMode(pin_led2, OUTPUT);
  pinMode(pin_led3, OUTPUT);
  pinMode(pin_led4, OUTPUT);
  pinMode(pin_led5, OUTPUT);
}

void loop() {
  // Read the state of each button (LOW = pressed, HIGH = released)
  bool state_button1 = digitalRead(pin_button1);
  bool state_button2 = digitalRead(pin_button2);
  bool state_button3 = digitalRead(pin_button3);
  bool state_button4 = digitalRead(pin_button4);
  bool state_button5 = digitalRead(pin_button5);

  // Check if button 1 is pressed
  if (state_button1 == LOW) {
    tone(pin_buzzer, c); // Play note C
    digitalWrite(pin_led1, HIGH); // Turn on LED 1
  }
  // Else, check if button 2 is pressed
  else if (state_button2 == LOW) {
    tone(pin_buzzer, d); // Play note D
    digitalWrite(pin_led2, HIGH); // Turn on LED 2
  }
  // Else, check if button 3 is pressed
  else if (state_button3 == LOW) {
    tone(pin_buzzer, e); // Play note E
    digitalWrite(pin_led3, HIGH); // Turn on LED 3
  }
  // Else, check if button 4 is pressed
  else if (state_button4 == LOW) {
    tone(pin_buzzer, f); // Play note F
    digitalWrite(pin_led4, HIGH); // Turn on LED 4
  }
  // Else, check if button 5 is pressed
  else if (state_button5 == LOW) {
    tone(pin_buzzer, g); // Play note G
    digitalWrite(pin_led5, HIGH); // Turn on LED 5
  }
  // If no button is pressed
  else {
    noTone(pin_buzzer); // Stop the buzzer sound
    digitalWrite(pin_led1, LOW); // Turn off LED 1
    digitalWrite(pin_led2, LOW); // Turn off LED 2
    digitalWrite(pin_led3, LOW); // Turn off LED 3
    digitalWrite(pin_led4, LOW); // Turn off LED 4
    digitalWrite(pin_led5, LOW); // Turn off LED 5
  }
}
