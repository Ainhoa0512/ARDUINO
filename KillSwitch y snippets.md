Vamos a añadir una funcionalidad a un proyecto anterior.

En el grupo estoy con Joan y vamos a hacer el proyecto medidor de aqmor. A este pryecto le vamos a añadir un boton que lo apague y lo encienda.


![ENLACE CODIGO](https://github.com/Ainhoa0512/ARDUINO/blob/main/love_o_meter.ino)

CODIGO ORIGINAL:

````


const int sensorPin = A0;
const float baselineTemp = 90.0;

void setup()
{
  
  Serial.begin(9600);
  
  for (int pinNumber = 2; pinNumber < 5; pinNumber++)
  {
    pinMode(pinNumber, OUTPUT);
    digitalWrite(pinNumber, LOW);
  }
}

void loop()
{
  int sensorVal = analogRead(sensorPin);
  
  Serial.print("Sensor Value: ");
  Serial.print(sensorVal);
  
  float voltage = (sensorVal/1024.0) * 5.0;
  
  Serial.print(", Volts:");
  Serial.print(voltage);
  
  Serial.print(", degrees C: ");
  float temperature = (voltage - .5) * 100;
  Serial.println(temperature); 
  
  if (temperature < baselineTemp)
  {
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
  }
  
  else if (temperature >= baselineTemp + 2 && temperature < baselineTemp + 4)
  {
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
  }
  
  else if (temperature >= baselineTemp + 4 && temperature < baselineTemp + 6)
  {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
  }
  
  else if (temperature > baselineTemp + 6)
  {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
  }
  
  delay(1); 
  
}

````


