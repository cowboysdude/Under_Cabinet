#include <FastLED.h>

//LED strip
#define NUM_LEDS 5
#define DATA_PIN 3
#define BRIGHTNESS  0

#define LDR A0 //analog 0

CRGB leds[NUM_LEDS];
int ldr;

double Light (int RawADC0)
{
  double Vout=RawADC0*0.0048828125;
  int lux=(2500/Vout-500)/10;
  return lux;
}

void setup(){
  Serial.begin(9600);
  FastLED.addLeds<WS2812B, DATA_PIN, RGB>(leds, NUM_LEDS);  // GRB ordering is typical
  FastLED.setBrightness(100); //set generic brightness at beginning
  pinMode(LDR, INPUT);
}

void loop(){
  ldr = int(Light(analogRead(0)));  
  Serial.println(ldr);
    if (ldr >= 0 && ldr <= 10){ 
     FastLED.setBrightness(0);
    for (int i=0;i<NUM_LEDS;i++){
    leds[i].setRGB(255, 255, 255);  //white color
    FastLED.show();
    }
    }
    else if (ldr >= 0 && ldr <= 20){ 
     FastLED.setBrightness(20);
    for (int i=0;i<NUM_LEDS;i++){
    leds[i].setRGB(255, 255, 255);  //white color
    FastLED.show();
    }
    }
    else if (ldr >= 3 && ldr <= 50) {
      FastLED.setBrightness(50);
    for (int i=0;i<NUM_LEDS;i++){
    leds[i].setRGB(255, 255, 255);  //white color
    FastLED.show();
    }
    }
    else if (ldr >= 500 &&  ldr <= 1000) {
       FastLED.setBrightness(75);
    for (int i=0;i<NUM_LEDS;i++){
    leds[i].setRGB(255, 255, 255);  //white color
    FastLED.show();
    }
    }
    else {
      FastLED.setBrightness(128);
    for (int i=0;i<NUM_LEDS;i++){
    leds[i].setRGB(255, 255, 255);  //white color
    FastLED.show();
    }    
  }
  delay(100);
}
