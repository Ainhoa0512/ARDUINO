# Reloj de arena digital

Se necesita:

    4-6 LEDs
    Un botón
    Cables
    Una resistencia de 10 kilo-ohmnios (Marrón-Blanco-Naranja)
    Tantas resistencias de 220 ohmnios como LEDs (Rojo-Rojo-Marrón)
    

El codigo es:
```c++
int tiempo = 20;

void setup() {
  pinMode(8, INPUT);

  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  if (digitalRead(8) == HIGH) {
    time = 20;
  }

  if (tiempo >= 15) {
    digitalWrite(2, HIGH);
  } else {
    digitalWrite(2, LOW);
  }

  if (tiempo >= 10) {
    digitalWrite(3, HIGH);
  } else {
    digitalWrite(3, LOW);
  }

  if (tiempo >= 5) {
    digitalWrite(4, HIGH);
  } else {
    digitalWrite(4, LOW);
  }

  if (tiempo >= 0) {
    digitalWrite(5, HIGH);
  } else {
    digitalWrite(5, LOW);
  }

  tiempo--;
  delay(1000);
}
```
