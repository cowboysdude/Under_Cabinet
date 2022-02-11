// Cabinet Lighting sketch
// John Wade - Cowboysdude
// can work with Uno or Nano


#include <FastLED.h>

//LED strip
#define NUM_LEDS 1
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

  //ldrValue is based on how much light you have hitting your LDR mine is -5, you may have to adjust for your light source to turn off lights!
   ldrValue = map(ldr, 0, 1023, 100, -5); //100 is max brightness setting of LEDs 
  
  Serial.println("ldr: ");
  Serial.println(ldr);
  Serial.println("ldrValue: ");
  Serial.println(ldrValue);

  FastLED.setBrightness(ldrValue);
  for (int i=0;i<NUM_LEDS;i++){
    leds[i].setRGB(255, 255, 255);  //white color
    FastLED.show();
  }
  delay(100);  //repeat every 0.1 second
}
