#include "74LS47.h"
#include "Arduino.h"

LS47::LS47(int pinA, int pinB, int pinC, int pinD){
  _pinA = pinA;
  _pinB = pinB;
  _pinC = pinC;
  _pinD = pinD;
  
  pinMode(_pinA, OUTPUT);
  pinMode(_pinB, OUTPUT);
  pinMode(_pinC, OUTPUT);
  pinMode(_pinD, OUTPUT);

  
}

void LS47::numSelect(int Number){
  switch(Number){
    case 0:
      digitalWrite(_pinA,LOW);
      digitalWrite(_pinB,LOW);
      digitalWrite(_pinC,LOW);
      digitalWrite(_pinD,LOW);
      break;
  
    case 1:
      digitalWrite(_pinA,LOW);
      digitalWrite(_pinB,LOW);
      digitalWrite(_pinC,LOW);
      digitalWrite(_pinD,HIGH);
      break;
  
    case 2:
      digitalWrite(_pinA,LOW);
      digitalWrite(_pinB,LOW);
      digitalWrite(_pinC,HIGH);
      digitalWrite(_pinD,LOW);
      break;
  
    case 3:
      digitalWrite(_pinA,LOW);
      digitalWrite(_pinB,LOW);
      digitalWrite(_pinC,HIGH);
      digitalWrite(_pinD,HIGH);
      break;
  
    case 4:
      digitalWrite(_pinA,LOW);
      digitalWrite(_pinB,HIGH);
      digitalWrite(_pinC,LOW);
      digitalWrite(_pinD,LOW);
      break;
  
    case 5:
      digitalWrite(_pinA,LOW);
      digitalWrite(_pinB,HIGH);
      digitalWrite(_pinC,LOW);
      digitalWrite(_pinD,HIGH);
      break;
  
    case 6:
      digitalWrite(_pinA,LOW);
      digitalWrite(_pinB,HIGH);
      digitalWrite(_pinC,HIGH);
      digitalWrite(_pinD,LOW);
      break;
  
    case 7:
      digitalWrite(_pinA,LOW);
      digitalWrite(_pinB,HIGH);
      digitalWrite(_pinC,HIGH);
      digitalWrite(_pinD,HIGH);
      break;
  
    case 8:
      digitalWrite(_pinA,HIGH);
      digitalWrite(_pinB,LOW);
      digitalWrite(_pinC,LOW);
      digitalWrite(_pinD,LOW);
      break;
  
    case 9:
      digitalWrite(_pinA,HIGH);
      digitalWrite(_pinB,LOW);
      digitalWrite(_pinC,LOW);
      digitalWrite(_pinD,HIGH);
      break;
  
    case 10:
      digitalWrite(_pinA,HIGH);
      digitalWrite(_pinB,HIGH);
      digitalWrite(_pinC,HIGH);
      digitalWrite(_pinD,HIGH);
      break;
    } 
}
