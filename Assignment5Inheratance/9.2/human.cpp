
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



