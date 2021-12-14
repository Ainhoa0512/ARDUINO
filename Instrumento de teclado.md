## INSTRUMENTO DE TECLADO

He montado el circuito del instrumento del teclado.

Para esta práctica necesitaremos:

    1 Buzzer
    4 botones
    2 resistencias de 10 kΩ
    1 resistencia de 220 Ω
    1 resistencia de 1 MΩ

En esta práctica, construiremos y programaremos un instrumento similar a un piano, es decir, un circuito que generará diferentes frecuencias según que botones (teclas) pulsemos.



### Codigo

 El código que usaremos será el siguiente:
 
```c++

int buttons[6];
//crea una lista con 6 elementos

buttons[0] == 2;
//le da a primer elemento el valor 2

int notes[] = {262,294,330,349};
//relaciona cada valor de la lista anterior con uno de esta

void setup(){
  Serial.begin(9600);
}

void loop(){

  int keyVal = analogRead(A0); 

//lee un valor entre 0 y 1024 dependiendo de qué botón está pulsado

  Serial.println(keyVal);
  
  if(keyVal ==1023){
    tone(8, notes[0]);
  }
  else if(keyVal >= 990 && keyVal <=1010){
    tone(8, notes[1]);
  }
  else if(keyVal <= 505 && keyVal <= 515){
    tone(8, notes[2]);
  }
  else if(keyVal >= 5 && keyVal <=10){
    tone(8, notes[3]);
  }
  else{
    noTone(8);
  }
}
/*

-Con estas últimas líneas de código, haremos que suene una nota según qué botón pulsemos, es decir, según qué valor de la lista este activo
*/

```




[CODIGO](https://github.com/Ainhoa0512/ARDUINO/blob/main/TECLADO.INO)


En el codigo al ponerlo en funcion hubo un problema con "</>" , teniamos uno en < = 505 y tenia que estar en > =505

Aqui esta el error corregido:

```
  else if(keyVal >= 990 && keyVal <=1010){
    tone(8, notes[1]);
  }
  else if(keyVal >= 505 && keyVal <= 515){
    tone(8, notes[2]);
  }
  else if(keyVal >= 5 && keyVal <=10){
    tone(8, notes[3]);
  }
  else if (keyVal <=4){
    Serial.println("No estás pulsando ningún botón");
    noTone(8);
  }
  ```


He puesto un potenciometro para poder cambiar la melodia:
[potenciometro](https://github.com/Ainhoa0512/ARDUINO/blob/main/teclado%20con%20ptenciometro.ino)

```c++
int notes[] = {262,294,330,349};

void setup(){
  Serial.begin(9600);
}

void loop(){

  
  
  int keyVal = analogRead(A0); 
  int valorPotenciometro =  analogRead(A1);

  Serial.println(keyVal);
  Serial.print("Valor del potenciómetro: ");
  Serial.println(valorPotenciometro);
  int valorVariacion = map(valorPotenciometro, 0,1023, -100,100);
  Serial.print("Valor de la variación");
  Serial.println(valorVariacion);
  
  if(keyVal >=1021){
    tone(8, notes[0]+valorVariacion);
  }
  
  else if(keyVal >= 990 && keyVal <=1010){
    tone(8, notes[1]+valorVariacion);
  }
  else if(keyVal >= 505 && keyVal <= 515){
    tone(8, notes[2]+valorVariacion);
  }
  else if(keyVal >= 5 && keyVal <=10){
    tone(8, notes[3]+valorVariacion);
  }
  else if (keyVal <=4){
    Serial.println("No estás pulsando ningún botón");
    noTone(8);
  }
  else{
    noTone(8);
  }
}

```

