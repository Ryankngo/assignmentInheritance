#include "cyberdemon.h"
#include "demon.h"
#include <iostream>
using namespace std;

cyberdemon::cyberdemon()
{
    
}
cyberdemon::cyberdemon(const int& newStenght, const int& newHit)

:demon(newStenght, newHit)
{
    
}



string cyberdemon:: getSpecies()
{
    return "cyberdemon";
}




int cyberdemon::getDamage()
{
    cout<<"The cyberdemon ";
    return demon::getDamage();
}