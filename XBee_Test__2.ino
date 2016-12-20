const int ledPin = 13;
int incomingByte;

void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  Serial.write(H);
  delay(1000);
  Serial.write(L);
  delay(1000);

}
