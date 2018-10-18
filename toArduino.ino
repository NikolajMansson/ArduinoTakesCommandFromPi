const int ledPin = 12;

void setup(){
pinMode(ledPin, OUTPUT);
Serial.begin(9600);
}

void loop(){
if (Serial.available()) {
light(Serial.read());
}
delay(500);
}

void light(int n){
digitalWrite(ledPin, HIGH);
delay(100);
digitalWrite(ledPin, LOW);
delay(100);
Serial.println("On");

}
