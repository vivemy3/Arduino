#ifndef LS47_h
#define LS47_h

class LS47 {
  public:
  LS47(int pinA, int pinB, int pinC, int pinD);
  void numSelect(int Number);
  
  private:
    int _pinA;
    int _pinB;
    int _pinC;
    int _pinD;
};

#endif
