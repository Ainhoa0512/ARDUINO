# Reloj de arena digital

Se necesita:

    6 LEDS
    6 resistencias de 220Ω
    1 resistencia de 10 kΩ
    1 sensor de movimiento

    

El codigo es:
```c++
//nombra la constante para el pin del sensor
const int switchPin = 8;

unsigned long previousTime = 0; 
//guarda el último momento en que un led fue encendido

int switchState = 0;
//variable para el estado actual del sensor

int prevSwitchState = 0;
//guarda el anterior estado del sensor

int led = 2;
//variable referida a los leds

//3000 = 3000 milisegundos
long interval = 3000;
//este será el intervalo entre un led que se enciende y el siguiente

void setup() {

 for(int x = 2;x<8;x++){
   pinMode(x, OUTPUT);
//declara lo que serán las salidas de los leds, con un contador

 }

 //declara el pin del sensor como entrada
 pinMode(switchPin, INPUT);

}

void loop(){ 

 //guarda el tiempo desde el cual la placa comenzó el programa
 unsigned long currentTime = millis(); 

 /*
compara el tiempo con el que hubo la última vez que un led se encendió
y si es mayor que el intervalo definido, enciende el siguiente
*/

 if(currentTime - previousTime > interval) {

   //guarda la última vez que cambiaste un led
   previousTime = currentTime; 

   //enciende el led
   digitalWrite(led, HIGH);
   led++; 
   
   if(led == 7){

   }
 }

 //lee el valor del sensor
 switchState = digitalRead(switchPin); 

 //si el sensor cambia, apaga todos los sensores
 if(switchState != prevSwitchState){

   for(int x = 2;x<8;x++){    
     digitalWrite(x, LOW);

   }  
   
   //resetea la variable de los leds a la original
   led = 2;
   
   //resetea el contador de tiempos
   previousTime = currentTime;
 }
 //guarda el último estado en que estuvo el led
 prevSwitchState = switchState;

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
