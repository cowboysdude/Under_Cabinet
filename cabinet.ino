// Cowboysdude with a HUGE help from kgray9 @ https://forum.arduino.cc/
//LED strip
#include "FastLED.h"

#define NUM_LEDS 5  //5 for testing only.  USE your actual numbers and remember you will need to power these from power supply, not the UNO or NANO
#define DATA_PIN 3

//LDR
#define LDR A0 //analog 0

CRGB leds[NUM_LEDS];

int ldr;
int ldrValue;

void setup(){
  Serial.begin(9600);
  FastLED.addLeds<WS2812B, DATA_PIN, RGB>(leds, NUM_LEDS);  // GRB ordering is typical
  FastLED.setBrightness(100); //set generic brightness at beginning
  pinMode(LDR, INPUT);
}

void loop(){
  
  ldr = analogRead(LDR); 
  ldrValue = map(ldr, 0, 735, 70, 0);
   
  // For testing so you can set your above ldrValue map function
   /*Serial.print("\t ldr :");
   Serial.println(ldr);
   Serial.print("ldrValue :");
   Serial.print(ldrValue ); */

if (ldrValue > 0){
  FastLED.setBrightness(ldrValue);
  for (int i=0;i<NUM_LEDS;i++){
    leds[i].setRGB(255, 255, 255);  //white color
    FastLED.show();
  }
}  
  delay(10);  //repeat every 0.1 second
}
