### THEREMIN

````

Montaje:

He montado el theremin opitoc que es un "instrumento" que produce sonido en base a los movimientos de las manos del musico que este alrededor del instrumento.

El theremin detecta donde estan las manos del musico en relacion a dos antenas, que lee la transformacion capacitiva en las antenas.

Al conectar el piezo y las otras piezas he escrito el codigo y he añadido otros codigos.




````


En el codigo he puesto   *Serial.begin(9600);   ,  map(sensorValue, 0,1023,50, 4000);  ,  Serial.println(pitch);   , esto lo que hace es que te va a decir que hace el sensorValue = analogRead(A0);*


Snippet es el sonido de las tijeras.


Un fragmento de codigo que no funciona por si mismo, que sirve para una funcion concreta.

Los snippes se copian, se pegan y, normalmente se adaptan al codigo a mano por le programadore.





 ```
 
 
 Circuito:

En el protoboard conectamos los cables de las lineas de bus exteriores a la corriente y la toma de tierra.
 
Toma el piezo y conecta en un lado a la toma de tierra y el otro a la clavija digital 8 en Arduino 

Se coloca un fototransistor en la placa de prototipado, conectando el terminal mas largo al 5V, e otro terminal se conecta al pin analogico del Arduino, y la tierra a travs de una resistencia de 10 kilo ohmnios (linea naranja)

He puesto una variante para que al darle al boton que hemos puesto nuevo cuando le des funcione y suene el altavoz

``` 



 Foto codigo:
 
![143226680-573abe17-3f56-4f0c-9047-0d401395f0c5](https://user-images.githubusercontent.com/90753262/143233908-9aa5f9f7-8091-44dc-889e-04c6c324d6a4.png) 



//Colocar en la sección de variables globales.

int switchState = 0;

bool isTheButtonBeingPressed = false;

bool play = false;

int buttonPin = 2;

// Incluir dentro del setup.

pinMode(buttonPin, INPUT);

//Sustituir loop.

void loop() {

  checkButton();
  
  if (play) {
  
  // incluir aquí el código a ejecutar   
  
  }
  
}

//función checkbutton 

void checkButton(){

  switchState = digitalRead(buttonPin);
  
  if (switchState == HIGH && !isTheButtonBeingPressed){
  
    play = !play;
    
    isTheButtonBeingPressed = true;
    
  }
  
  if (switchState == LOW)
  
  {
  
  isTheButtonBeingPressed = false;
  
  }

}


(chechiliaa)
