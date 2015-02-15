#include <string>
#include <stdlib.h>
#include<iostream>
#include "creature.h"
#include "human.h"
#include "elf.h"
#include "cyberdemon.h"
#include "demon.h"
#include "balrog.h"
#include <ctime> 
#include <cstdlib>
using namespace std;
void battleArena(Creature &creature1, Creature &creature2);

int main() {
    srand(time(0));
   
    
    
    elf e(50,50);
    balrog b(5,100);
    
    battleArena(e, b);
    
    human h(10,50);
    balrog b1(5,50);
    
    battleArena(h, b1);
    
    cyberdemon c (20,100);
    
    battleArena(c,h);
    battleArena(e, h);
    battleArena(c,b1);
}

void battleArena(Creature &creature1, Creature &creature2)
{
    
    
    int health1=creature1.getHitpoints();
    int health2=creature2.getHitpoints();
    
    
    cout  <<  "Battle between "  <<  creature1.getSpecies()<<  " and "  <<  creature2.getSpecies()
    << endl  <<  endl;
   
    do{
        
    
    int damage = creature1.getDamage();
    cout  <<   endl  <<  " Total damage = "  <<  damage  <<  endl  <<  endl;

    
    int damage2 = creature2.getDamage();
    cout  <<  endl  <<  " Total damage = "  <<  damage2  <<  endl  <<  endl;
    
    health1 = health1 - damage2;
    health2 = health2 - damage;
    
    cout  <<  endl  <<  creature1.getSpecies()  <<  " hit points is now "  << health1  <<  endl;
    cout  <<  endl  <<  creature2.getSpecies()  <<  " hit points is now "  << health2  <<  endl;

    }while (health1 >=0  && health2 >=0);
    
    if(health1<=0  && health2>0)
    {
        cout  <<  creature2.getSpecies()  << " wins!"  <<  endl  <<  endl;
    }
    
    else if (health2 <=0  && health1 > 0)
    {
        cout  <<  creature1.getSpecies()  << " wins!"  <<  endl  <<  endl;
    }
    
    else
    {
        cout    << " It's a tie!"  <<  endl  <<endl  <<  endl  ;
        
    }
        

}

/*Battle between elf and balrog
 
 The elf attacks for 39 points!
 
 Total damage = 39
 
 The balrog attacks for 4 points!
 Balrog speed attack inflicts 4 additional damage points!
 
 Total damage = 8
 
 
 elf hit points is now 42
 
 balrog hit points is now 61
 The elf attacks for 34 points!
 Magical attack inflicts 34 additional damage points!
 
 Total damage = 68
 
 The balrog attacks for 5 points!
 Balrog speed attack inflicts 2 additional damage points!
 
 Total damage = 7
 
 
 elf hit points is now 35
 
 balrog hit points is now -7
 elf wins!
 
 Battle between human and balrog
 
 The human attacks for 5 points!
 
 Total damage = 5
 
 The balrog attacks for 3 points!
 Balrog speed attack inflicts 1 additional damage points!
 
 Total damage = 4
 
 
 human hit points is now 46
 
 balrog hit points is now 45
 The human attacks for 2 points!
 
 Total damage = 2
 
 The balrog attacks for 2 points!
 Balrog speed attack inflicts 4 additional damage points!
 
 Total damage = 6
 
 
 human hit points is now 40
 
 balrog hit points is now 43
 The human attacks for 1 points!
 
 Total damage = 1
 
 The balrog attacks for 3 points!
 Balrog speed attack inflicts 4 additional damage points!
 
 Total damage = 7
 
 
 human hit points is now 33
 
 balrog hit points is now 42
 The human attacks for 2 points!
 
 Total damage = 2
 
 The balrog attacks for 1 points!
 Balrog speed attack inflicts 4 additional damage points!
 
 Total damage = 5
 
 
 human hit points is now 28
 
 balrog hit points is now 40
 The human attacks for 10 points!
 
 Total damage = 10
 
 The balrog attacks for 2 points!
 Balrog speed attack inflicts 1 additional damage points!
 
 Total damage = 3
 
 
 human hit points is now 25
 
 balrog hit points is now 30
 The human attacks for 5 points!
 
 Total damage = 5
 
 The balrog attacks for 5 points!
 Balrog speed attack inflicts 2 additional damage points!
 
 Total damage = 7
 
 
 human hit points is now 18
 
 balrog hit points is now 25
 The human attacks for 9 points!
 
 Total damage = 9
 
 The balrog attacks for 4 points!
 Balrog speed attack inflicts 4 additional damage points!
 
 Total damage = 8
 
 
 human hit points is now 10
 
 balrog hit points is now 16
 The human attacks for 5 points!
 
 Total damage = 5
 
 The balrog attacks for 2 points!
 Balrog speed attack inflicts 1 additional damage points!
 
 Total damage = 3
 
 
 human hit points is now 7
 
 balrog hit points is now 11
 The human attacks for 3 points!
 
 Total damage = 3
 
 The balrog attacks for 2 points!
 Balrog speed attack inflicts 3 additional damage points!
 
 Total damage = 5
 
 
 human hit points is now 2
 
 balrog hit points is now 8
 The human attacks for 2 points!
 
 Total damage = 2
 
 The balrog attacks for 5 points!
 Balrog speed attack inflicts 1 additional damage points!
 
 Total damage = 6
 
 
 human hit points is now -4
 
 balrog hit points is now 6
 balrog wins!
 
 Battle between cyberdemon and human
 
 The cyberdemon attacks for 4 points!
 
 Total damage = 4
 
 The human attacks for 7 points!
 
 Total damage = 7
 
 
 cyberdemon hit points is now 93
 
 human hit points is now 46
 The cyberdemon attacks for 7 points!
 
 Total damage = 7
 
 The human attacks for 8 points!
 
 Total damage = 8
 
 
 cyberdemon hit points is now 85
 
 human hit points is now 39
 The cyberdemon attacks for 7 points!
 
 Total damage = 7
 
 The human attacks for 5 points!
 
 Total damage = 5
 
 
 cyberdemon hit points is now 80
 
 human hit points is now 32
 The cyberdemon attacks for 18 points!
 
 Total damage = 18
 
 The human attacks for 1 points!
 
 Total damage = 1
 
 
 cyberdemon hit points is now 79
 
 human hit points is now 14
 The cyberdemon attacks for 14 points!
 
 Total damage = 14
 
 The human attacks for 4 points!
 
 Total damage = 4
 
 
 cyberdemon hit points is now 75
 
 human hit points is now 0
 The cyberdemon attacks for 15 points!
 
 Total damage = 15
 
 The human attacks for 5 points!
 
 Total damage = 5
 
 
 cyberdemon hit points is now 70
 
 human hit points is now -15
 cyberdemon wins!
 
 Battle between elf and human
 
 The elf attacks for 32 points!
 Magical attack inflicts 32 additional damage points!
 
 Total damage = 64
 
 The human attacks for 8 points!
 
 Total damage = 8
 
 
 elf hit points is now 42
 
 human hit points is now -14
 elf wins!
 
 Battle between cyberdemon and balrog
 
 The cyberdemon attacks for 9 points!
 
 Total damage = 9
 
 The balrog attacks for 2 points!
 Balrog speed attack inflicts 2 additional damage points!
 
 Total damage = 4
 
 
 cyberdemon hit points is now 96
 
 balrog hit points is now 41
 The cyberdemon attacks for 3 points!
 
 Total damage = 3
 
 The balrog attacks for 2 points!
 Balrog speed attack inflicts 5 additional damage points!
 
 Total damage = 7
 
 
 cyberdemon hit points is now 89
 
 balrog hit points is now 38
 The cyberdemon attacks for 17 points!
 
 Total damage = 17
 
 The balrog attacks for 2 points!
 Balrog speed attack inflicts 5 additional damage points!
 
 Total damage = 7
 
 
 cyberdemon hit points is now 82
 
 balrog hit points is now 21
 The cyberdemon attacks for 16 points!
 
 Total damage = 16
 
 The balrog attacks for 2 points!
 Balrog speed attack inflicts 3 additional damage points!
 
 Total damage = 5
 
 
 cyberdemon hit points is now 77
 
 balrog hit points is now 5
 The cyberdemon attacks for 15 points!
 
 Total damage = 15
 
 The balrog attacks for 4 points!
 Balrog speed attack inflicts 4 additional damage points!
 
 Total damage = 8
 
 
 cyberdemon hit points is now 69
 
 balrog hit points is now -10
 cyberdemon wins!
*/