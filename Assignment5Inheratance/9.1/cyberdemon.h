#ifndef CYBERDEMON_H
#define CYBERDEMON_H
#include <string>
#include "demon.h"
using namespace std;

class cyberdemon: public demon
{
public:
    cyberdemon();
    cyberdemon(const int& newStrenght, const int& newHit);
    string getSpecies();
    int getDamage();
    
    
    
};
#endif
