
GND. -> Ground, toma tierra, 0V de potencial eléctrico.

5V -> Voltaje de 5V. Esto hay que conectarlo a los 5 voltios de potencia para que pueda ser leído correctamente.

VRx -> Este es el Voltaje Regulado en el eje X horizontal. Hay que conectarlo a un pin analógico para que pueda leerse.

VRy -> Este es el Voltaje Regulado en el eje Y vertical. Hay que conectarlo a un pin de lectura analógica para que pueda leerse.

SW -> Switch. Este es el botón. Al estar ya integrado se puede conectar directamente a un pin digital sin tener que incluir la resistencia. Sin embargo este es un botón PULL UP en vez de un botón PULL DOWN (que es lo que hemos realizado en el resto del curso). Esto significa que cuando está sin pulsar leerá 1 (o HIGH) y cuando esté pulsado leerá 0 (o LOW).




codigo:

```c++
const int pinLED = 6;
const int pinJoyX = A0;
const int pinJoyY = A1;
const int pinJoyButton = 3;

void setup() {
   pinMode(pinJoyButton , INPUT_PULLUP);   //activar resistencia pull up 
   Serial.begin(9600);
   pinMode(6,OUTPUT);
}

void loop() {
   int Xvalue = 0;
   int Yvalue = 0;
   bool buttonValue = false;

   //leer valores
   Xvalue = analogRead(pinJoyX);
   delay(100);                 //es necesaria una pequeña pausa entre lecturas analógicas
   Yvalue = analogRead(pinJoyY);
   buttonValue = digitalRead(pinJoyButton);

   //mostrar valores por serial
   Serial.print("X:" );
   Serial.print(Xvalue);
   Serial.print(" | Y: ");
   Serial.print(Yvalue);
   Serial.print(" | Pulsador: ");
   Serial.println(buttonValue);
   delay(10);
   if (buttonValue == LOW){
    digitalWrite(6,HIGH);
  
    }
    else {
      digitalWrite(6,LOW);
    }
}


//
//if digitalWrite(6,HIGH);
//Serial.print("X:")
//delay(250) 
//}
```
