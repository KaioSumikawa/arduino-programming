// Display segments
int A = 2;
int B = 3;
int C = 4;
int D = 5;
int E = 6;
int F = 7;
int G = 8;
int DP = 9;

// Traffic light for Street A
int greenA = 10;
int yellowA = 11;
int redA = 12;

// Traffic light for Street B
int greenB = A0;
int yellowB = A1;
int redB = A2;

// 7-segment digits (0 to 9)
void display(int num) {
  byte numbers[10][7] = {
    {1,1,1,1,1,1,0}, // 0
    {0,1,1,0,0,0,0}, // 1
    {1,1,0,1,1,0,1}, // 2
    {1,1,1,1,0,0,1}, // 3
    {0,1,1,0,0,1,1}, // 4
    {1,0,1,1,0,1,1}, // 5
    {1,0,1,1,1,1,1}, // 6
    {1,1,1,0,0,0,0}, // 7
    {1,1,1,1,1,1,1}, // 8
    {1,1,1,1,0,1,1}  // 9
  };

  digitalWrite(A, numbers[num][0]);
  digitalWrite(B, numbers[num][1]);
  digitalWrite(C, numbers[num][2]);
  digitalWrite(D, numbers[num][3]);
  digitalWrite(E, numbers[num][4]);
  digitalWrite(F, numbers[num][5]);
  digitalWrite(G, numbers[num][6]);
  digitalWrite(DP, LOW);
}

void setup() {
  int segments[] = {A, B, C, D, E, F, G, DP};
  for (int i = 0; i < 8; i++) pinMode(segments[i], OUTPUT);

  int leds[] = {greenA, yellowA, redA, greenB, yellowB, redB};
  for (int i = 0; i < 6; i++) pinMode(leds[i], OUTPUT);
}

void loop() {
  // Street A green, Street B red
  digitalWrite(greenA, HIGH);
  digitalWrite(redB, HIGH);
  for (int i = 9; i >= 0; i--) {
    display(i);
    delay(1000);
  }
  digitalWrite(greenA, LOW);
  digitalWrite(redB, LOW);

  // Street A yellow
  digitalWrite(yellowA, HIGH);
  display(0);
  delay(1000);
  digitalWrite(yellowA, LOW);

  // Street A red, Street B green
  digitalWrite(redA, HIGH);
  digitalWrite(greenB, HIGH);
  for (int i = 9; i >= 0; i--) {
    display(i);
    delay(1000);
  }
  digitalWrite(redA, LOW);
  digitalWrite(greenB, LOW);

  // Street B yellow
  digitalWrite(yellowB, HIGH);
  display(0);
  delay(1000);
  digitalWrite(yellowB, LOW);

  // Reset for new cycle
  digitalWrite(redB, LOW);
}
