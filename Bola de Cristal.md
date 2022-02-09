Materiales:

    1 sensor de movimiento
    1 potenciómetro
    1 resistencia de 220Ω
    1 resistencia de 10 kΩ
    1 panel LCD


Código:
 
```c++
// incluimos las librerias
#include <LiquidCrystal.h>

// iniciamos las librerias con los números de los pines de la interfaz
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

/*
aquí declaramos los pines que serán para cada uno de nuestros elementos
*/
const int switchPin = 6;

int switchState = 0;

int prevSwitchState = 0;

int reply;

void setup() {

  // inicia el numero de filas y columnas del LCD
  lcd.begin(16, 2);

  pinMode(switchPin,INPUT);

  // imprime unn mensaje en el LCD
  lcd.print("Ask the");

  // pone el cursor en la linea 1 columna 0
  lcd.setCursor(0, 1);

  //imprime en la segunda línea
  lcd.print("Crystal Ball!");

}

void loop() {
  //revisa el estado del switch
  switchState = digitalRead(switchPin);

  //compara el estado del switch con el anterior
  if (switchState != prevSwitchState) {

    /*
si el estado cambia de HIGH a LOW es porque la bola se ha movido
*/
    if (switchState == LOW) {
      // elige de forma aleatoria una respuesta
      reply = random(8);
      // limpia la pantalla tras dar una respuesta
      lcd.clear();
   
      lcd.setCursor(0, 0);
     //imprime el siguiente texto
      lcd.print("the ball says:");
      //pone el cursor en la segunda linea
      lcd.setCursor(0, 1);

      //elige la respuesta
      switch(reply){
      case 0:
        lcd.print("Yes");
        break;

      case 1:
        lcd.print("Most likely");
        break;

      case 2:
        lcd.print("Certainly");
        break;

      case 3:
        lcd.print("Outlook good");
        break;

      case 4:
        lcd.print("Unsure");
        break;

      case 5:
        lcd.print("Ask again");
        break;

      case 6:
        lcd.print("Doubtful");
        break;

      case 7:
        lcd.print("No");
        break;
      }
    }
  }
  //guarda el ultimo estado del switch
  prevSwitchState = switchState;
}

```
