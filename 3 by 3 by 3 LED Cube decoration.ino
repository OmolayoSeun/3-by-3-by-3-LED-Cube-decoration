// C++ code
//
const int top = 2, mid = 3, down = 4, line1 = 11, line2 = 8,
          line3 = 5, line4 = 12, line5 = 9, line6 = 6,
          line7 = 13, line8 = 10, line9 = 7;

void setup() {
  for (byte i = 2; i <= 13; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  //pattern 1
  for (byte b = 0; b < 6; b++) {
    for (byte a = 2; a <= 4; a++) {
      digitalWrite(a, HIGH);
      for (byte i = 5; i <= 13; i++) {
        digitalWrite(i, HIGH);
        delay(300);
        digitalWrite(i, LOW);
      }
      digitalWrite(a, LOW);
    }
  }

//pattern 2
  for (byte b = 0; b < 10; b++) {
    digitalWrite(line1, HIGH);
    digitalWrite(line2, HIGH);
    digitalWrite(line3, HIGH);
    digitalWrite(line4, HIGH);
    digitalWrite(line6, HIGH);
    digitalWrite(line7, HIGH);
    digitalWrite(line8, HIGH);
    digitalWrite(line9, HIGH);

    for (byte i = 2; i <= 4; i++) {
      digitalWrite(i, HIGH);
      delay(300);
      digitalWrite(i, LOW);
    }
    digitalWrite(line1, LOW);
    digitalWrite(line2, LOW);
    digitalWrite(line3, LOW);
    digitalWrite(line4, LOW);
    digitalWrite(line6, LOW);
    digitalWrite(line7, LOW);
    digitalWrite(line8, LOW);
    digitalWrite(line9, LOW);
  }

//pattern 3
  for (byte b = 0; b < 10; b++) {
    for (byte b = 0; b < 6; b++) {

      digitalWrite(top, HIGH);
      digitalWrite(mid, HIGH);
      digitalWrite(down, HIGH);
      for (byte i = 5; i <= 13; i++) {
        digitalWrite(i, HIGH);
        delay(300);
        digitalWrite(i, LOW);
      }
      digitalWrite(top, LOW);
      digitalWrite(mid, LOW);
      digitalWrite(down, LOW);
    }
  }
}