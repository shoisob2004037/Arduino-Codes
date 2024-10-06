int angle, deg1;
void setup() {
  pinMode(5, OUTPUT);
attachInterrupt(1, test2, FALLING);
//attachInterrupt(0, test, RISING);
}

void loop() {
  // put your main code here, to run repeatedly:

}
void test2(){
  deg1=90;
  angle = (10000/180) *deg1;
  delayMicroseconds(angle);
  digitalWrite(5, HIGH);
  delay(10);
  digitalWrite(5, LOW);
}