#include "creature.h"
#include <string>
#include <stdlib.h>
#include <iostream>
using namespace std;

Creature::Creature()
{
    strength = 10;
    hitpoints =10;
    
}




Creature:: Creature(int newStrenght, int newHit )
{
    strength = newStrenght;
    hitpoints = newHit;
}





int Creature::getStrength()
{
    return strength;
}




int Creature::getHitpoints()
{
    return hitpoints;
}




void Creature::changeHit(const int& newHit)
{
    hitpoints = newHit;
}




void Creature::changeStength(const int& newStrenght)
{
    strength = newStrenght;
}




int Creature::getDamage()
{
    
    int damage;
    
    damage = (rand( ) % strength) + 1;
    
    cout << "The " << getSpecies() << " attacks for " << damage << " points!" << endl;
    
    return damage;
    
}




 string  Creature::getSpecies()
{
    return "human";
}
