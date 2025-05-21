#include <Wire.h>
int buttonAction = 0; 
int buttonPin = 2;
boolean lastState = LOW;
//int x;
void setup() {
  // put your setup code here, to run once:
 pinMode(buttonPin, INPUT); 
 Wire.begin();
 Serial.begin(9600);
}

void loop() {
  delay(100);
  // put your main code here, to run repeatedly:
  buttonAction = digitalRead(buttonPin);
  if ((buttonAction && lastState) == LOW){
    lastState = buttonAction;
    //if (buttonAction == HIGH){
      //x = 1;
    //}
    //else{
      //x = 0;
    //}
    Wire.beginTransmission(1);
    Wire.write(buttonAction);
    Wire.endTransmission();
  }
}
