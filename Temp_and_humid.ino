#include <DHT.h>
#define Type DHT11
int sensorPin=4;
DHT HT(sensorPin, Type);
float humid;
float temper;

void setup() {
  Serial.begin(9600);
  HT.begin();

}

void loop() {
  humid=HT.readHumidity();
  temper=HT.readTemperature();

  Serial.println("Humidity: ");
  Serial.print(humid);
  Serial.println("Temperature: ");
  Serial.print(temper);
  delay(500);
  
}
