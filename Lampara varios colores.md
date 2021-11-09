## PWM (Pulse Width Modulation)

Problema: Tengo un arduino que suministra 5V a un LED ==D

A mayor intensidad de corriente (A)(Amperios) el LED brilla mas

A menor intensidad de corriente el LED brilla menos (ver ley de ohm)

I= V/R

Si subimos o bajamos el voltaje, haremos lo mismo con la intensidad suponiendo que la resistencia del circuito es la misma

Entonces, si conecto un led con su resistencia de 220 ohmnios

A un voltage de 5V o de 3'3V 

Si lo ponemos a 5V el led brillara mas y con 3'3V brillara menos

Un pulso es una señal electrica

## Que es un pulso

Un pulso elenctrico es una señal de voltaje medida en el tiempo

Los ojos humanos podemso detectar cambios hasta entorno a 12Hz

A partir de 24Hz o 30Hz no somos capazes visualmente

Los pulsos modulados en ancho crean la ilusion de voltajes intermedios entre 0 y 5V

Para ello usan pulsos muy cortos

Que usaremos  a traves de funcion AnalogWrite (PIN, 0-255);
Esta funcion solo funciona en pine con PWM

Los pines con PWM estan marcados con el simbolo ~ (la tilde de la ñ)

La funcion nos pide dos cosas: Por un lado ( y lo primero) el numero de PIN
Por otro lado un numero entre o y 255
- 0 --> 0% de voltaje 
- 255 --> 100% sw voltaje (sv)

int= integrez (numero entero) significa que nuestra variable es un tipo de dato numerico no decimal
Le asigna un espacio en memoria 
Otros tipos:
String --> cadena de caracteres
Bool --> bolcano y es verdadero (true) o falso (false)
chaz --> 1 unico variable
float --> numeros decimales
a
