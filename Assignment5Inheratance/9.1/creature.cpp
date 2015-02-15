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
       
    return damage;
    
}




string Creature::getSpecies()
{
    return "human";
}

/*default human strength/hitpoints: 10/10
 default elf strength/hitpoints: 10/10
 default cyberdemon strength/hitpoints: 10/10
 default balrog strength/hitpoints: 10/10
 non-default human strength/hitpoints: 20/30
 non-default elf strength/hitpoints: 40/50
 non-default cyberdemon strength/hitpoints: 60/70
 non-default balrog strength/hitpoints: 80/90
 
 
 Examples of human damage:
 The human attacks for 19 points!
 Total damage = 19
 
 The human attacks for 6 points!
 Total damage = 6
 
 The human attacks for 20 points!
 Total damage = 20
 
 The human attacks for 17 points!
 Total damage = 17
 
 The human attacks for 16 points!
 Total damage = 16
 
 The human attacks for 3 points!
 Total damage = 3
 
 The human attacks for 8 points!
 Total damage = 8
 
 The human attacks for 20 points!
 Total damage = 20
 
 The human attacks for 2 points!
 Total damage = 2
 
 The human attacks for 20 points!
 Total damage = 20
 
 
 Examples of elf damage:
 The elf attacks for 25 points!
 Magical attack inflicts 25 additional damage points!
 Total damage = 50
 
 The elf attacks for 39 points!
 Magical attack inflicts 39 additional damage points!
 Total damage = 78
 
 The elf attacks for 13 points!
 Total damage = 13
 
 The elf attacks for 1 points!
 Total damage = 1
 
 The elf attacks for 35 points!
 Magical attack inflicts 35 additional damage points!
 Total damage = 70
 
 The elf attacks for 27 points!
 Magical attack inflicts 27 additional damage points!
 Total damage = 54
 
 The elf attacks for 17 points!
 Magical attack inflicts 17 additional damage points!
 Total damage = 34
 
 The elf attacks for 39 points!
 Magical attack inflicts 39 additional damage points!
 Total damage = 78
 
 The elf attacks for 2 points!
 Total damage = 2
 
 The elf attacks for 16 points!
 Magical attack inflicts 16 additional damage points!
 Total damage = 32
 
 
 Examples of cyberdemon damage:
 The cyberdemon attacks for 1 ponts!
 Total damage = 1
 
 The cyberdemon attacks for 20 ponts!
 Total damage = 20
 
 The cyberdemon attacks for 48 ponts!
 Total damage = 48
 
 The cyberdemon attacks for 37 ponts!
 Demonic attack inflicts 50  additional damage points!
 Total damage = 87
 
 The cyberdemon attacks for 21 ponts!
 Total damage = 21
 
 The cyberdemon attacks for 55 ponts!
 Total damage = 55
 
 The cyberdemon attacks for 12 ponts!
 Total damage = 12
 
 The cyberdemon attacks for 20 ponts!
 Demonic attack inflicts 50  additional damage points!
 Total damage = 70
 
 The cyberdemon attacks for 32 ponts!
 Total damage = 32
 
 The cyberdemon attacks for 43 ponts!
 Total damage = 43
 
 
 Examples of balrog damage:
 The Balrog attacks for 51 ponts!
 Balrog speed attack inflicts 33 additional damage points!
 Total damage = 84
 
 The Balrog attacks for 64 ponts!
 Balrog speed attack inflicts 10 additional damage points!
 Total damage = 74
 
 The Balrog attacks for 29 ponts!
 Balrog speed attack inflicts 20 additional damage points!
 Total damage = 49
 
 The Balrog attacks for 64 ponts!
 Balrog speed attack inflicts 39 additional damage points!
 Total damage = 103
 
 The Balrog attacks for 58 ponts!
 Balrog speed attack inflicts 77 additional damage points!
 Total damage = 135
 
 The Balrog attacks for 48 ponts!
 Balrog speed attack inflicts 26 additional damage points!
 Total damage = 74
 
 The Balrog attacks for 13 ponts!
 Demonic attack inflicts 50  additional damage points!
 Balrog speed attack inflicts 69 additional damage points!
 Total damage = 132
 
 The Balrog attacks for 70 ponts!
 Balrog speed attack inflicts 49 additional damage points!
 Total damage = 119
 
 The Balrog attacks for 53 ponts!
 Balrog speed attack inflicts 72 additional damage points!
 Total damage = 125
 
 The Balrog attacks for 50 ponts!
 Balrog speed attack inflicts 61 additional damage points!
 Total damage = 111
*/