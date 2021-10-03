#include <FastLED.h>

#define NUM_LEDS 12
#define LED_PIN 2
int times=7000;
int milis=50;
int dTime =200;
CRGB leds[NUM_LEDS];
uint8_t hue1 = 0;
uint8_t hue2 = 120;
uint8_t hue3 = 60;
uint8_t hue4 = 120;
uint8_t hue5 = 200;
uint8_t hue6 = 5;
uint8_t hue7 = 240;
uint8_t hue8 = 89;
uint8_t hue9 = 56;
uint8_t hue10 = 47;
uint8_t hue11 = 196;
uint8_t hue12 = 211;

DEFINE_GRADIENT_PALETTE(bgpo_gp) {
    0,    9,    0,    222,
   79,  183,    0,    246,
  156,   92,  250,    104,
  255,  255,  104,      0

};

DEFINE_GRADIENT_PALETTE(bgpr_gp) {
    0,    9,    0,    222,
   79,  183,    0,    246,
  156,   92,  250,    104,
  200,  255,    0,      0
};

uint8_t paletteIndex = 0;

CRGBPalette16 myPal = bgpo_gp;


void setup() {
  
  
  FastLED.addLeds<WS2812B,LED_PIN,GRB>(leds,NUM_LEDS);
  FastLED.setBrightness(20);
  Serial.begin(9600);
  
  
  unsigned long start = millis (); //Saniyeler için gerekli komut. Buna dokunma.
  int start2 = millis();
  int start3 = millis();
  
  
  //----------------------------Palet Kısmımız
  while(millis () - start <= times){    // burada milisaniye bakımından hesap yapıyoruz. 30000ms = 30 saniye.
    fill_palette(leds,NUM_LEDS,paletteIndex,255/NUM_LEDS,myPal,255,LINEARBLEND);

    //fadeToBlackBy(leds,NUM_LEDS,1);
  
    EVERY_N_MILLISECONDS(10){
      paletteIndex++;
    }
  
    FastLED.show();
  
    }
    
    //---------------------Paletten Sonra Söndürdük--------------------
    while(millis()-start<=times+600){
    for(int i = 0 ; i <= NUM_LEDS;){
      EVERY_N_MILLISECONDS(milis){
      i++;
      }
      leds[i] = CRGB::Black;
      FastLED.show();
    }
    }

    //---------------------Yanacak İlk renk-----------------------------
    while(millis()-start<=times+1300){
    for(int i = 0 ; i <= NUM_LEDS;){
      EVERY_N_MILLISECONDS(milis){
      i++;
      }
      leds[i] = CRGB(0,0,255);
      FastLED.show();
    }
    }
  //-----------------------Yanacak İkinci Renk----------------------------
  
    while(millis()-start<=times+1900){
    for(int i = NUM_LEDS ; i >= 0;){
      EVERY_N_MILLISECONDS(milis){
      i--;
      }
      leds[i] = CRGB(0,255,0);
      FastLED.show();
    }
    }
  //-----------------------Yanacak Üçüncü Renk-----------------------------
    while(millis()-start<=times+2500){
    for(int i = 0 ; i <= NUM_LEDS;){
      EVERY_N_MILLISECONDS(milis){
      i++;
      }
      leds[i] = CRGB(183,0,246);
      FastLED.show();
    }
    }
  //----------------------Yanacak dördüncü renk------------------------------
    while(millis()-start<=times+3100){
    for(int i = NUM_LEDS ; i >= 0;){
      EVERY_N_MILLISECONDS(milis){
      i--;
      }
      leds[i] = CRGB(255,124,0);
      FastLED.show();
    }
    }

    //---------------------Yine Söndürdük--------------------
    while(millis()-start<=times+3700){
    for(int i = 0 ; i <= NUM_LEDS;){
      EVERY_N_MILLISECONDS(milis){
      i++;
      }
      leds[i] = CRGB::Black;
      FastLED.show();
    }
    }
    //-------------------Artık renk değişim kısmımız girecek---------------------

      delay(dTime);
      leds[5] = CHSV(hue5,255,255);
      FastLED.show();
      delay(dTime);
      
      //delay(dTime);
      leds[9] = CHSV(hue9,255,255);
      FastLED.show();
      delay(dTime);

      delay(dTime);
      leds[10] = CHSV(hue10,255,255);
      FastLED.show();
      delay(dTime);
            
      delay(dTime);
      leds[1] = CHSV(hue1,255,255);
      FastLED.show();
      //delay(dTime);
            
      //delay(dTime);
      leds[7] = CHSV(hue7,255,255);
      FastLED.show();
      delay(dTime);
            
      delay(dTime);
      leds[12] = CHSV(hue12,255,255);
      FastLED.show();
      //delay(dTime);
            
      delay(dTime);
      leds[3] = CHSV(hue3,255,255);
      FastLED.show();
      delay(dTime);
            
      //delay(dTime);
      leds[4] = CHSV(hue4,255,255);
      FastLED.show();
      delay(dTime);
            
      delay(dTime);
      leds[11] = CHSV(hue11,255,255);
      FastLED.show();
      //delay(dTime);
    
      //delay(dTime);
      leds[2] = CHSV(hue2,255,255);
      FastLED.show();
      delay(dTime);
       
      delay(dTime);
      leds[6] = CHSV(hue6,255,255);
      FastLED.show();
      delay(dTime);

      delay(dTime);
      leds[8] = CHSV(hue8,255,255);
      FastLED.show();
      delay(dTime);
    //-----------------------------------------------------------------
}

void loop() {
   


  leds[1] = CHSV(hue1,255,255);
  leds[2] = CHSV(hue2,255,255);
  leds[3] = CHSV(hue3,255,255);
  leds[4] = CHSV(hue4,255,255);
  leds[5] = CHSV(hue5,255,255);
  leds[6] = CHSV(hue6,255,255);
  leds[7] = CHSV(hue7,255,255);
  leds[8] = CHSV(hue8,255,255);
  leds[9] = CHSV(hue9,255,255);
  leds[10] = CHSV(hue10,255,255);
  leds[11] = CHSV(hue11,255,255);
  leds[12] = CHSV(hue12,255,255);
  
  

  EVERY_N_MILLISECONDS(15){
    hue1++;
  }
  EVERY_N_MILLISECONDS(30){
    hue2++;
  }
    EVERY_N_MILLISECONDS(85){
    hue3++;
  }
  EVERY_N_MILLISECONDS(22){
    hue4++;
  }
  EVERY_N_MILLISECONDS(17){
    hue5++;
  }
  EVERY_N_MILLISECONDS(42){
    hue6++;
  }
  EVERY_N_MILLISECONDS(23){
    hue7++;
  }
  EVERY_N_MILLISECONDS(92){
    hue8++;
  }
  EVERY_N_MILLISECONDS(20){
    hue9++;
  }
  EVERY_N_MILLISECONDS(11){
    hue10++;
  }
  EVERY_N_MILLISECONDS(28){
    hue11++;
  }
  EVERY_N_MILLISECONDS(33){
    hue12++;
  }
  FastLED.show();
}
