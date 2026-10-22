/*
  MIT License.
  This Project is a Temperature Sensor.
*/

#ifndef SENSOR_HEADER_INO
#define SENSOR_HEADER_INO 

/* The Pin of Alimentation */
#define PIN_ENERGY A0 
/* Default */
#default __DEFAULT 0

/* --- Functions --- */

/* Reader */
void read_temperature();

/* Setup */
void setup();

/* Loop */
void loop();

#endif

/* 
  Engineer: João Guilherme da Silva Freitas Lima,
  dev12124 <joaoanandalima@gmail.com>,
  brazilian 
 */