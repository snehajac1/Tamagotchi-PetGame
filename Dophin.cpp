
#include "Dolphin.h"
#include <iostream>
#include <string>

Dolphin::Dolphin(){
  speed = 8;
}
Dolphin::Dolphin(string n, int h, int e, int hun, int s) : Pet(n,h,e,hun), speed(s){}

void Dolphin::setSpeed(int s){
  speed = s;
}
int Dolphin::getSpeed(){
  return speed;
}

void Dolphin::swim(){
  happiness = happiness + 15;
  energy = energy - 30;
  hunger = hunger - 15;
  speed = speed - 5;
}
void Dolphin::petStatus(){
  cout << "Happiness: " << happiness << endl;
  cout << "Energy: " << energy << endl;
  cout << "Hunger: " << hunger << endl;
  cout << "Swimming speed (mph): " << speed << endl;
}

void Dolphin::petCondition(){
  if(happiness < 30){
    cout << name << " is unhappy!" << endl;
  }
  if(energy < 30){
    cout << name << " is tired!" << endl;
  }
  if(hunger < 20){
    cout << name << " is hungry!" << endl;
  }
  if(speed < 5){
    cout << name << " is swimming slowly!" << endl;
  }
}

