# MOLINILLO

Energia = potencia > tiempo

E= P·T

P= I V

Potencia= intensidad x Voltaje 

Intensidad= voltaje dividido resistencia


##### Para esta práctica harán falta los siguientes elementos:

    1 transistor 
    1 diodo
    1 batería de 9 V
    1 botón
    1 resistencia de 10 kΩ
    
   
   **Esta practica consiste en controlar con nuestro Arduino un motor que funciona a 9 V, es decir, con un circuito electrónico de 5 V, controlar uno eléctrico de mayos voltaje.**
    
    
### Usaremos el siguiente código

```C++

 const int switchPin = 2;
const int motorPin = 9;
int switchState = 0;
void setup() {

    pinMode(motorPin, OUTPUT);
    pinMode(switchPin, INPUT);

}//Fin de la funcion setup.
void loop() {

    switchState = digitalRead(switchPin);

    if (switchState == HIGH) {
        digitalWrite(motorPin, HIGH);

    }
    else {
        digitalWrite(motorPin, LOW);

    }

}

```
![moli](https://user-images.githubusercontent.com/90753262/153202366-de1ddbe0-7dfe-4047-a891-022b7d98fc17.png)

