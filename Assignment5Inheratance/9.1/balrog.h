#ifndef BALROG_H
#define BALROG_H
#include <string>
#include "demon.h"
using namespace std;

class balrog: public demon
{
public:
    balrog();
    balrog(const int& newStrenght, const int& newHit);
    string getSpecies();
    int getDamage();
    
    
    
};
#endif
