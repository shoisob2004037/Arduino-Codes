#include<Servo.h>
Servo myservo;
int pos;
void setup()
{
  myservo.attach(3);
}
void loop()
{
  /*myservo.write(0);
  delay(500);
  myservo.write(30);
  delay(500);
  myservo.write(60);
  delay(500);
  myservo.write(90);
  delay(500);
  myservo.write(150);
  delay(500);
  myservo.write(180);
  delay(500);*/
  for(pos = 90; pos <= 180; pos += 1){    // goes from 90 degrees to 180 degrees:
  myservo.write(pos);                   //tell servo to move according to the value of 'pos' variable:
  delay(15);                            //wait 15ms for the servo to reach the position:
  } 
for(pos = 180; pos >= 0; pos-= 1) {     // goes from 180 degrees to 0 degrees:
  myservo.write(pos);                   //tell servo to move according to the value of 'pos' variable:
  delay(15);                            //wait 15ms for the servo to reach the position:
  }
for(pos = 0; pos<=90; pos += 1) {       //goes from 180 degrees to 0 degrees:
  myservo.write(pos);                   //tell servo to move according to the value of 'pos' variable:
  delay(15);                            //wait 15ms for the servo to reach the position:
  }
}