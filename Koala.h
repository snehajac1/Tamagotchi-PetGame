#ifndef KOALA_H
#define KOALA_H
#include "Pet.h"
#include <iostream>
#include <cstring>

class Koala: public Pet{
public:
  Koala();
  Koala(string, int, int, int, int);

  int getGrouchiness();
  void setGrouchiness(int);
  void climbTrees();
  void petStatus();
  void petCondition();

private:
  int grouchiness;
};

#endif 
