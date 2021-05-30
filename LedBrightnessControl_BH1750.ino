//Done by Ahmad Saif

#include<Wire.h> 
#include <BH1750.h>  

int LED = 7;

BH1750 GY30;

void setup()
{
  Serial.begin(9600); 
  Wire.begin(); 
  GY30.begin();
  Serial.println("AHMAD SAIF");
  pinMode(LED,OUTPUT);
}
void loop()
{
  float lux = GY30.readLightLevel(); 
  Serial.println((String)"Light: " + lux + " lx"); 
  delay(1000); 
  if(lux<50)
  {
    digitalWrite(LED,HIGH);
  }
  else
  {
    digitalWrite(LED,LOW);
  }
} 
