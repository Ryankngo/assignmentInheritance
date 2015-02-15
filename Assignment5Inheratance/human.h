#ifndef HUMAN_H
#define HUMAN_H
#include <string>
#include "creature.h"
using namespace std;

class human: public Creature
{
public:
    human();
    human(const int& newStrenght, const int& newHit);
    int getDamage();
    string getSpecies();
    
    
    
    
};
#endif
