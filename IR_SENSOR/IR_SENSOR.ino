void setup()
{
  pinMode(13,OUTPUT);
  pinMode(3,INPUT);
  Serial.begin(9600);
}
void loop()
{
  if (digitalRead(3)==HIGH)
  {
    digitalWrite(13,HIGH);
    delay(1);
  }
  else
  {
    digitalWrite(13,LOW);
    delay(1);
  }

}