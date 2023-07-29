#include <iostream>
#include <fstream>
#include <cstring>
#include "Pet.h"
#include "Koala.h"
#include "Dolphin.h"
#include "Rabbit.h"

using namespace std;

//image functions 
void Koala();
void Dolphin();
void Rabbit();
void KoalaPlaying();
void KoalaEating();
void KoalaSleeping();
void KoalaClimbing();
void DolphinPlaying();
void DolphinEating();
void DolphinSleeping();
void DolphinSwimming();
void RabbitPlaying();
void RabbitEating();
void RabbitSleeping();
void RabbitDigging();

int main() {
  int option;
  string filename;
  string petname;
  cout <<"Welcome to the Tamagotchi pet game!" << endl;
  cout << "-------------------------------------" << endl;
  cout << "Please choose from the following options: " << endl;
  cout << "1. Check up on an existing pet\n2. Create a new pet" << endl;
  cin >> option;

  if(option == 1){
    string name;
    string happiness;
    string energy;
    string hunger;
    string special;
    
    cout << "Please enter the file name as a .txt file: ";
    cin >> filename;
    ifstream currentpet(filename);
    while(!currentpet.is_open()){
      cout << "Oh no! It looks like the file you entered does not exist.\nTry a different file name:" << endl;
      cin >> filename;
    }
    if(currentpet.is_open()){
      cout<<"+++++++++++++++++++++++++++++++++++++++++++++"<<endl;
      cout<<endl;
      getline(currentpet, name);
      cout<<name<<endl;
      getline(currentpet, happiness);
      cout << happiness << endl;
      getline(currentpet, energy);
      cout<<energy << endl;
      getline(currentpet,hunger);
      cout<<hunger<<endl;
      getline(currentpet, special);
      cout<<special<<endl;
    }
    currentpet.close();
  }
  
  if(option == 2){
    int selection;
    int count;
    string name;
    string filename;
    cout << "Select an animal from the following options!" << endl;
    cout <<"**********************************************" << endl;
    cout<<"1. Koala: "<< endl;
    Koala();
    cout << endl;
    cout << "2. Dolphin: " << endl;
    Dolphin();
    cout << endl;
    cout <<"3. Rabbit: "<< endl;
    Rabbit();
    cout <<"**********************************************" << endl;
    cout <<"Option: ";
    cin >> selection;

    if(selection == 1){
      cout << "Congradulations on your new koala!\nPlease enter a name now:"<< endl;
      cin >> name;
      class Koala k;
      k.getHappiness();
      k.getEnergy();
      k.getHunger();
      k.setName(name);
      
      while(selection != 5){
      cout << "Please choose from the menu below:\n\t1. Play with "<<k.getName()<< "\n\t2. Feed "<<k.getName() << "\n\t3. Let "<<k.getName() <<" nap" <<"\n\t4. Let "<<k.getName()<<" climb trees" << "\n\t5. I'll check on "<< k.getName() <<" later" << endl<<endl;
      cout << "Activity: "<< endl;
      cin >>selection; 
      cout <<"**********************************************"<< endl;
          if(selection == 1){
            count++;
            k.nextHour();
            KoalaPlaying();
            k.play();
            cout<< endl;
            cout<<"------------------------------------------" <<endl;
            k.petCondition();
            cout<<"------------------------------------------" <<endl;
            k.petStatus();
            cout<<"------------------------------------------" <<endl;
          }
        if(selection == 2){
          count++;
          k.nextHour();
          KoalaEating();
          cout<<"------------------------------------------" <<endl;
          k.feed();
          cout << endl;
          cout<<"------------------------------------------" <<endl;
          k.petCondition();
          cout<<"------------------------------------------" <<endl;
          k.petStatus();
          cout<<"------------------------------------------" <<endl;
        }
        if(selection == 3){
          count++;
          k.nextHour();
          KoalaSleeping();
          k.sleep();
          cout<< endl;
          cout<<"------------------------------------------" <<endl;
          k.petCondition();
          cout<<"------------------------------------------" <<endl;
          k.petStatus();
          cout<<"------------------------------------------" <<endl;
        }
        if(selection ==4){
          count++;
          k.nextHour();
          KoalaClimbing();
          k.climbTrees();
          cout << endl;
          cout<<endl;
          cout<<"------------------------------------------" <<endl;
          k.petCondition();
          cout<<"------------------------------------------" <<endl;
          k.petStatus();
          cout<<"------------------------------------------" <<endl;
        }
        if(selection == 5){
          cout<<"enter a filename to save info into"<< endl;
          cin>>filename;
          ofstream fout;
          fout.open(filename);
          if(!fout){
            cout<<"this file doesnt exist, try again"<< endl;
            cin>>filename;
          }
          else{
            fout<< k.getName()<<"'s stats:\n";
            fout<< "Happiness: "<<k.getHappiness()<< endl;
            fout<<"Energy: "<<k.getEnergy()<<endl;
            fout<<"Hunger: " <<k.getHunger()<<endl;
            fout<<"Grouchiness: "<<k.getGrouchiness()<< endl;
          }
          cout<<"thank you for playing!"<< endl;

          }
        }
      }


    ///////////////////////////////////////////////////////////////////
    if(selection == 2){
      cout << "Congradulations on your new dolphin!\nPlease enter a name now:"<< endl;
      cin >> name;
      class Dolphin d;
      d.getHappiness();
      d.getEnergy();
      d.getHunger();
      d.setName(name);
      
      while(selection != 5){
      cout << "Please choose from the menu below:\n\t1. Play with "<<d.getName()<< "\n\t2. Feed "<<d.getName() << "\n\t3. Let "<<d.getName() <<" nap" <<"\n\t4. Let "<<d.getName()<<" swim laps" << "\n\t5. I'll check on "<< d.getName() <<" later" << endl<<endl;
      cout << "Activity: "<< endl;
      cin >>selection; 
      cout <<"**********************************************"<< endl;
          if(selection == 1){
            count++;
            d.nextHour();
            DolphinPlaying();
            d.play();
            cout<< endl;
            cout<<"------------------------------------------" <<endl;
            d.petCondition();
            cout<<"------------------------------------------" <<endl;
            d.petStatus();
            cout<<"------------------------------------------" <<endl;
          }
        if(selection == 2){
          count++;
          d.nextHour();
          DolphinEating();
          d.feed();
          cout << endl;
          cout<<"------------------------------------------" <<endl;
          d.petCondition();
          cout<<"------------------------------------------" <<endl;
          d.petStatus();
          cout<<"------------------------------------------" <<endl;
        }
        if(selection == 3){
          count++;
          d.nextHour();
          DolphinSleeping();
          d.sleep();
          cout<< endl;
          cout<<"------------------------------------------" <<endl;
          d.petCondition();
          cout<<"------------------------------------------" <<endl;
          d.petStatus();
          cout<<"------------------------------------------" <<endl;
        }
        if(selection ==4){
          count++;
          d.nextHour();
          DolphinSwimming();
          d.swim();
          cout << endl;
          d.petStatus();
          cout<<endl;
          cout<<"------------------------------------------" <<endl;
          d.petCondition();
          cout<<"------------------------------------------" <<endl;
          d.petStatus();
          cout<<"------------------------------------------" <<endl;
        }
        if(selection == 5){
          cout<<"enter a filename to save info into"<< endl;
          cin>>filename;
          ofstream fout;
          fout.open(filename);
          if(!fout){
            cout<<"this file doesnt exist, try again"<< endl;
            cin>>filename;
          }
          else{
            fout<< d.getName()<<"'s stats:\n";
            fout<< "Happiness: "<<d.getHappiness()<< endl;
            fout<<"Energy: "<<d.getEnergy()<<endl;
            fout<<"Hunger: " <<d.getHunger()<<endl;
            fout<<"Speed: "<<d.getSpeed()<< endl;
          }
          cout<<"thank you for playing!"<< endl;

          }
        }
      }
    /////////////////////////////////////////////////////////////////////
    if(selection == 3){
      cout << "Congradulations on your new rabbit!\nPlease enter a name now:"<< endl;
      cin >> name;
      class Rabbit r;
      r.getHappiness();
      r.getEnergy();
      r.getHunger();
      r.setName(name);
      
      while(selection != 5){
      cout << "Please choose from the menu below:\n\t1. Play with "<<r.getName()<< "\n\t2. Feed "<<r.getName() << "\n\t3. Let "<<r.getName() <<" nap" <<"\n\t4. Let "<<r.getName()<<" dig holes." << "\n\t5. I'll check on "<< r.getName() <<" later" << endl<<endl;
      cout << "Activity: "<< endl;
      cin >>selection; 
      cout <<"**********************************************"<< endl;
          if(selection == 1){
            r.nextHour();
            RabbitPlaying();
            r.play();
            cout<< endl;
            cout<<"------------------------------------------" <<endl;
            r.petCondition();
            cout<<"------------------------------------------" <<endl;
            r.petStatus();
            cout<<"------------------------------------------" <<endl;
          }
        if(selection == 2){
          r.nextHour();
          RabbitEating();
          r.feed();
          cout << endl;
          cout<<"------------------------------------------" <<endl;
          r.petCondition();
          cout<<"------------------------------------------" <<endl;
          r.petStatus();
          cout<<"------------------------------------------" <<endl;
        }
        if(selection == 3){
          r.nextHour();
          RabbitSleeping();
          r.sleep();
          cout<< endl;
          cout<<"------------------------------------------" <<endl;
          r.petCondition();
          cout<<"------------------------------------------" <<endl;
          r.petStatus();
          cout<<"------------------------------------------" <<endl;
        }
        if(selection ==4){
          r.nextHour();
          RabbitDigging();
          r.digHoles();
          cout << endl;
          r.petStatus();
          cout<<endl;
          cout<<"------------------------------------------" <<endl;
          r.petCondition();
          cout<<"------------------------------------------" <<endl;
          r.petStatus();
          cout<<"------------------------------------------" <<endl;
        }
        if(selection == 5){
          cout<<"enter a filename to save info into"<< endl;
          cin>>filename;
          ofstream fout;
          fout.open(filename);
          if(!fout){
            cout<<"this file doesnt exist, try again"<< endl;
            cin>>filename;
          }
          else{
            fout<< r.getName()<<"'s stats:\n";
            fout<< "Happiness: "<<r.getHappiness()<< endl;
            fout<<"Energy: "<<r.getEnergy()<<endl;
            fout<<"Hunger: " <<r.getHunger()<<endl;
            fout<<"Snappiness: "<<r.getSnappiness()<< endl;
          }
          cout<<"thank you for playing!"<< endl;

          }
        }
      }
    
    }
}

void Koala(){
    cout<<"   __                      __ "<<endl;
    cout<<" .-'  `'.._...-----..._..-'`  '-."<<endl;;
    cout<<"/                                \\" <<endl;
    cout<<"|  ,   ,'                '.   ,  |" << endl;
    cout<<" \  '-/                    \-'  /"<< endl;
    cout<<"  '._|          _           |_.'"<<endl;
    cout<<"     |    /\\   / \\    /\\    |"<< endl;
    cout<<"     |    \\/   | |    \\/    |"<< endl;
    cout<<"     \\        \\''/         /"<<endl;
    cout<<"       '.    =='^'==     .'"<<endl;
    cout<<"         `'------------'`"<< endl;
}

void Dolphin(){
cout<<"                ;'-. "<< endl;
cout<<"    `;-._        )  '---.._"<<endl;
cout<<"      >  `-.__.-'          `'.__"<<endl;
cout<<"     /_.-'-._         _,   ^ ---)"<<endl;
cout<<"            `'------/_.'----```"<<endl;
}

void Rabbit(){
cout<<"                                "<<endl;
cout<<"                     /\\    .-, "<< endl;
cout<<"                    /  ; .'  .' "<<endl;
cout<<"                   :   :/  .'   "<<endl;
cout<<"                    \\  ;-.'     "<<endl;
cout<<"       .--""""--..__/     `.    "<<endl;
cout<<"     .'           .'    `o  \\   "<<endl;
cout<<"    /                    `   ;  "<<endl;
cout<<"   :                  \\      :  "<<endl;
cout<<" .-;        -.         `.__.-'  "<<endl;
cout<<":  ;          \\     ,   ;       "<<endl;
cout<<"._:           ;   :   (        "<<endl;
cout<<"    \\/  .__    ;    \\   `-.     "<<endl;
cout<<"     ;     -,/_--`-..__)    "<<endl;
cout<<"     '""--.._:"<<endl;
}

void KoalaPlaying(){
cout<<"             __.....__"<<endl;
cout<<"  .-""-.-""`.- -       -.-""-.--."<<endl;
cout<<" /  .--,    .-.   .-.   , --.\\"<<endl;
cout<<"|  /    /  ( o_)_(_o )  \\   \\ |"<<endl;
cout<<"|  \\_, ;  '==`(   )`=='  ; ,_/ |"<<endl;
cout<<"\\    ;    ""` '.' `""   ;    /"<<endl;
cout<<"  `'--`'.  -;       .   .'`--'`"<<endl;
cout<<"         ;-._`'----'_.-;"<<endl;
cout<<"        / /  `'---'`  \\ \\"<<endl;
cout<<"       / /             \\ \\           ____   "<<endl;  
cout<<"      / ;               ; \\        /      \\"<<endl;
cout<<"     / |     .----.      | \\      |        |"<<endl;
cout<<"  _,|`';    '            ;'`|,_    \\______/ "<<endl;
cout<<" (_ |   \\      :        /   | _)"<<endl;
cout<<"  (_\\    \\._   '     _./    /_)"<<endl;
cout<<"     \\    |.'-.....-'.|    /"<<endl;
cout<<"      '.__/           \\__.' "<<endl;
}

void KoalaEating(){
cout<<"/'--.._ `'-=""=-'` _..--'\\"<<endl;
cout<<"|   ~. )  _     _  ( .~   |"<<endl;
cout<<" \\  '~/   a  _  a   \\~'  /"<<endl;
cout<<"  \\  `|     / \\     |`  /"<<endl;
cout<<"   `'--\\    \\_/    /--'`"<<endl;
cout<<"       .'._  J__.-'."<<endl;
cout<<"     / /  '-/_ `-  \\"<<endl;
cout<<"     / -""-'-.  '-.__/"<<endl;
cout<<"     \\__,-.\\/     | `\\"<<endl;
cout<<"     /  ;---.  .--'   |"<<endl;
cout<<"    |     /\\'-'      /"<<endl;
cout<<"    '.___.\\   _.--;'`)"<<endl;  
}

void KoalaSleeping(){
cout<<"/'--.._ `'-=""=-'` _..--'\\  zzzzzzz"<<endl;
cout<<"|   ~. )  _     _  ( .~   | zzz"<<endl;
cout<<" \\  '~/   -  _  -  \\~'   zzz "<<endl;
cout<<"  \\  `|     / \\     |`  zzz"<<endl;
cout<<"   `'--\\    \\_/    /-- z"<<endl;
cout<<"       .'._  J__.-'."<<endl;
cout<<"     / /  '-/_ `-  \\"<<endl;
cout<<"     / -""-'-.  '-.__/"<<endl;
cout<<"     \\__,-.\\/     | `\\"<<endl;
cout<<"     /  ;---.  .--'   |"<<endl;
cout<<"    |     /\\'-'      /"<<endl;
cout<<"    '.___.\\   _.--;'`)"<<endl;   
}

void KoalaClimbing(){
cout<<"             |       :     . |"<<endl;
cout<<"             | '  :      '   |"<<endl;
cout<<"             |  .  |   '  |  |"<<endl;
cout<<"   .--._ _...:.._ _.--. ,  ' |"<<endl;
cout<<"  (  ,  `        `  ,  )   . |"<<endl;
cout<<"   '-/              \\-'  |   |"<<endl;
cout<<"     |  o   /\\   o  |       :|"<<endl;
cout<<"     \      _\\/_     / :  '   |"<<endl;
cout<<"     /'._   ^^   _.;___      |"<<endl;
cout<<"   /`    `""""""`      `\\=   |"<<endl;
cout<<" /`                     /=  .|"<<endl;
cout<<";             '--,-----'=    |"<<endl;
cout<<"|                 `\\  |    . |"<<endl;
cout<<"\\                   \\___ :   |"<<endl;
cout<<"/'.                     `\\=  |"<<endl;
cout<<"\\_/`--......_            /=  |"<<endl;
cout<<"            |`-.        /= : |"<<endl;
cout<<"            | : `-.__ /` .   |"<<endl;
cout<<"            | .   ` |    '|"<<endl;
cout<<"            |  .  : `   . |  |"<<endl;  
}

void DolphinPlaying(){
cout<<"              ,-."<<endl;
cout<<"             /  (  '"<<endl;
cout<<"     *  _.--'!   '--._"<<endl;
cout<<"      ,'              ''."<<endl;
cout<<"'    |!                   \\"<<endl;
cout<<"   _.'  O      ___       ! \\"<<endl;
cout<<"  (_.-^, __..-'  ''''--.   )"<<endl;
cout<<"      /,'        '    _.' /"<<endl;
cout<<"   '         *    .-''    |"<<endl;
cout<<"                 (..--^.  ' "<<endl;
cout<<"                       | /"<<endl;
cout<<"                       '"<<endl;
}

void DolphinEating(){
cout<<"                                 _.-~  )"<<endl;
cout<<"                    _..--~~~~,'   ,-/     _"<<endl;
cout<<"                 .-'. . . .'   ,-','    ,' )"<<endl;
cout<<"               ,'. . . _   ,--~,-'__..-'  ,'"<<endl;
cout<<"             ,'. . .  (@)' ---~~~~      ,'"<<endl;
cout<<"            /. . . . '~~             ,-'"<<endl;
cout<<"           /. . . . .             ,-'"<<endl;
cout<<"          ; . . . .  - .        ,'"<<endl;
cout<<"         : . . . .       _     /"<<endl;
cout<<"        . . . . .          `-.:"<<endl;
cout<<"       . . . ./  - .          )"<<endl;
cout<<"      .  . . |  _____..---.._/ _______"<<endl;
cout<<"~---~~~~----~~~~             ~~"<<endl;
}

void DolphinSleeping(){
cout<<"                  ;'-. "<<endl;
cout<<"    `;-._        )  '---.._"<<endl;
cout<<"      >  `-.__.-'          `'.__    zzzz"<<endl;
cout<<"     /_.-'-._         _,   ^ ---)  zz"<<endl;
cout<<"     `       `'------/_.'----```"<<endl;
cout<<"                     `"<<endl;
}

void DolphinSwimming(){
cout<<"                                    _"<<endl;
cout<<"                               _.-~~.)"<<endl;
cout<<"         _.--~~~~~---....__  .' . .,'"<<endl;
cout<<"       ,'. . . . . . . . . .~- ._ ("<<endl;
cout<<"      ( .. .g. . . . . . . . . . .~-._"<<endl;
cout<<"   .~__.-~    ~`. . . . . . . . . . . -."<<endl;
cout<<"   `----..._      ~-=~~-. . . . . . . . ~-."<<endl;
cout<<"             ~-._   `-._ ~=_~~--. . . . . .~."<<endl;
cout<<"              | .~-.._  ~--._-.    ~-. . . . ~-."<<endl;
cout<<"               \\ .(   ~~--.._~'       `. . . . .~-.                ,"<<endl;
cout<<"                `._\\         ~~--.._    `. . . . . ~-.    .- .   ,'/"<<endl;
cout<<"_  . _ . -~\\        _ ..  _          ~~--.`_. . . . . ~-_     ,-','`  ."<<endl;
cout<<"             ` ._           ~                ~--. . . . .~=.-'. /. `"<<endl;
cout<<"       - . -~            -. _ . - ~ - _   - ~     ~--..__~ _,. /   \\  - ~"<<endl;
cout<<"              . __ ..                   ~-               ~~_. (  `"<<endl;
cout<<")`. _ _               `-       ..  - .    . - ~ ~ .    \    ~-` ` `  `. _"<<endl;
}

void RabbitPlaying(){
cout<<"       / \\"<<endl;
cout<<"    / _ \\"<<endl;
cout<<"   | / \ |"<<endl;
cout<<"   ||   || _______"<<endl;
cout<<"   ||   || |\\     \\"<<endl;
cout<<"   ||   || ||\\     \\"<<endl;
cout<<"   ||   || || \\    |"<<endl;
cout<<"   ||   || ||  \\__/"<<endl;
cout<<"   ||   || ||   ||"<<endl;
cout<<"    \\_/ \\_/ \\_//"<< endl;
cout<<"   /   _     _   \\"<<endl;
cout<<"  /               \\"<<endl;
cout<<"  |    O     O    |"<<endl;
cout<<"  |   \\  ___  /   |"<<endl;                         
cout<<" /     \\ \\_/ /     \\"<<endl;
cout<<"/  -----  |  --\\    \\"<<endl;
cout<<"|     \\__/|\\__/ \\   |"<<endl;
cout<<"\\       |_|_|       /"<<endl;
cout<<" \\_____       _____/"<<endl;
cout<<"       \     /"<<endl;
cout<<"       |     |"<<endl;
}

void RabbitEating(){
cout<<"               ((`\\"<<endl;
cout<<"            ___ \\ '--._"<<endl;
cout<<"         .'`   `'    o  )   ____"<<endl;
cout<<"        /    \\   '. _( ) <<*"<<endl;
cout<<"       _|    /_  \\ \\_\\_" <<endl;
cout<<"      {_\\______\\-'\\__\\_\\"<<endl;  
}

void RabbitSleeping(){
cout<<"                                __"<<endl;
cout<<"                     /\\    .- /"<<endl;
cout<<"                    /  ; .'  .' "<<endl;
cout<<"                   :   :/  .'   "<<endl;
cout<<"                    \\  ;-.'       zzz"<<endl;
cout<<"       .--""""--..__/     `.      zzz"<<endl;
cout<<"     .'           .'    `U  \\   zz"<<endl;
cout<<"    /                    `   ;  z"<<endl;
cout<<"   :                  \\      :  "<<endl;
cout<<" .-;        -.         `.__.-'  "<<endl;
cout<<":  ;          \\     ,   ;      "<<endl; 
cout<<"'._:           ;   :   (        "<<endl;
cout<<"    \\/  .__    ;    \\   `-.   "<<endl;  
cout<<"     ;     ''-,/_..--''`-..__) "<<endl;   
cout<<"     '""--.._:"<<endl;
}

void RabbitDigging(){
cout<<"                     ,"<<endl;
cout<<"                    /|      __"<<endl;
cout<<"                  / |   ,-~ /" << endl;
cout<<"                 Y :|  //  /"<<endl;
cout<<"                 | jj /( .^"<< endl;
cout<<"                 >-""-v"""<<endl;
cout<<"                /       Y"<<endl;
cout<<"                jo  o    |"<<endl;
cout<<"               ( ~T~     j"<<endl;
cout<<"                >._-' _./"<<endl;
cout<<"              /   ""  |"<< endl;
cout<<"             Y     _,  |"<<endl;
cout<<"            /| ;-~ _  l"<<endl;
cout<<"           / l/ ,-~    \\"<<endl;
cout<<"          \\//\\/      .- \\"<<endl;
cout<<"          Y        /    Y   "<< endl;
cout<<"          l       I     !"<<endl;
cout<<"          ]\\      _\\    /''\\"<<endl;
cout<<"          ('' ~----( ~   Y.  )"<<endl;
cout<<"~      ~~~~~~~~~~~~~~~~~~~~~~~~~~~  "<<endl;
}


/*Sources:
https://www.asciiart.eu/animals/dolphins
https://www.asciiart.eu/animals/rabbits
https://www.asciiart.eu/animals/marsupials
*/
