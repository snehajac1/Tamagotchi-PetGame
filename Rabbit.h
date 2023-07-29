#ifndef RABBIT_H
#define RABBIT_H
#include "Pet.h"
#include <iostream>
#include <cstring>

class Rabbit: public Pet{
public:
  Rabbit();
  Rabbit(string, int, int, int, int);
  int getSnappiness();
  void setSnappiness(int);
  void digHoles();
  void petStatus();
  void petCondition();

private:
  int snappiness;
};

#endif 
