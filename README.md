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

This project is a basic motion detection alarm using an Arduino board, a PIR sensor, an LED, and a buzzer. The system detects motion and activates alerts accordingly, with Serial Monitor output for motion logs.

## Components Used

- Arduino Uno (or compatible board)  
- PIR motion sensor  
- LED  
- Buzzer (active or passive)  
- 220Ω resistors (for LED and optionally buzzer)  
- Jumper wires  
- Breadboard  

## Wiring

| Component  | Arduino Pin |  
|------------|-------------|  
| PIR Sensor | D7          |  
| LED        | D5          |  
| Buzzer     | D6          |  

## How It Works

1. On power-up, the system waits **30 seconds** to allow the PIR sensor to calibrate.  
2. Once calibrated, it actively checks for motion.  
3. If motion is detected:  
   - The **LED lights up**  
   - The **buzzer sounds (500 Hz)**  
   - A message appears in the **Serial Monitor** with the timestamp  
4. If no motion is detected for **5 seconds**, the system:  
   - Turns off the LED and buzzer  
   - Logs that motion has ended  

## Configuration

You can easily tweak two main variables:

```cpp
int calibrationTime = 30;   // time for PIR sensor to calibrate (in seconds)
unsigned long pause = 5000; // time (in ms) to wait after no motion

Credits
This collection of Arduino projects was developed as part of the course under the guidance of Professor Marcelo Lima at Senac Registro.

