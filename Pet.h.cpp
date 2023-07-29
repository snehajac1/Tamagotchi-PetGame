#include <iostream>
#include <cstring>
using namespace std;
#ifndef PET_H
#define PET_H

class Pet{
public:
  //default connstructor
  Pet();
  //overloaded contructor
  Pet(string, int, int, int);
  //setters and getters
  void setHappiness(int);
  int getHappiness();
  void setEnergy(int);
  int getEnergy();
  void setHunger(int);
  int getHunger();
  void setName(string);
  string getName();
  int count = 0;

  //activities 
  void feed();
  void sleep();
  void play();

  virtual void nextHour();
  virtual void maintainence();
  virtual void petStatus();
  virtual void petCondition();

protected:
string name;
int happiness;
int energy;
int hunger;
};
#endif

