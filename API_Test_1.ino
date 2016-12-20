#include <XBee.h>

XBee xbee = XBee()

void setup() {
  Serial.begin(9600);
  xbee.setSerial(Serial);
}

uint8_t payload[] = {0, 0};

