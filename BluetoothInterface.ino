/*
Code Name: Arduino Bluetooth home automation 
Author: ammarece
Description: This program is used to control a home applainces using a app
that communicates with Arduino through a bluetooth module.
License: Remixing or Changing this Thing is allowed. Commercial use is not allowed.
*/
char val;
#define relay1 13
#define relay2 12
#define relay3 11
#define relay4 10

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(relay1, OUTPUT);
pinMode(relay2, OUTPUT);
pinMode(relay3, OUTPUT);
pinMode(relay4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available())
{
  val= Serial.read();
  Serial.println(val);
  if(val=='A')
  digitalWrite(relay1, LOW);
  else if(val=='a')
  digitalWrite(relay1, HIGH);
   if(val=='B')
  digitalWrite(relay2, LOW);
  else if(val=='b')
  digitalWrite(relay2, HIGH);
  if(val=='C')
  digitalWrite(relay3, LOW);
  else if(val=='c')
  digitalWrite(relay3, HIGH);
   if(val=='D')
  digitalWrite(relay4, LOW);
  else if(val=='d')
  digitalWrite(relay4, HIGH);
}
}
