## INSTRUMENTO DE TECLADO

He montado el circuito del instrumento del teclado.

He puesto 4 interruptores, un piezo y tres resistencias

##### Codigo

 El código que usaremos será el siguiente:
```

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
con estas últimas líneas de código, haremos que suene una nota según qué botón pulsemos, es decir, según qué valor de la lista este activo
*/


Con este código, y las anteriores conexiones, la simulación en crcuits.io nos da el siguiente resultado:

```

ER
