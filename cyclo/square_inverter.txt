void setup() {
pinMode(9,OUTPUT);
pinMode(10, OUTPUT);
}
void loop() {
delayMicroseconds(1);
digitalWrite(9,HIGH);
delayMicroseconds(9998);
digitalWrite(9,LOW);
delayMicroseconds(2);
digitalWrite(10,HIGH);
delayMicroseconds(9998);
digitalWrite(10,LOW);
delayMicroseconds(1);
}
//



void setup() {
pinMode(5,OUTPUT);
pinMode(6, OUTPUT);
pinMode(10,OUTPUT);
pinMode(11, OUTPUT);
 }
void loop() {
delayMicroseconds(1);
digitalWrite(5,HIGH);
digitalWrite(6,HIGH);
delayMicroseconds(9995);
digitalWrite(5,LOW);
digitalWrite(6,LOW);
delayMicroseconds(5);
digitalWrite(10,HIGH);
digitalWrite(11,HIGH);
delayMicroseconds(9995);
digitalWrite(10,LOW);
digitalWrite(11,LOW);
delayMicroseconds(4);
}