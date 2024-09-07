int sensor1 = 12;
int sensor2 = 13;
int sensor3 = 11;
int echo = A1;
int triger = A0;
int m1 = 5;
int m2 = 6;
int m3 = 9;
int m4 = 10;

void setup() {
  pinMode(sensor1, INPUT);
  pinMode(sensor2, INPUT);
  pinMode(sensor3, INPUT);
  pinMode(echo, INPUT);
  pinMode(triger, OUTPUT);
  pinMode(m1, OUTPUT);
  pinMode(m2, OUTPUT);
  pinMode(m3, OUTPUT);
  pinMode(m4, OUTPUT);
}

void loop() {
  if (digitalRead(sensor3) == HIGH) {
    digitalWrite(m1, 5);
    digitalWrite(m2, LOW);
    digitalWrite(m3, LOW);
    digitalWrite(m4, 5);
    delay(100);
  } else if (digitalRead(sensor2) == LOW) {
    digitalWrite(m1, LOW);
    digitalWrite(m2, 5);
    digitalWrite(m3, 5);
    digitalWrite(m4, LOW);
    delay(100);
  } else if (digitalRead(sensor1) == LOW) {
    digitalWrite(m1, LOW);
    digitalWrite(m2, 5);
    digitalWrite(m3, LOW);
    digitalWrite(m4, 5);
    delay(100);
  } else {
    digitalWrite(m1, LOW);
    digitalWrite(m2, LOW);
    digitalWrite(m3, LOW);
    digitalWrite(m4, LOW);
  }
}
