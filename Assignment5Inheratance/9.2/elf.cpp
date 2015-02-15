
#include "elf.h"
#include <stdlib.h>
#include <iostream>

using namespace std;

elf::elf()
{
    
}

elf::elf(const int& newStenght, const int& newHit)

:Creature(newStenght, newHit)
{
    
}




string elf:: getSpecies()
{
    return "elf";
}


int elf:: getDamage()
{
    int damage =Creature::getDamage();
    
    
   
    //cout <<"The "<< this->getSpecies( ) << " attacks for " <<
   // damage << " points!" << endl;
    
    if ((rand( ) % 2)==1)
    {
        cout << "Magical attack inflicts " << damage <<
        " additional damage points!" << endl;
        damage = damage * 2;
        
        return damage;
    }
    
    else
    
    return damage;
   
}