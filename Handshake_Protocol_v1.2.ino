#include <SoftwareSerial.h>
SoftwareSerial Xbee(2, 3); //RX, TX

void setup() {
  Xbee.begin(9600);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

}
