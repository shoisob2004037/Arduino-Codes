int r = 0, f = 0, p1 = 5, n1 = 6, p2 = 9, n2 = 10, c = 0, d = 0;
int factor = 3;
int angle,deg1 = 50,deg2 = 50,angle2;
void setup() { 
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  attachInterrupt(0, test, RISING);
  attachInterrupt(1, test2, FALLING);
  pinMode(p1, OUTPUT);
  pinMode(n1, OUTPUT);
  pinMode(p2, OUTPUT);
  pinMode(n2, OUTPUT);
  digitalWrite(p1, LOW);
  digitalWrite(n1, LOW);
  digitalWrite(p2, LOW);
  digitalWrite(n2, LOW);
  r = 0, f = 0, c = 0, d = 0;

}
void loop() {
}
void test() {
  if (c <= (factor * 2) - 1 ) {
    delayMicroseconds(1200);
    angle = (10000 / 180) * deg1;
    delayMicroseconds(angle);
    digitalWrite(p2, HIGH);
    delay(1);
    digitalWrite(p2, LOW);
    c++;
    c++;
  } else {
    if (d <= (factor * 2) - 1) {
      angle2 = (10000 / 180) * deg2;
      delayMicroseconds(angle2);
      digitalWrite(n1, HIGH);
      delay(1);
      digitalWrite(n1, LOW);
      d++;
      d++;
    } else {
      c = 0;
      d = 0;
      test();
    }

  }


}

void test2() {

  if (c <= (factor * 2) - 1 ) {
    angle = (10000 / 180) * deg1;
    delayMicroseconds(angle);
    digitalWrite(p1, HIGH);
    delay(1);
    digitalWrite(p1, LOW);
    c++;
    c++;
  } else {
    if (d <= (factor * 2) - 1) {
      delayMicroseconds(50);
      angle2 = (10000 / 180) * deg2;
      delayMicroseconds(angle2);
      digitalWrite(n2, HIGH);
      delay(1);
      digitalWrite(n2, LOW);
      d++;
      d++;
    } else {
      c = 0;
      d = 0;
      test2();
    }
  }
}
