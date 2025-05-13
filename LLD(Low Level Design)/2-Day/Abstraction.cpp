#include<iostream>
using namespace std;

// Real life Car
class Car {
  public:
    virtual void startEngine() = 0;
    virtual void shiftGear(int gear) = 0;
    virtual void accelerate() = 0;
    virtual void breake() = 0;
    virtual void stopEngine() = 0;
    virtual ~Car() {}
};

class SpotsCar : Car {
  public:
    string brand;
    string model;
    bool isEngineOn;
    
};
