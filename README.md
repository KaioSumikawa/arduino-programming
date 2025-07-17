# Lesson 1 - Traffic Light Arduino Projects

This repository contains Arduino projects from Lesson 1 demonstrating basic traffic light control for cars and pedestrians using LEDs.

---

## Projects Overview

### 1. Simple Traffic Light Cycle

- Controls three LEDs representing a traffic light: green, yellow, and red.
- The cycle:
  - Green LED on for 4 seconds (cars can go).
  - Yellow LED on for 1.5 seconds (caution).
  - Red LED on for 4 seconds (cars must stop).
- The cycle repeats indefinitely.

### 2. Traffic Light with Pedestrian Signals

- Controls traffic lights for cars and pedestrians using multiple LEDs.
- Car traffic light LEDs: red (pin 12), yellow (pin 11), green (pin 10).
- Pedestrian traffic light LEDs: red (pin 8), green (pin 9).
- Cycle phases:
  1. Cars green, pedestrians red for 4 seconds.
  2. Pedestrian red LED blinks 5 times as warning.
  3. Cars yellow, pedestrians red for 1.5 seconds.
  4. Cars red, pedestrians green for 4 seconds.
  5. Pedestrian green LED blinks 5 times as warning.
  6. Both red for 1 second pause.
- The cycle repeats continuously.

---

## Hardware Connections

| Component              | Arduino Pin |
|------------------------|-------------|
| Car Red LED            | 12          |
| Car Yellow LED         | 11          |
| Car Green LED          | 10          |
| Pedestrian Red LED     | 8           |
| Pedestrian Green LED   | 9           |

---

## How to Use

- Upload the desired sketch to the Arduino board.
- Observe the LED patterns simulating realistic traffic light cycles for cars and pedestrians.
- LEDs will blink accordingly to signal changes and warnings.

---

## Dependencies

- Arduino IDE (version 1.8 or newer recommended)
- Arduino Uno or compatible board
- LEDs and appropriate resistors

---

## License

This project is for educational purposes.

---

If you have any questions or suggestions, feel free to open an issue or contact me.

# Lesson 2 - Arduino Projects

This repository contains several Arduino projects from Lesson 2 focusing on button inputs, LED control, and traffic light simulation.

---

## Projects Overview

### 1. Simple Button Controlled LED

- A button connected to digital pin 2 controls an LED on pin 13.
- When the button is pressed (HIGH), the LED turns on.
- When the button is released, the LED turns off.

### 2. Traffic Light Simulation with Two Traffic Lights

- Simulates two traffic lights using LEDs connected to digital pins.
- Traffic Light 1 uses pins 12 (red), 2 (yellow), and 4 (green).
- Traffic Light 2 uses pins 6 (red), 8 (yellow), and 10 (green).
- The lights cycle with realistic timing:
  - Traffic Light 1 green while Traffic Light 2 red for 3 seconds.
  - Traffic Light 1 yellow for 2 seconds.
  - Traffic Light 1 red while Traffic Light 2 green for 2 seconds.
  - Traffic Light 2 yellow for 2 seconds.
- The cycle repeats indefinitely.

### 3. Multiple Buttons Controlling LEDs

- Four buttons connected to digital pins 9, 10, 11, and 12.
- Each button controls an individual LED connected to pins 4, 5, 6, and 7 respectively.
- When a button is pressed (HIGH), its respective LED turns on.
- When the button is released, the LED turns off.

---

## Hardware Connections

| Component      | Arduino Pin |
|----------------|-------------|
| Button         | 2           |
| LED            | 13          |

| Traffic Light 1 | Arduino Pin |
|-----------------|-------------|
| Red LED         | 12          |
| Yellow LED      | 2           |
| Green LED       | 4           |

| Traffic Light 2 | Arduino Pin |
|-----------------|-------------|
| Red LED         | 6           |
| Yellow LED      | 8           |
| Green LED       | 10          |

| Buttons (Multiple Control) | Arduino Pin |
|----------------------------|-------------|
| Button 1                   | 12          |
| Button 2                   | 11          |
| Button 3                   | 10          |
| Button 4                   | 9           |

| LEDs (Multiple Control)     | Arduino Pin |
|-----------------------------|-------------|
| LED 1                      | 7           |
| LED 2                      | 6           |
| LED 3                      | 5           |
| LED 4                      | 4           |

---

## How to Use

- Upload the corresponding sketch to your Arduino board.
- For the simple button LED project, press the button connected to pin 2 to turn the LED on or off.
- For the traffic light simulation, observe the LEDs cycling to simulate traffic lights.
- For multiple buttons controlling LEDs, press any button (pins 9 to 12) to turn on the corresponding LED (pins 4 to 7).

---

## Dependencies

- Arduino IDE (version 1.8 or later recommended)
- Arduino Uno or compatible board
- Buttons, LEDs, resistors

---

## License

This project is intended for educational purposes.

---

If you have any questions or suggestions, feel free to open an issue or contact me.

# Lesson 3 - Arduino Projects

This repository contains Arduino projects developed in Lesson 3, featuring light-dependent LED control and a simple musical instrument using buttons and a buzzer.

---

## Projects Overview

### 1. Light-Dependent LED Brightness Control

- Uses an LDR (Light Dependent Resistor) connected to analog pin A0 to measure ambient light levels.
- An LED connected to PWM pin 9 changes its brightness inversely proportional to the ambient light:
  - The brighter the environment, the dimmer the LED.
- The LDR reading values (0 to 1023) are mapped to LED brightness (255 to 0).
- LDR readings are sent to the Serial Monitor for observation.

### 2. Button-Controlled Musical Buzzer with LEDs

- Five buttons connected to digital pins 4, 5, 7, 8, and 9, each associated with a specific musical note.
- When a button is pressed, the buzzer plays the corresponding note (C, D, E, F, or G).
- Each button press also lights up a corresponding LED (pins 11 to 15).
- When no button is pressed, the buzzer is silent and all LEDs are off.
- Buttons are configured with internal pull-up resistors.

---

## Hardware Connections

| Component      | Arduino Pin  |
|----------------|--------------|
| LDR Sensor     | A0           |
| LED            | 9 (PWM)      |
| Button 1       | 7            |
| Button 2       | 8            |
| Button 3       | 9            |
| Button 4       | 4            |
| Button 5       | 5            |
| Buzzer         | 10           |
| LED 1          | 11           |
| LED 2          | 12           |
| LED 3          | 13           |
| LED 4          | 14           |
| LED 5          | 15           |

---

## How to Use

- Upload the desired sketch to your Arduino board.
- For the LDR project, observe the LED brightness changing based on the surrounding light.
- Open the Serial Monitor (baud rate 9600) to see LDR sensor readings.
- For the musical buzzer project, press any of the five buttons to hear the note and see the corresponding LED light up.

---

## Dependencies

- Arduino IDE (version 1.8 or newer recommended)
- Arduino Uno or compatible board
- LDR sensor, LEDs, push buttons, buzzer

---

## License

This project is for educational purposes.

---

If you have questions or suggestions, feel free to open an issue or contact me.

# Lesson 4 - Arduino Projects

This repository contains several Arduino projects developed in Lesson 4, demonstrating the use of potentiometers to control RGB LEDs, serial communication to toggle LEDs, and ultrasonic sensor distance measurement with buzzer and LED alerts.

---

## Projects Overview

### 1. RGB LED Control Using Potentiometers

- Three potentiometers are connected to analog inputs A0, A1, and A2 to control the brightness of red, green, and blue LEDs respectively.
- The analog values from the potentiometers are read, mapped from 0-1023 to 0-255 PWM range, and output to the corresponding LED pins using PWM.
- Provides smooth color mixing by adjusting LED brightness.

### 2. Serial Controlled LEDs

- Three LEDs (red, green, blue) connected to digital pins 7, 8, and 12.
- Using the serial monitor, typing 'r', 'g', or 'b' toggles the respective LED on or off.
- Invalid key inputs prompt a message indicating valid commands.

### 3. Ultrasonic Distance Sensor with Buzzer and LED Alert System

- Uses an ultrasonic sensor (HC-SR04 or similar) with trigger and echo pins to measure distance.
- A buzzer and six LEDs (pins 8 to 13) provide audible and visual alerts based on the detected distance.
- If the object is very close (≤10 cm), all LEDs turn on and buzzer sounds continuously.
- For distances between 11 cm and 60 cm, LEDs light up progressively and buzzer beeps with intervals decreasing as the object gets closer.
- Above 60 cm, all LEDs and buzzer are turned off.

### 4. Basic Ultrasonic Obstacle Detection

- Simple ultrasonic sensor setup to detect if an obstacle is within a 20 cm threshold.
- Prints distance readings and obstacle detection status to the serial monitor.

---

## Hardware Connections

| Component       | Arduino Pin   |
|-----------------|---------------|
| Red Potentiometer  | A0            |
| Green Potentiometer| A1            |
| Blue Potentiometer | A2            |
| Red LED           | 9 (PWM)       |
| Green LED         | 10 (PWM)      |
| Blue LED          | 11 (PWM)      |
| Serial Controlled Red LED   | 7          |
| Serial Controlled Green LED | 8          |
| Serial Controlled Blue LED  | 12         |
| Ultrasonic Sensor TRIG      | 3 (or 7)   |
| Ultrasonic Sensor ECHO      | 2 (or 6)   |
| Buzzer                     | 7           |
| Alert LEDs                 | Pins 8 to 13|

*Note:* Pin numbers may vary depending on the specific project sketch.

---

## How to Use

- Upload the desired sketch to the Arduino board.
- For RGB LED control, adjust the potentiometers to change LED colors.
- For serial controlled LEDs, open the Serial Monitor, set baud rate to 9600, and type 'r', 'g', or 'b' to toggle LEDs.
- For ultrasonic alert projects, observe LED patterns and buzzer sounds responding to object proximity.

---

## Dependencies

- Arduino IDE (version 1.8 or higher recommended)
- Arduino Uno or compatible board
- Potentiometers, LEDs, ultrasonic sensor (HC-SR04 or similar), buzzer

---

## License

This project is provided for educational purposes.

---

If you have any questions or suggestions, feel free to open an issue or contact me.


# Motion Security System with PIR Sensor

# Lesson 5 - Arduino Projects

This project is an advanced distance measurement and alert system using an **ultrasonic sensor**, **RGB LEDs**, and a **16x2 LCD display**. It visually indicates how far an object is using different LED colors and displays the distance on the LCD and Serial Monitor.

## Components Used

- Arduino Uno (or compatible board)  
- Ultrasonic sensor (HC-SR04)  
- 16x2 LCD display (with parallel interface)  
- 3 LEDs (Red, Green, Blue – or a common cathode RGB LED)  
- 220Ω resistors (for each LED)  
- Jumper wires  
- Breadboard  

## Wiring

| Component         | Arduino Pin |
|------------------|-------------|
| Ultrasonic TRIG  | D9          |
| Ultrasonic ECHO  | D8          |
| Green LED        | D12         |
| Blue LED         | D11         |
| Red LED          | D13         |
| LCD RS           | D2          |
| LCD E (Enable)   | D3          |
| LCD D4           | D4          |
| LCD D5           | D5          |
| LCD D6           | D6          |
| LCD D7           | D7          |

## How It Works

1. The **ultrasonic sensor** continuously measures the distance to an object in front of it.  
2. The distance is displayed on:
   - The **Serial Monitor**
   - A **16x2 LCD** screen (line 1 shows distance; line 2 shows a name or message)
3. According to the measured distance, the system lights up:
   - **Green LED** for distances greater than 60 cm  
   - **Yellow** (Green + Red) for distances between 31–60 cm  
   - **Red LED** for distances 30 cm or less  
4. Updates are made every **300 ms** for real-time feedback.

## Code Behavior

- Uses the `LiquidCrystal` library for LCD control  
- Includes functions to:
  - Trigger and read the ultrasonic sensor
  - Display centered text
  - Dynamically set LED colors
  - Print data to the Serial Monitor  

## Notes

- You can customize the name shown on line 2 of the LCD (`"Prof. M. Lima"`)  
- The blue LED is only used as a helper to create the yellow color with the red and green (true RGB control not used here)

## Lesson 6 - Traffic Light System with 7-Segment Display

This project is a traffic light controller for two streets using **LEDs** and a **7-segment display**. It simulates a real-world traffic light system, alternating red, yellow, and green lights between the two streets, and includes a numeric countdown using the display.

### Components Used

- Arduino Uno (or compatible board)  
- 6 LEDs (3 for Street A, 3 for Street B – Green, Yellow, Red)  
- 1 7-segment display  
- 220Ω resistors (for each LED and display segment)  
- Jumper wires  
- Breadboard  

### Wiring

| Component         | Arduino Pin |
|------------------|-------------|
| Segment A        | D2          |
| Segment B        | D3          |
| Segment C        | D4          |
| Segment D        | D5          |
| Segment E        | D6          |
| Segment F        | D7          |
| Segment G        | D8          |
| Decimal Point    | D9          |
| Street A Green   | D10         |
| Street A Yellow  | D11         |
| Street A Red     | D12         |
| Street B Green   | A0          |
| Street B Yellow  | A1          |
| Street B Red     | A2          |

### How It Works

1. **Street A** starts green while **Street B** is red.  
2. A countdown from 9 to 0 is shown on the 7-segment display.  
3. Street A switches to yellow for 1 second, then turns red.  
4. **Street B** turns green, and the countdown starts again.  
5. Afterward, Street B switches to yellow, then red.  
6. The cycle repeats indefinitely.

### Code Behavior

- The `display(int num)` function maps digits 0–9 to the 7-segment display.  
- LEDs are controlled using `digitalWrite()` in a timed sequence.  
- Countdown is shown during the green light phase only.

### Notes

- The decimal point is disabled throughout the cycle.  
- This project can be expanded with sensors or pedestrian buttons in future lessons.

# Lesson 7 - Light Tracking Servo System

This Arduino project uses **LDR (Light Dependent Resistor) sensors** to detect light direction and control a **servo motor** accordingly. It's a simple and effective system that mimics how a solar panel might rotate to follow the sun.

##  How It Works

- Two LDRs (one on the left, one on the right) detect light intensity.
- A third LDR monitors ambient light on a "panel" (optional).
- The servo motor adjusts its position based on the difference between the left and right LDRs.
- If the difference is greater than a margin, the servo rotates in the brighter direction.

## ⚙ Hardware Required

- 1 × Arduino Uno (or compatible board)  
- 1 × Servo motor (e.g., SG90)  
- 2 × LDRs (photoresistors)  
- 2 × 10kΩ resistors (for LDR voltage divider)  
- Optional: 1 × additional LDR for general ambient light  
- Breadboard and jumper wires  

## 🔌 Circuit Diagram

   A0        A1        A2
    |         |         |
   LDR       LDR     (Panel LDR)
 (Left)    (Right)
    |         |         |
   GND       GND       GND

 Servo Signal → D5


- Connect each LDR in a voltage divider configuration with a 10kΩ resistor.

##  Code Overview

- Uses the `Servo.h` library.
- Reads analog values from pins A0 (left), A1 (right), and A2 (panel).
- Controls servo connected to digital pin 5.
- Uses a simple margin (`margem`) to avoid jitter.

##  File Structure


##  Getting Started

1. Upload the `.ino` file to your Arduino board.
2. Open the Serial Monitor to observe panel readings.
3. Adjust light around the LDRs and watch the servo rotate!

##  Customization

- You can change the `margem` variable to make the system more or less sensitive to light differences.
- You may adapt it to control solar panels, robotic heads, or autonomous vehicles.

##  License

This project is open-source and available under the MIT License.

# Lesson 7 - Bluetooth Gate Control with Servo Motor

This project demonstrates how to control a gate using a servo motor and a Bluetooth module (HC-05) connected to an Arduino. The gate can be opened or closed by sending simple commands from a mobile phone using a Bluetooth terminal app.

## 📦 Components Used

- 1 × Arduino UNO (or compatible)
- 1 × Servo Motor (SG90 or similar)
- 1 × Bluetooth Module (HC-05 or HC-06)
- 2 × Resistors (1kΩ and 2kΩ for voltage divider)
- 1 × Breadboard
- Jumper wires

## ⚙️ Wiring Instructions

| Bluetooth Module | Arduino       |
|------------------|---------------|
| VCC              | 5V            |
| GND              | GND           |
| TXD              | Pin 10 (RX)   |
| RXD              | Pin 11 (TX) - Use voltage divider! |

| Servo Motor | Arduino        |
|-------------|----------------|
| VCC (Red)   | 5V             |
| GND (Brown) | GND            |
| Signal (Yellow) | Pin 9     |

## 📱 Commands

- Send `'A'` to **open** the gate (servo goes to 180°)
- Send `'F'` to **close** the gate (servo returns to 0°)

Use any **Bluetooth Serial Controller** app on Android, or **HM-10 BLE Terminal** for iOS (if using BLE module).

## 💻 Arduino Code Overview

The Arduino reads characters sent over Bluetooth and moves the servo motor accordingly. It also prints status messages to both the serial monitor and the Bluetooth terminal.

```cpp
if (command == 'A') {
  gateServo.write(180); // Open
} else if (command == 'F') {
  gateServo.write(0);   // Close
}


