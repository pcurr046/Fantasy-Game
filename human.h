// Human class specification file
// Created by Patricia Curry on 5/7/20.
//
//*******************************************************************************
//class Human : public Creature {
//    public:
//        Human() : Creature() {};
//        default constructor, initializes to 10 strength, 10 hitpoints
//
//        Human(int newStrength, int newHitpoints) : Creature(newStrength, newHitpoints) {};
//        parameterized constructor
//
//        std::string getSpecies() const;
//        returns the type of the species
//
//        int getDamage() const;
//        returns the amount of damage this Human inflicts in one round of combat
//    };
//*******************************************************************************
#ifndef PROJECT5A_HUMAN_H
#define PROJECT5A_HUMAN_H
#include "creature.h"
namespace cs_creature {
    class Human : public Creature {
    public:
        Human() : Creature() {};
        Human(int newStrength, int newHitpoints) : Creature(newStrength, newHitpoints) {};
        std::string getSpecies() const;
        int getDamage() const;
    };
}
#endif //PROJECT5A_HUMAN_H
