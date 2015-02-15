
#include "human.h"
#include <iostream>
using namespace std;

human::human()
{
   
}

human::human(const int& newStenght, const int& newHit)

:Creature(newStenght, newHit)
{
    
}

string human:: getSpecies()
{
    return "human";
}



int human::getDamage()
{
    int damage = Creature::getDamage();
    cout <<  "The " <<  this->getSpecies( ) << " attacks for " <<
    damage <<  " points!"  << endl;

    return  damage;
}