int sensorValue ;
int sensorLow = 600;
int sensorHigh = 1023;

const int ledPin = 13;

void setup () {

  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, HIGH);

  while (millis() <5000) {

    sensorValue = analogRead(A0);
    if (sensorValue < sensorHigh) {
      sensorHigh = sensorValue;
}

if (sensorValue < sensorLow) {

  sensorLow = sensorValue;
  
}
Serial.begin(9600);

 }

 digitalWrite(ledPin, LOW);
}

void loop() { 

  sensorValue = analogRead(A0);
  Serial.println(sensorValue);
  int pitch =

  map(sensorValue, 0,1023,50, 4000);
  Serial.println(pitch);
  tone (8, pitch, 20);

  delay(10);

  
  }
