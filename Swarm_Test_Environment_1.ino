 char msg = ' ';
 const int led = 13;
 
 void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  while(Serial.available() == 0) {
    msg = Serial.read();
    if(msg == 'H') {
      digitalWrite(led, HIGH);
    }
    if(msg == 'L') {
      digitalWrite(led, LOW);
    }
  }
}
