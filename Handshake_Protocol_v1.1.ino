#include <SoftwareSerial.h>
SoftwareSerial Xbee(2, 3); //RX, TX

int incomingMsg;
const int ledPin = 13;

void setup() {
  Xbee.begin(9600);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  
}

void readSerial() {
  while(Serial.available() == 0);
  incomingMsg = Serial.read();
}

void handshake() {
  while(Serial.available() == 0);
  incomingMsg = Serial.read();
  Serial.write(incomingMsg);
}

