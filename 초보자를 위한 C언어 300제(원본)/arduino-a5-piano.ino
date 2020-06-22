/*
 */


void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  //            솔  솔  라  라  솔  솔  미  솔  솔  미  미  레  솔  솔  라  라  솔  솔  미  솔  미  레  미 도
  int LED[] = { 12, 12, 13, 13, 12, 12, 10, 12, 12, 10, 10,  9, 12, 12, 13, 13, 12, 12, 10, 12, 10, 9, 10, 8 };
  int S[]   = {  1,  1,  1,  1,  1,  1,  2,  1,  1,  1,  1,  4,  1,  1,  1,  1,  1,  1,  2,  1,  1,  1, 1, 4  };
  int P[]   = {  1,  1,  1,  1,  1,  1,  2,  1,  1,  1,  1,  4,  1,  1,  1,  1,  1,  1,  2,  1,  1,  1, 1, 4  };
  int speed = 250;
  
  for( int i=0; i<24; i++ ) {
      digitalWrite(LED[i], HIGH);
      delay(speed*S[i]);
      digitalWrite(LED[i], LOW);
      delay(speed*P[i]);
  }
}
