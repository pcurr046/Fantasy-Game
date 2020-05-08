// Cyberdemon class specification file
// Created by Patricia Curry on 5/7/20.
//

//*******************************************************************************
//class Cyberdemon : public Demon {
//public:
//    Cyberdemon() : Demon() {};
//    default constructor, initializes to 10 strength, 10 hitpoints
//
//    Cyberdemon(int newStrength, int newHitpoints) : Demon(newStrength, newHitpoints) {};
//    parameterized constructor
//
//    std::string getSpecies() const;
//    returns the type of the species
//
//    int getDamage() const;
//    returns the amount of damage this Cyberdemon inflicts in one round of combat
//};
//*******************************************************************************

#ifndef PROJECT5A_CYBERDEMON_H
#define PROJECT5A_CYBERDEMON_H
#include "demon.h"
namespace cs_creature {
    class Cyberdemon : public Demon {
    public:
        Cyberdemon() : Demon() {};
        Cyberdemon(int newStrength, int newHitpoints) : Demon(newStrength, newHitpoints) {};
        std::string getSpecies() const;
        int getDamage() const;
    };
}
#endif //PROJECT5A_CYBERDEMON_H
