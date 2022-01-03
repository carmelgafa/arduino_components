#include <OneWire.h>
#include <DallasTemperature.h>

// use pin 10 to read temperature
OneWire oneWire(10);

DallasTemperature dallasTemperature(&oneWire);


void setup()
{
  Serial.begin(9600);
  sensor.begin();
}

void loop()
{
  dallasTemperature.requestTemperatures();

  // as we only have one device, the index of the thermometer
  //is 0
  float temp = dallasTemperature.getTempCByIndex(0);

  Serial.print("Temperature: ");
  Serial.println (temp);

  delay(800);
}
