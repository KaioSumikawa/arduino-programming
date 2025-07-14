# Motion Security System with PIR Sensor

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

## ⚙️ Configuration

You can easily tweak two main variables:

```cpp
int calibrationTime = 30;   // time for PIR sensor to calibrate (in seconds)
unsigned long pause = 5000; // time (in ms) to wait after no motion
