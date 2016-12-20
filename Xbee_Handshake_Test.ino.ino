int incomingByte;
const int ledPin = 13;
unsigned long previousMillis = 0;
const long interval_1 = 1000;
const long interval_2 = 2000;
void setup() {
 Serial.begin(9600);
 pinMode(13, OUTPUT);
}

void loop() {
  unsigned long currentMillis = millis();
  readSerial();
  if(currentMillis - previousMillis >= interval_1) {
    sendLow();
  }
  if(currentMillis - previousMillis >= interval_2) {
    sendHigh();
  previousMillis = currentMillis;
  }
}

void sendHigh() {
  Serial.print('1');
}
void sendLow() {
  Serial.print('0');
}

void readSerial() {
  if(Serial.available() > 0) {
    incomingByte = Serial.read();
    if(incomingByte == '1') {
      digitalWrite(ledPin, HIGH);
    }
    if(incomingByte == '0') {
      digitalWrite(ledPin, LOW);
    }
    Serial.print(incomingByte);
  }
}

