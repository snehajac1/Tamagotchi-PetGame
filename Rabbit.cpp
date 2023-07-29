#include "Rabbit.h"
#include <iostream>
#include <string>

Rabbit::Rabbit(){
  snappiness = 10;
}
Rabbit::Rabbit(string n, int h, int e, int hun, int d) : Pet(n,h,e,hun), snappiness(d){}

void Rabbit::digHoles(){
  happiness = happiness + 15;
  energy = energy - 30;
  hunger = hunger + 30;
  snappiness  = snappiness + 12;
}
void Rabbit::setSnappiness(int d){
  snappiness = d;
}
int Rabbit::getSnappiness(){
  return snappiness;
}
void Rabbit::petStatus(){
  cout << "Happiness: " << happiness << endl;
  cout << "Energy: " << energy << endl;
  cout << "Hunger: " << hunger << endl;
  cout << "Snappiness: " << snappiness << endl;
}

void Rabbit::petCondition(){
  if(happiness < 30){
    cout << name << " is unhappy!" << endl;
  }
  if(energy < 30){
    cout << name << " is tired!" << endl;
  }
  if(hunger > 50){
    cout << name << " is hungry!" << endl;
  }
  if(snappiness > 30){
    cout << name << " is snappy!" << endl;
  }
}

