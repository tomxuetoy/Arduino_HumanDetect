#include <SoftwareSerial.h>

int inPin = 13;
int val = 0; // variable to store the read value

void setup()
{
  Serial.begin(57600);
  pinMode(inPin, INPUT);
}

void loop()
{
  val = digitalRead(inPin); // read the input pin
  delay(1000);
  Serial.println(val);
}
