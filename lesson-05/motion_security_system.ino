int calibrationTime = 30; // time for the sensor to calibrate (in seconds)

unsigned long lowIn; // stores the moment when the signal went LOW
unsigned long pause = 5000; // time in ms to consider the end of motion

boolean lockLow = true;
boolean takeLowTime;

int pirPin = 7;    // digital pin connected to the PIR sensor
int ledPin = 5;    // digital pin connected to the LED
int Buzzer = 6;    // digital pin connected to the BUZZER

void setup() {
  Serial.begin(9600);
  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(Buzzer, OUTPUT);
  digitalWrite(pirPin, LOW);

  // time to let the sensor calibrate
  Serial.print("calibrating sensor ");
  for (int i = 0; i < calibrationTime; i++) {
    Serial.print(".");
    delay(1000);
  }
  Serial.println(" done");
  Serial.println("SENSOR ACTIVE");
  delay(50);
}

void loop() {
  if (digitalRead(pirPin) == HIGH) {
    digitalWrite(ledPin, HIGH); 
    tone(Buzzer, 500);

    if (lockLow) {
      lockLow = false;
      Serial.println("---");
      Serial.print("motion detected at ");
      Serial.print(millis() / 1000);
      Serial.println(" sec");
      delay(50);
    }
    takeLowTime = true;
  }

  if (digitalRead(pirPin) == LOW) {
    digitalWrite(ledPin, LOW);
    noTone(Buzzer);

    if (takeLowTime) {
      lowIn = millis(); // store the time when the signal went from HIGH to LOW
      takeLowTime = false;
    }

    // if the sensor stays LOW for more than 'pause' duration,
    // assume motion has ended
    if (!lockLow && millis() - lowIn > pause) {
      lockLow = true;
      Serial.print("motion ended at ");
      Serial.print((millis() - pause) / 1000);
      Serial.println(" sec");
      delay(50);
    }
  }
}