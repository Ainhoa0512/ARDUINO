### THEREMIN

````

Montaje:

He montado el theremin opitoc que es un "instrumento" que produce sonido en base a los movimientos de las manos del musico que este alrededor del instrumento.

El theremin detecta donde estan las manos del musico en relacion a dos antenas, que lee la transformacion capacitiva en las antenas.

Al conectar el piezo y las otras piezas he escrito el codigo y he añadido otros codigos.




````


En el codigo he puesto   *Serial.begin(9600);   ,  map(sensorValue, 0,1023,50, 4000);  ,  Serial.println(pitch);   , esto lo que hace es que te va a decir que hace el sensorValue = analogRead(A0);*


 ```
 
 
 Circuito:

En el protoboard conectamos los cables de las lineas de bus exteriores a la corriente y la toma de tierra.
 
Toma el piezo y conecta en un lado a la toma de tierra y el otro a la clavija digital 8 en Arduino 

Se coloca un fototransistor en la placa de prototipado, conectando el terminal mas largo al 5V, e otro terminal se conecta al pin analogico del Arduino, y la tierra a travs de una resistencia de 10 kilo ohmnios (linea naranja)

He puesto una variante para que al darle al boton que hemos puesto nuevo cuando le des funcione y suene el altavoz

```

 
 

