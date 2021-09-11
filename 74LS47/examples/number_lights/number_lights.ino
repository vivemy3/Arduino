#include <74LS47.h>


const int pinA = 4, pinB = 3, pinC = 2, pinD = 5;
LS47 numPad(pinA,pinB,pinC,pinD);

void setup() {

}

void loop() {
  int timer = 1000;
  
  for (int i = 0; i<10; i++){    
    numPad.numSelect(i);
    delay(timer);
  }

}
