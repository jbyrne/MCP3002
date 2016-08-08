/*
  Example for MCP3002 - Library for communicating with MCP3002 Analog to digital converter.
  Based on the MCP3008 Library created by Uros Petrevski, Nodesign.net 2013
  Released into the public domain.
*/

#include <MCP3002.h>


// define pin connections
#define CS_PIN 12
#define CLOCK_PIN 9
#define MOSI_PIN 11
#define MISO_PIN 10

// put pins inside MCP3002 constructor
MCP3002 adc(CLOCK_PIN, MOSI_PIN, MISO_PIN, CS_PIN);

void setup() {
 
 // open serial port
 Serial.begin(9600);
  
}


void loop() {
  
  
  int val = adc.readADC(0); // read Chanel 0 from MCP3008 ADC
  Serial.println(val);
  delay(1000);
  int val = adc.readADC(1); // read Chanel 0 from MCP3008 ADC
  Serial.println(val);
  delay(1000);
  
  
}
