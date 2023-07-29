#include "Koala.h"
#include <iostream>
#include <string>

Koala::Koala(){
  grouchiness = 20;
}
Koala::Koala(string n, int h, int e, int hun, int g) : Pet(n,h,e,hun), grouchiness(g){}

void Koala::setGrouchiness(int g){
  grouchiness = g;
}
int Koala::getGrouchiness(){
  return grouchiness;
}
void Koala::climbTrees(){
  happiness = happiness + 5;
  energy = energy - 20;
  hunger = hunger - 40;
  grouchiness = grouchiness + 25;
  maintainence();
}
void Koala::petStatus(){
  cout << "Happiness: " << happiness << endl;
  cout << "Energy: " << energy << endl;
  cout << "Hunger: " << hunger << endl;
  cout << "Grouchiness: " << grouchiness << endl;
}

void Koala::petCondition(){
  if(happiness < 30){
    cout << name << " is unhappy!" << endl;
  }
  if(energy < 30){
    cout << name << " is tired!" << endl;
  }
  if(hunger < 40){
    cout << name << " is hungry!" << endl;
  }
  if(grouchiness > 55){
    cout << name << " is grouchy!" << endl;
  }
}

