#ifndef CREATURE_H
#define CREATURE_H
#include <string>
using namespace std;

class Creature
{
private:
   // int type; // 0 human, 1 cyberdemon, 2 balrog, 3 elf
    int strength; // How much damage we can inflict
    int hitpoints; // How much damage we can sustain string getSpecies(); // Returns type of species
public:
    Creature( );
    // Initialize to human, 10 strength, 10 hit points
    Creature(int newStrength, int newHit);
    // Initialize creature to new type, strength, hit points
    // Also add appropriate accessor and mutator functions
    // for type, strength, and hit points
    int getDamage();
    // Returns amount of damage this creature // inflicts in one round of combat
    int getStrength();
    int getHitpoints();
    void changeStength(const int& newStrenght);
    void changeHit(const int& newHit);
    string getSpecies();
};


#endif
