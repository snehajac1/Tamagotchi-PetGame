#include "Pet.h"
#include <iostream>
#include <cstring>
#include <random>
#include <time.h>


Pet::Pet(){
  name = "";
  happiness = 25;
  energy = 100;
  hunger = 20;
}
Pet::Pet(string n, int h, int e, int hun){
  name = n;
  happiness = h;
  energy = e;
  hunger = hun;
}

void Pet::setHappiness(int h){
  happiness = h;
}
void Pet::setEnergy(int e){
  energy = e;
}
void Pet::setHunger(int g){
  hunger = g;
}
void Pet::setName(string n){
  name = n;
}

int Pet::getHappiness(){
  return happiness;
}
int Pet::getEnergy(){
  return energy;
}
int Pet::getHunger(){
  return hunger;
}
string Pet::getName(){
  return name;
}

void Pet::feed(){
  happiness = happiness + 20;
  energy = energy + 25;
  hunger = hunger + 35;
  maintainence();
}
void Pet::sleep(){
  
  happiness = happiness + 10;
  energy = energy + 30;
  hunger = hunger - 5;
  maintainence();
}
void Pet::play(){
  happiness = happiness + 20;
  energy = energy - 15;
  hunger = hunger - 5;
  maintainence();
}

void Pet::maintainence(){
  if(happiness > 100){
    happiness = 100;
  }
  if(happiness < 0){
    happiness = 10;
  }
  if(happiness == 0){
    cout <<"**********************************************"<< endl;
    cout << name <<"'s really unhappy."<< endl;
    cout <<"**********************************************"<< endl;
  }
  if(energy > 100){
    energy = 100;
  }
  if(energy < 0){
    energy = 10;
  }
  if(energy == 0){
    cout <<"**********************************************"<< endl;
    cout << name <<"'s really tired."<< endl;
    cout <<"**********************************************"<< endl;
  }
  if(hunger > 100){
    hunger = 100;
  }
  if(hunger <= 0){
    hunger = 0;
    cout <<"**********************************************"<< endl;
    cout << name <<"'s gone."<< endl;
    cout <<"**********************************************"<< endl;
    exit(0);
  }
}

void Pet::petStatus(){
  cout << "Happiness: " << happiness << endl;
  cout << "Energy: " << energy << endl;
  cout << "Hunger: " << hunger << endl;
}

void Pet::petCondition(){
  if(happiness < 30){
    cout << name << "is unhappy!" << endl;
  }
  if(energy < 30){
    cout << name << "is tired!" << endl;
  }
  if(hunger > 70){
    cout << name << "is hungry!" << endl;
  }
}

void Pet::nextHour(){
  int random;
  srand(time(NULL));
  random = rand() % 4 + 1;

  if(random == 1){
    cout<<"------------------------------------------" <<endl;
    cout << name <<" says hi"<< endl; 
    cout<<"------------------------------------------" <<endl;
  }
  else if(random == 2){
    cout<<"------------------------------------------" <<endl;
    cout << name <<" says that you're cool "<< endl; 
    cout<<"------------------------------------------" <<endl;
  }  
  else if(random == 3){
    cout<<"------------------------------------------" <<endl;
    cout << "its been an hour!"<< endl;
    cout<<"------------------------------------------" <<endl;
    sleep();
  }
  else if(random == 4){
    cout<<"------------------------------------------" <<endl;
    cout << "its been an hour!"<< endl;
    cout<<"------------------------------------------" <<endl;
    play();
  }
}

