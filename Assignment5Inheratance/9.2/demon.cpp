
#include "demon.h"
#include <iostream>
using namespace std;

demon::demon()
{
    
}

demon::demon(const int& newStenght, const int& newHit)

:Creature(newStenght, newHit)
{
    
}




string demon:: getSpecies()
{
    return "demon";
}




int demon:: getDamage()
{
    
    int damage = Creature::getDamage();
  //  cout  <<  "attacks for "  <<  damage  <<  " ponts!"  <<  endl;
    
    
    if ((rand( ) % 10)==0)
    {
        damage = damage + 50;
        cout << "Demonic attack inflicts 50 "
        << " additional damage points!" << endl;
        
        return damage;
    }

    else return damage;

}