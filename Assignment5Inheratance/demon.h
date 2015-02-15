#ifndef DEMON_H
#define DEMON_H
#include <string>
#include "creature.h"
using namespace std;

class demon: public Creature
{
public:
    demon();
    demon(const int& newStrenght, const int& newHit);
    string getSpecies();
    int getDamage();
    
    
    
};
#endif
