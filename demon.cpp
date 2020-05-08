// Demon class implementation file
// Created by Patricia Curry on 5/7/20.
//
#include "demon.h"
#include <iostream>
namespace cs_creature {
    //*******************************************************************************
    // This function returns the string "Demon" when called, which represents the
    // creature's species
    //*******************************************************************************
    std::string Demon::getSpecies() const
    {
        return "Demon";
    }
    //*******************************************************************************
    // This function returns the amount of damage the Demon creature inflicts
    //*******************************************************************************
    int Demon::getDamage() const
    {
        int damage = Creature::getDamage();
        return damage;
    }
}