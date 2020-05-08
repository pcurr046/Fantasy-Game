// Creature class implementation file
// Created by Patricia Curry on 5/6/20.
//

#include "creature.h"
namespace cs_creature {
    //*******************************************************************************
    // This is the default constructor. It initializes each object of type creature
    // to a strength of 10 and hitpoints of 10.
    //*******************************************************************************
    Creature::Creature() : strength(10), hitpoints(10) {}

    //*******************************************************************************
    // This is the parameterized constructor that takes in two integer parameters
    // and initializez strength to "newStrength" and hitPoints to newHitpoints
    //*******************************************************************************
    Creature::Creature(int newStrength, int newHitpoints) : strength(newStrength), hitpoints(newHitpoints) {}

    //*******************************************************************************
    // This function returns the string "Creature" when called, which represents the
    // species
    //*******************************************************************************
    std::string Creature::getSpecies() const
    {
        return "Creature";
    }

    //*******************************************************************************
    // This function returns the amount of damage this Creature inflicts in one round
    // of combat. All Creatures inflict damage which is a random number up to their
    // strength
    //*******************************************************************************
    int Creature::getDamage() const
    {
        int damage;
        damage = (rand() % strength) + 1;
        return damage;
    }

    //*******************************************************************************
    //This function returns private member variable strength
    //*******************************************************************************
    int Creature::getStrength() const
    {
        return strength;
    }

    //*******************************************************************************
    //This is a setter function that takes an integer parameter and sets strength
    //private variable to "theStrength"
    //*******************************************************************************
    void Creature::setStrength(int theStrength)
    {
        strength = theStrength;
    }

    //*******************************************************************************
    //This function returns private member variable hitpoints
    //*******************************************************************************
    int Creature::getHitpoints() const
    {
        return hitpoints;
    }

    //*******************************************************************************
    // This is a setter function that takes an integer parameter and sets hitpoints
    // private variable to "theHitpoints"
    //*******************************************************************************
    void Creature::setHitpoints(int theHitpoints)
    {
        hitpoints = theHitpoints;
    }
}