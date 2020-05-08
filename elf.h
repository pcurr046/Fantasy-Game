// Elf class specification file
// Created by Patricia Curry on 5/7/20.
//
//*******************************************************************************
//class Elf : public Creature {
//    public:
//        Elf() : Creature() {};
//        default constructor, initializes to 10 strength, 10 hitpoints
//
//        Elf(int newStrength, int newHitpoints) : Creature(newStrength, newHitpoints) {};
//        parameterized constructor
//
//        std::string getSpecies() const;
//        returns the type of the species
//
//        int getDamage() const;
//        returns the amount of damage this Elf inflicts in one round of combat
//    };
//*******************************************************************************
#ifndef PROJECT5A_ELF_H
#define PROJECT5A_ELF_H
#include "creature.h"
namespace cs_creature {
    class Elf : public Creature {
    public:
        Elf() : Creature() {};
        Elf(int newStrength, int newHitpoints) : Creature(newStrength, newHitpoints) {};
        std::string getSpecies() const;
        int getDamage() const;
    };
}
#endif //PROJECT5A_ELF_H
