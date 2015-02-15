#ifndef ELF_H
#define ELF_H
#include <string>
#include "creature.h"
using namespace std;

class elf: public Creature
{
public:
    elf();
    elf(const int& newStrenght, const int& newHit);
    string getSpecies();
    int getDamage();
    
    
    
};
#endif
