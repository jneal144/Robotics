#include <SoftwareSerial.h>
SoftwareSerial Xbee(2, 3);

String incomingMsg;
const int ledPin = 13;

void setup() {
  Xbee.begin(9600);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  readSerial();
  Serial.print(incomingMsg);
}

void readSerial() {
  while(Serial.available() == 0);
  incomingMsg = Serial.readString();
  if(incomingMsg.substring(0, 1) == "**" && (incomingMsg.substring(incomingMsg.length() - 1, incomingMsg.length() - 2)) == "##") {
    digitalWrite(ledPin, HIGH);
  }
  else {
    digitalWrite(ledPin, LOW);
  }
}
