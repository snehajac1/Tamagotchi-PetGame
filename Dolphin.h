#ifndef DOLPHIN_H
#define DOLPHIN_H
#include "Pet.h"
#include <iostream>
#include <cstring>

class Dolphin: public Pet{
public:
  Dolphin();
  Dolphin(string, int, int, int, int);

  int getSpeed();
  void setSpeed(int);

  void swim();
  void petStatus();
  void petCondition();

private:
  int speed;
};

#endif 