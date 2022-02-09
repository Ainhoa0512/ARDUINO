Para montar el circuito de este proyecto necesitamos los siguientes componentes:

– 1 Led rojo.

– 1 Resistencia de 220Ω.

– 1 Resistencia de 1MΩ.

– Una lámina de material conductor. Por ejemplo, un trozo de papel de aluminio.

![imagen](https://user-images.githubusercontent.com/90753262/153200537-27d34907-496d-410d-a968-fe49fffa47c5.png)


CODIGO
```c++
#include <CapacitiveSensor.h>
CapacitiveSensor capSensor = CapacitiveSensor(4,2);
int threshold = 1000;
const int ledPin = 12;
void setup() {

    Serial.begin(9600);
    pinMode(ledPin, OUTPUT);

}//Fin de la funcion setup.
void loop() {

    long sensorValue = capSensor.capacitiveSensor(30);
    Serial.println(sensorValue);
       if(sensorValue > threshold) {
        digitalWrite(ledPin, HIGH);
    }
    else {
        digitalWrite(ledPin, LOW);
    }
        delay(10);

}//Fin de la funcion loop.
```


![laparatac](https://user-images.githubusercontent.com/90753262/153202306-4f713ed5-00fb-4a1e-b004-40d80e2c75e4.jpeg)
