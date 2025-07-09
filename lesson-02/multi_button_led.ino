// Define values for the buttons (could also be: int button12 = 12;)
#define button12 12  // Define the name "button12" for digital pin 12
#define button11 11  // Define the name "button11" for digital pin 11
#define button10 10  // Define the name "button10" for digital pin 10
#define button09 9   // Define the name "button09" for digital pin 9

// Define values for the LEDs
#define led7 7     // Define the name "led7" for digital pin 7
#define led6 6     // Define the name "led6" for digital pin 6
#define led5 5     // Define the name "led5" for digital pin 5
#define led4 4     // Define the name "led4" for digital pin 4

void setup()
{                
  // Set button pins as inputs
  pinMode(button12, INPUT);  // Set pin 12 as input (button)
  pinMode(button11, INPUT);  // Set pin 11 as input (button)
  pinMode(button10, INPUT);  // Set pin 10 as input (button)
  pinMode(button09, INPUT);  // Set pin 9 as input (button)
  
  // Set LED pins as outputs
  pinMode(led7, OUTPUT);  // Set pin 7 as output (LED)
  pinMode(led6, OUTPUT);  // Set pin 6 as output (LED)
  pinMode(led5, OUTPUT);  // Set pin 5 as output (LED)
  pinMode(led4, OUTPUT);  // Set pin 4 as output (LED)
}

void loop()
{ 
  // Condition for button on pin 12
  if (digitalRead(button12)) // If the button is pressed (high level)
  {
    digitalWrite(led7, HIGH); // Turn on the LED connected to pin 7
  }
  else
  {
    digitalWrite(led7, LOW);  // Turn off the LED if the button is not pressed
  }

  // Condition for button on pin 11
  if (digitalRead(button11)) // If the button is pressed
  {
    digitalWrite(led6, HIGH); // Turn on the LED connected to pin 6
  }
  else
  {
    digitalWrite(led6, LOW);  // Turn off the LED
  }

  // Condition for button on pin 10
  if (digitalRead(button10)) // If the button is pressed
  {
    digitalWrite(led5, HIGH); // Turn on the LED connected to pin 5
  }
  else
  {
    digitalWrite(led5, LOW);  // Turn off the LED
  }

  // Condition for button on pin 9
  if (digitalRead(button09)) // If the button is pressed
  {
    digitalWrite(led4, HIGH); // Turn on the LED connected to pin 4
  }
  else
  {
    digitalWrite(led4, LOW);  // Turn off the LED
  }
}
