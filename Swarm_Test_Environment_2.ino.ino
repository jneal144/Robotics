void setup() {
Serial.begin(9600);
}
void loop() {
Serial.println("H"); //turn on the LED
delay(1000);
Serial.println("L");//turn off the LED
delay(1000);
}
