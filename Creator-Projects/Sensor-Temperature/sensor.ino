/*
  MIT License.
  This Project is a Temperature Sensor.
*/

/* Header-Lib */
#include "sensor-header.ino"

/* --- Functions */

/* Reader */
void read_temperature() 
{
  /* 1. Read using analogRead() */
  int result = analogRead(PIN_ENERGY); /* Store in a Variable */

  /* 2. Convert the result in a 
    valid temperature */
  int milivolts = (result * 5000 / 1023);
  int temperature = (milivolts - 500) / 10;
  
  /* 3. Print in your PC */
  Serial.print("The temperature is: ");
  Serial.println(temperature);
}

/* Setup */
void setup()
{
  /* Initialize Serial */
  Serial.begin(9600);
}

/* Loop */
void loop()
{
  /* 1. Read the Serial and 
    print in your PC */
  read_temperature();

  /* 2. A 1 Second Delay */
  delay(1000);
}