#include "balrog.h"
#include "demon.h"
#include <iostream>
using namespace std;

balrog::balrog()
{
    
}



balrog::balrog(const int& newStenght, const int& newHit)

:demon(newStenght, newHit)
{
    
}





string balrog:: getSpecies()
{
    return "balrog";
}



int balrog::getDamage()
{
   // cout  <<  "The Balrog ";
    int damage = demon::getDamage();
    
    
    
    int damage2 = (rand() % Creature::getStrength()) + 1;
    
    cout << "Balrog speed attack inflicts " << damage2 <<
    " additional damage points!" << endl;
    
    return damage+ damage2;
    
}