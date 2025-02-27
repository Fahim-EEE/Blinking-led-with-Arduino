int ledPin = 13;
int time = 500;
void setup() {
    pinMode(ledPin,OUTPUT);

}

void loop() {
    digitalWrite(ledPin,HIGH);
    delay(time);
    digitalWrite(ledPin,LOW);
    delay(time);

}
