// Human class implementation file
// Created by Patricia Curry on 5/7/20.
//

#include "human.h"
#include <iostream>
namespace cs_creature {
    //*******************************************************************************
    // This function returns the string "Human" when called, which represents the
    // creature's species
    //*******************************************************************************
    std::string Human::getSpecies() const
    {
        return "Human";
    }
    //*******************************************************************************
    // This function returns the amount of damage this Human Creature inflicts in one
    // round of combat. It will just return the standard creature damage.
    //*******************************************************************************
    int Human::getDamage() const
    {
        int damage = Creature::getDamage();
        std::cout << "The " << getSpecies() << " attacks for " << damage << " points!" << std::endl;
        return damage;
    }
}