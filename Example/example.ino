/* 
  * MIT License. 
  * A Example using the Integrated LED in 
  * pin 13 of ATmega328.
 */

/* Function setup() */
void setup()
{
  /* Configure the pin 13 with Output */
  pinMode(13, OUTPUT);
}

/* Function loop() */
void loop() 
{
  /* Set HIGH */
  digitalWrite(13, HIGH); /* LED Actived! */
  delay(1000); /* Per 1 Second (1000 miliseconds) */
  /* Set LOW */
  digitalWrite(13, LOW); /* LED Desactived */
  delay(1000); /* Per 1 Second (1000 Miliseconds) */
}

/* 
  Engineer: João Guilherme da Silva Freitas Lima,
  dev12124 <joaoanandalima@gmail.com>,
  brazilian
 */