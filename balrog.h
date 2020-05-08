// Balrog class specification file
// Created by Patricia Curry on 5/7/20.
//


//*******************************************************************************
//class Balrog : public Demon {
//public:
//    Balrog() : Demon() {};
//    default constructor, initializes to 10 strength, 10 hitpoints
//
//    Balrog(int newStrength, int newHitpoints) : Demon(newStrength, newHitpoints) {};
//    parameterized constructor
//
//    std::string getSpecies() const;
//    returns the type of the species
//
//    int getDamage() const;
//    returns the amount of damage this Balrog inflicts in one round of combat
//};
//*******************************************************************************

#ifndef PROJECT5A_BALROG_H
#define PROJECT5A_BALROG_H
#include "demon.h"
namespace cs_creature {
    class Balrog : public Demon {
    public:
        Balrog() : Demon() {};
        Balrog(int newStrength, int newHitpoints) : Demon(newStrength, newHitpoints) {};
        std::string getSpecies() const;
        int getDamage() const;
    };
}
#endif //PROJECT5A_BALROG_H
