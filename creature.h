// Creature class specification file
// Created by Patricia Curry on 5/6/20.
//
//*******************************************************************************
//class Creature {
//private:
//    int strength;
//    how much damage this Creature inflicts
//
//    int hitpoints;
//    how much damage this Creature can sustain
//
//    std::string getSpecies() const;
//    returns the type of the species
//
//public:
//    Creature();
//    default constructor, initializes to 10 strength, 10 hitpoints
//
//    Creature(int newStrength, int newHitpoints);
//    parameterized constructor
//
//    int getDamage() const;
//    returns the amount of damage this Creature inflicts in one round of combat
//
//    int getStrength() const;
//    returns strength
//
//    void setStrength(int theStrength);
//    sets strength
//
//    int getHitpoints() const;
//    returns hitpoints
//
//    void setHitpoints(int theHitpoints);
//    sets hitpoints
//};
//*******************************************************************************

#ifndef PROJECT5A_CREATURE_H
#define PROJECT5A_CREATURE_H
#include <string>
namespace cs_creature {
    class Creature {
    private:
        int strength;
        int hitpoints;
        std::string getSpecies() const;
    public:
        Creature();
        Creature(int newStrength, int newHitpoints);
        int getDamage() const;
        int getStrength() const;
        void setStrength(int theStrength);
        int getHitpoints() const;
        void setHitpoints(int theHitpoints);

    };
}
#endif //PROJECT5A_CREATURE_H
