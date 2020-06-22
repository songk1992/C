/*
 */

void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(0, OUTPUT);
}

void loop() {
  int LED = 13;
  int d = -1;
  int speed = 300;

  digitalWrite(LED, HIGH);
  delay(speed);
  digitalWrite(LED, LOW);
  LED += d;
  digitalWrite(LED, HIGH);
  delay(speed);
  digitalWrite(LED, LOW);
  LED += d;
  digitalWrite(LED, HIGH);
  delay(speed);
  digitalWrite(LED, LOW);

  digitalWrite(2, HIGH);
  delay(speed);
  digitalWrite(2, LOW);
  
  digitalWrite(1, HIGH);
  delay(speed);
  digitalWrite(1, LOW);
  
  digitalWrite(0, HIGH);
  delay(speed);
  digitalWrite(0, LOW);
  
  d = d * -1;
}
