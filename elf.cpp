// Elf class implementation file
// Created by Patricia Curry on 5/7/20.
//

#include "elf.h"
#include <iostream>
namespace cs_creature {
    //*******************************************************************************
    // This function returns the string "Elf" when called, which represents the
    // creature's species
    //*******************************************************************************
    std::string Elf::getSpecies() const
    {
        return "Elf";
    }
    //*******************************************************************************
    // This function returns the amount of damage this Elf Creature inflicts in one
    // round of combat. It calculates the total damage by adding the creature standard
    // and the elf magical attack if applicable.
    //*******************************************************************************
    int Elf::getDamage() const
    {
        int damage = Creature::getDamage();
        std::cout << "The " << getSpecies() << " attacks for " << damage << " points!" << std::endl;
        if ((rand() % 2) == 0) {
            std::cout << "Magical attack inflicts " << damage << " additional damage points!" << std::endl;
            damage *= 2;
        }
        return damage;
    }
}