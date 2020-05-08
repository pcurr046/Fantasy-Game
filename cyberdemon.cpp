// Cyberdemon class implementation file
// Created by Patricia Curry on 5/7/20.
//
#include "cyberdemon.h"
#include <iostream>
namespace cs_creature {
    //*******************************************************************************
    // This function returns the string "Cyberdemon" when called, which represents the
    // creature's species
    //*******************************************************************************
    std::string Cyberdemon::getSpecies() const
    {
        return "Cyberdemon";
    }
    //*******************************************************************************
    // This function returns the amount of damage this Cyberdemon Demon Creature
    // inflicts in one round of combat. It will add the standard creature damage to
    // any demonic attack if applicable and return the sum.
    //*******************************************************************************
    int Cyberdemon::getDamage() const
    {
        int damage = Demon::getDamage();
        std::cout << "The " << getSpecies() << " attacks for " << damage << " points!" << std::endl;
        if (rand() % 4 == 0) {
            std::cout << "Demonic attack inflicts 50 additional damage points!" << std::endl;
            return (damage + 50);
        }
        return damage;
    }
}
