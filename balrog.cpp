// Balrog class implementation file
// Created by Patricia Curry on 5/7/20.
//
#include "balrog.h"
#include <iostream>
namespace cs_creature {
    //*******************************************************************************
    // This function returns the string "Balrog" when called, which represents the
    // creature's species
    //*******************************************************************************
    std::string Balrog::getSpecies() const
    {
        return "Balrog";
    }
    //*******************************************************************************
    // This function returns the amount of damage this Balrog Demon Creature inflicts
    // in one round of combat. It will add the Standard Creature Damage with the
    // demonic attack if applicable and the balrog additional damage then return sum
    //*******************************************************************************
    int Balrog::getDamage() const
    {
        int damage1 = Demon::getDamage(), damage2 = 0;
        std::cout << "The " << getSpecies() << " attacks for " << damage1 << " points!" << std::endl;
        if (rand() % 4 == 0) {
            std::cout << "Demonic attack inflicts 50 additional damage points!" << std::endl;
            damage2 = 50;
        }
        int damage3 = (rand() % Demon::getStrength()) + 1;
        std::cout << "Balrog speed attack inflicts " << damage3 << " additional damage points!" << std::endl;
        int damage = damage1 + damage2 + damage3;
        return damage;
    }
}