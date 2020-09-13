#include <dht.h>

int pin8 = 8;
int sensor = A0;
int sensorValue = 0;
int senzorAer;
int sensorProximitate = 11; 
int status;


dht DHT1;
dht DHT2;
dht DHT3;
dht DHT4;


#define DHT11_PIN1 7
#define DHT11_PIN2 6
#define DHT11_PIN3 5
#define DHT11_PIN4 4

String aer = "Normal"; 


void setup(){
  pinMode(sensorProximitate, INPUT);

 
  Serial.begin(9600);
  
}


void loop()
{
  
   status = digitalRead(sensorProximitate);
    if (status == HIGH) { 
      
     Serial.println("S-a detectat miscare");
    }
     else {
      Serial.println("Nu s-a detectat miscare");
    
     }


  sensorValue = analogRead(sensor);
  Serial.print("SenzorGaz = ");
  Serial.print(sensorValue);
  Serial.println(" ppm");
  
  int chk1 = DHT1.read11(DHT11_PIN1 );
  Serial.print("Temp1 = ");
  Serial.print(DHT1.temperature);
  Serial.println(" °C");
  Serial.print("Umid1 = ");
  Serial.print(DHT1.humidity);
  Serial.println(" %");

  int chk2 = DHT2.read11(DHT11_PIN2 );
  Serial.print("Temp2 = ");
  Serial.print(DHT2.temperature);
  Serial.println(" °C");
  Serial.print("Umid2 = ");
  Serial.print(DHT2.humidity);
  Serial.println(" %");

  int chk3 = DHT3.read11(DHT11_PIN3 );
  Serial.print("Temp3 = ");
  Serial.print(DHT3.temperature);
  Serial.println(" °C");
  Serial.print("Umid3 = ");
  Serial.print(DHT3.humidity);
  Serial.println(" %");

  int chk4 = DHT4.read11(DHT11_PIN4 );
  Serial.print("Temp4 = ");
  Serial.print(DHT1.temperature);
  Serial.println(" °C");
  Serial.print("Umid4 = ");
  Serial.print(DHT1.humidity);
  Serial.println(" %");

  
  delay(3000);
}
