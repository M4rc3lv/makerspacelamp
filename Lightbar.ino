#include <Adafruit_NeoPixel.h>

#define LEDRING 2

Adafruit_NeoPixel Led(11, LEDRING, NEO_GRB + NEO_KHZ800);
void Knipper(bool);

void LoopLicht() { 
 for(int i=1; i<11; i++) {
  Zwart();
  Led.setPixelColor(i,Led.Color(200,200,200));  
  Led.show();
  delay(300);
 }
 for(int i=10; i>=1; i--) {
  Zwart();
  Led.setPixelColor(i,Led.Color(200,200,200));  
  Led.show();
  delay(300);
 }
}

void setup() {
 Serial.begin(115200);
 Led.begin();
}

void loop() {
 Wit();
 delay(60000);
 LoopLicht();
 return;

 Tinkel();
 Knipper2();
 Looplicht2();
 Rainbow();
 Blue2();
 delay(10000);
 Zwart();
 Knipper(true);
 //Looplicht();
 Knipper(false);

 for(int i=1; i<11; i++) Led.setPixelColor(i,Led.Color(8,160,160));
 Led.show();
 delay(30000);
}

void Wit() {
 for(int i=1; i<11; i++) Led.setPixelColor(i,Led.Color(200,200,200));
 Led.show();
}

void Rainbow() {
 for(int i=1; i<11; i++) Led.setPixelColor(i,Led.Color(200,0,0)); // Groen
 Led.show();
 delay(6000);
 for(int i=1; i<11; i++) Led.setPixelColor(i,Led.Color(0,0,200)); // Blauw
 Led.show();
 delay(6000);
 for(int i=1; i<11; i++) Led.setPixelColor(i,Led.Color(0,200,0)); // Rood
 Led.show();
 delay(6000);
}

void Blue2() {
 Led.setPixelColor(1,Led.Color(168,160,16));
 Led.setPixelColor(3,Led.Color(168,160,16));
 Led.setPixelColor(5,Led.Color(168,160,16));
 Led.setPixelColor(7,Led.Color(168,160,16));
 Led.setPixelColor(9,Led.Color(168,160,16));
 Led.setPixelColor(11,Led.Color(168,160,16));

 Led.setPixelColor(2,Led.Color(16,160,160));
 Led.setPixelColor(4,Led.Color(16,160,160));
 Led.setPixelColor(5,Led.Color(16,160,160));
 Led.setPixelColor(8,Led.Color(16,160,160));
 Led.setPixelColor(10,Led.Color(16,160,160));
 Led.show();
}

void Tinkel() { 
 for(int k=0; k<20; k++) {
  for(int j=0; j<4; j++) {
   bool b=random(10)<5;   
   for(int i=1; i<11; i++) Led.setPixelColor(i,b?Led.Color(0,150,150):Led.Color(0,0,0));  
   Led.show();  
   delay(80);
  }
 }
}

void Knipper2() {
 int t=random(300)+100;
 for(int k=0; k<4; k++) {
  for(int j=0; j<4; j++) {
   for(int i=1; i<11; i++)  Zwart();
   Led.show();
   delay(t);
   for(int i=1; i<11; i++) Led.setPixelColor(i,Led.Color(0,0,220));  
   Led.show();  
   delay(t);
  }
 }
}

void Knipper(bool rood) {
int t=random(400)+100;
 for(int j=0; j<4; j++) {
  for(int i=1; i<11; i++)  Zwart();
  Led.show();
  delay(t);
  for(int i=1; i<11; i++) Led.setPixelColor(i,rood?Led.Color(0,200,0):Led.Color(0,0,220));  
  Led.show();  
  delay(t);
 }
}

void Zwart() {
 for(int i=0; i<11; i++) Led.setPixelColor(i,Led.Color(0,0,0));
 Led.show();
}

void Looplicht2() { 
 for(int i=1; i<11; i++) {
  Zwart();
  Led.setPixelColor(i,Led.Color(0,220,0));  
  Led.show();
  delay(300);
 }
 for(int i=10; i>=1; i--) {
  Zwart();
  Led.setPixelColor(i,Led.Color(0,220,0));  
  Led.show();
  delay(300);
 }
}




