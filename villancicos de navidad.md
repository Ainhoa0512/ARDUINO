# VILLANCICOS DE NAVIDAD

El dia de hoy aprendimos a progamar el arduino de tal manera que pueda tocar una melodia y tambien le aplicamos un kill switch.




```c++

int switchStateKill = 0;
bool isTheButtonBeingPressed = false;
bool play = false;
// el pin 2 no sera siempre el boton
int buttonPin=6;
const int pinAltavoz = 8;
 const int freqs[] = {261.63, 293.66, 329.63, 349.23, 392, 440, 466.16, 523.25, 587.33, 587.33, 659.25,698.46, 783.99, 880, 932.33, 1046.50};
 const int duracionNegra = 667;
 
void setup() {
  

  
   pinMode(buttonPin, INPUT);
}


void loop(){
checkButton();

 if (play) {
  tocarMelodia();
 }

 
}

 
void tocarMelodia(){
  tocarNota(1,0.5);
  tocarNota(3,2);
  tocarNota(-1,1);
}


void tocarNota(int numeroNota,float duracionNota)  {
  int pin = pinAltavoz;
  int duracionMilisegundos = duracionNegra * duracionNota;
  //
  if (numeroNota == -1){
    // tocar un silencio
     noTone(pin);
  delay(duracionMilisegundos);

    
  }

  else{
    // tocar una nota
  }
  int frecuencia = freqs [numeroNota];

  
 
  tone(pin,frecuencia,duracionMilisegundos);
  delay(duracionMilisegundos);
  
  
}


void checkButton(){
  switchStateKill = digitalRead(buttonPin);
  if (switchStateKill == HIGH){
    if (isTheButtonBeingPressed == false){
      play = !play;
      isTheButtonBeingPressed = true;
  }
}
else{
  isTheButtonBeingPressed = false;
}
}


```


VILLANCICO CAMBIADO

Cambiemos el villancico porque nos dios error al principio y cambiemos los comandos que dieron error.

```C++
int switchStateKill = 0;
bool isTheButtonBeingPressed = false;
bool play = false;
// el pin 2 no sera siempre el boton
int buttonPin=6;
const int pinAltavoz = 8;
 const int freqs[] = {261.63, 293.66, 329.63, 349.23, 392, 440, 466.16, 523.25, 587.33, 587.33, 659.25,698.46, 783.99, 880, 932.33, 1046.50};
 const int duracionNegra = 667;
 
void setup() {
  
  Serial.begin(9600);
  
   pinMode(buttonPin, INPUT);
}


void loop(){

  tocarMelodia();
 

 
}

 
void tocarMelodia(){
  tocarNota(1,0.5);
  tocarNota(3,2);
  tocarNota(-1,1);
}


void tocarNota(int numeroNota,float duracionNota)  {
  checkButton();
    Serial.println("Valor boton");
  Serial.println(switchStateKill);
 if (play) {
                int pin = pinAltavoz;
                int duracionMilisegundos = duracionNegra * duracionNota;
                //
                if (numeroNota == -1){
                  // tocar un silencio
                   noTone(pin);
                delay(duracionMilisegundos);
              
                  
                }
              
                else{
                  // tocar una nota
                }
                int frecuencia = freqs [numeroNota];
              
                
               
                tone(pin,frecuencia,duracionMilisegundos);
                delay(duracionMilisegundos);
                
 }
 else{

 }
}


void checkButton(){
  switchStateKill = digitalRead(buttonPin);
  if (switchStateKill == LOW){
    if (isTheButtonBeingPressed == false){
      play = !play;
      isTheButtonBeingPressed = true;
  }
}
else{
  isTheButtonBeingPressed = false;
}
}
```


## CAMPANA SOBRE CAMPANA

Elegimos esta cancion porque nos guataba el tema de escucharla con el arduino

```C++
int switchStateKill = 0;
bool isTheButtonBeingPressed = false;
bool play = false;
// el pin 2 no sera siempre el boton
int buttonPin=6;
const int pinAltavoz = 8;
 const int freqs[] = {261.63, 293.66, 329.63, 349.23, 392, 440, 466.16, 523.25, 587.33, 587.33, 659.25,698.46, 783.99, 880, 932.33, 1046.50};
 const int duracionNegra = 667;
 
void setup() {
  
  Serial.begin(9600);
  
   pinMode(buttonPin, INPUT);
}


void loop(){

  tocarMelodia();
 

 
}

 
void tocarMelodia(){
  tocarNota(3,1);
  tocarNota(-1,1);
  tocarNota(2,1);
  tocarNota(4,1);
  tocarNota(2,1);
  tocarNota(-0,1);
  tocarNota(4,1);
  tocarNota(5,1);
  tocarNota(6,1);
  tocarNota(5,1);
  tocarNota(4,1);
  tocarNota(5,1);
  tocarNota(3,1);
  tocarNota(3,1);
  tocarNota(2,1);
  tocarNota(3,1);
  tocarNota(4,1);
  tocarNota(2,1);
  tocarNota(-0,1);
  tocarNota(4,1);
  tocarNota(5,1);
  tocarNota(6,1);
  tocarNota(5,1);
  tocarNota(4,1);
  tocarNota(5,1);
  tocarNota(4,1);
  tocarNota(3,1);
  tocarNota(5,1);
  tocarNota(-0,1);
  tocarNota(-0,1);
  tocarNota(-1,1);
  tocarNota(-0,1);
  tocarNota(6,1);
  tocarNota(-1,1);
  tocarNota(-0,1);
}


void tocarNota(int numeroNota,float duracionNota)  {
  checkButton();
    Serial.println("Valor boton");
  Serial.println(switchStateKill);
 if (play) {
                int pin = pinAltavoz;
                int duracionMilisegundos = duracionNegra * duracionNota;
                //
                if (numeroNota == -1){
                  // tocar un silencio
                   noTone(pin);
                delay(duracionMilisegundos);
              
                  
                }
              
                else{
                  // tocar una nota
                }
                int frecuencia = freqs [numeroNota];
              
                
               
                tone(pin,frecuencia,duracionMilisegundos);
                delay(duracionMilisegundos);
                
 }
 else{

 }
}


void checkButton(){
  switchStateKill = digitalRead(buttonPin);
  if (switchStateKill == LOW){
    if (isTheButtonBeingPressed == false){
      play = !play;
      isTheButtonBeingPressed = true;
  }
}
else{
  isTheButtonBeingPressed = false;
}
}
```
MODIFICADO:

```C++

int switchStateKill = 0;
bool isTheButtonBeingPressed = false;
bool play = false;
// el pin 2 no sera siempre el boton
int buttonPin=6;
const int pinAltavoz = 8;
 const int freqs[] = {261.63, 293.66, 329.63, 349.23, 392, 440, 493.88, 523.25, 587.33, 587.33, 659.25,698.46, 783.99, 880, 932.33, 1046.50,466,164};
 const int duracionNegra = 667;
 
void setup() {
  
  Serial.begin(9600);
  
   pinMode(buttonPin, INPUT);
}


void loop(){

  tocarMelodia();
 

 
}

 
void tocarMelodia(){
  tocarNota(3,4); //CAMPANA SO
 // tocarNota(-1,1);
  tocarNota(2,1); //BRE
  tocarNota(4,1); //CAMP
  tocarNota(5,1);  //PA
  tocarNota(0,1);  // A
  tocarNota(4,1);   //NA
  tocarNota(5,1);  // Y SO
  tocarNota(6,1);  //BRE
  tocarNota(5,1);  // CAMP
  tocarNota(4,1); //PA
  tocarNota(5,1);  //NA
  tocarNota(3,1);  //U
  tocarNota(3,1);  //U
  tocarNota(2,1);  //NA
  tocarNota(3,1);  //A SO
  tocarNota(4,1);  //MA TEA LA
  tocarNota(2,1);  //VEN 
  tocarNota(0,1);  //TA
  tocarNota(4,1);  //A
  tocarNota(5,1);  //NA
  tocarNota(6,1);  //VE RAS
  tocarNota(5,1);  //AL
  tocarNota(4,1);  //NI
  tocarNota(5,1);  //ÑO
  tocarNota(4,1);  //EN LA
  tocarNota(3,1);  //CU
  tocarNota(5,1);  //U 
  tocarNota(0,1);  //NA
  tocarNota(0,1);  //BE
  tocarNota(-1,1);  //LEN
  tocarNota(0,1);  //CAM 
  tocarNota(6,1);  //PA
  tocarNota(-1,1);  //NAS
  tocarNota(0,1);  // DE
}


void tocarNota(int numeroNota,float duracionNota)  {
  checkButton();
    Serial.println("Valor boton");
  Serial.println(switchStateKill);
 if (play) {
                int pin = pinAltavoz;
                int duracionMilisegundos = duracionNegra * duracionNota;
                //
                if (numeroNota == -1){
                  // tocar un silencio
                   noTone(pin);
                delay(duracionMilisegundos);
              
                  
                }
              
                else{
                  // tocar una nota
                }
                int frecuencia = freqs [numeroNota];
              
                
               
                tone(pin,frecuencia,duracionMilisegundos);
                delay(duracionMilisegundos);
                
 }
 else{

 }
}


void checkButton(){
  switchStateKill = digitalRead(buttonPin);
  if (switchStateKill == LOW){
    if (isTheButtonBeingPressed == false){
      play = !play;
      isTheButtonBeingPressed = true;
  }
}
else{
  isTheButtonBeingPressed = false;
}
}
```


MELODIA

```c++

void tocarMelodia(){
tocarNota(5,0.75);
tocarNota(16,0.25);
tocarNota(5,0.5);
tocarNota(0,0.5);
tocarNota(6,0.5);
tocarNota(5,0.5);
tocarNota(16,0.5);
tocarNota(2,0.5);
tocarNota(5,1);
tocarNota(16,1);
tocarNota(5,1);
tocarNota(-1,1);
tocarNota(5,0.75);
tocarNota(16,0.25);
tocarNota(5,0.5);
tocarNota(0,0.5);
tocarNota(6,0.5);
tocarNota(5,0.5);
tocarNota(16,0.5);
tocarNota(2,0.5);
tocarNota(5,1);
tocarNota(16,1);
tocarNota(5,1);
tocarNota(-1,0.5)

```
