#include "EmonLib.h"
// Include Emon Library
EnergyMonitor emon1;
int state = 0;
char relay = ' ';
// Create an instance
void setup()
{
  Serial.begin(9600);
  
  emon1.current(1, 30);             // Current: input pin, calibration.
  pinMode(2, OUTPUT);

  digitalWrite(2, LOW); 

}

void loop()
{
while (Serial.available()){
  double Irms = emon1.calcIrms(1480);  // Calculate Irms only
  Serial.print(" ");
  state = Serial.read();
  digitalWrite(2, relay); 
  if(Irms > 0.11){
  Serial.println("Bulb On");
}
else {
  Serial.println("Bulb Off");
}
  Serial.println(Irms);		       // Irms
}

  


}
// This code works and outputs 0.15A for a 150mA light bulb
