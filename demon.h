// Demon class specification file
// Created by Patricia Curry on 5/7/20.
//
//*******************************************************************************
//class Demon : public Creature {
//    private:
//        int a;
//    public:
//        Demon() : Creature() {};
//        default constructor, initializes to 10 strength, 10 hitpoints
//
//        Demon(int newStrength, int newHitpoints) : Creature(newStrength, newHitpoints) {}
//        parameterized constructor
//
//        std::string getSpecies() const;
//        returns the type of the species
//
//        int getDamage() const;
//        returns the amount of damage this Demon inflicts in one round of combat
//    };
//*******************************************************************************
#ifndef PROJECT5A_DEMON_H
#define PROJECT5A_DEMON_H
#include "creature.h"
namespace cs_creature {
    class Demon : public Creature {
    private:
        int a;
    public:
        Demon() : Creature() {};
        Demon(int newStrength, int newHitpoints) : Creature(newStrength, newHitpoints) {};//parameterized constructor
        std::string getSpecies() const;
        int getDamage() const;
    };
}
#endif //PROJECT5A_DEMON_H
