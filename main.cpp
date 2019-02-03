
/* 
 * File:   main.cpp
 * Author: Javier <jrescobara@gmail.com> 
 *
 * Created on September 25, 2017, 3:19 PM
 */


/*
 * Editor: Kyle Cody
 * CEN 4020-01 
 * Assignment 1 - Git and Object Oriented Programming Warm Up
 * main.cpp contains the driver program that prints the behavior
 * of all weapon types created.      
 */

#include <cstdlib>
#include <time.h>
#include <iostream>
#include "Weapon.h"
#include "WeaponFactory.h"

using namespace std;

/**
 * Simulates the behavior of a weapon in the presence and absence of armor, by 
 * printing its damage on standard output. 
 * @param weapon Weapon to simulate
 * @param armor Armor points
 */
void simulateWeapon(Weapon * weapon, double armor) {
    cout << weapon->getName() << " inflicts " << weapon->hit() << " when armor is 0" << std::endl;
    cout << weapon->getName() << " inflicts " << weapon->hit(armor) << " when armor is " << armor << std::endl << std::endl;
}

/*
 * 
 */
int main(int argc, char** argv) {
    srand(time(NULL));	
  
    double armor = 29;
    double armortest1 = 40;
    double armortest2 = 50;
    double armortest3 = 15;

cout << "*********************************************" << endl;
    Weapon *weapon = WeaponFactory::getInstance()->getWeapon("sword");
    simulateWeapon(weapon, armor);
    simulateWeapon(weapon, armortest1);
    simulateWeapon(weapon, armortest2);
    simulateWeapon(weapon, armortest3);
    delete(weapon);

cout << "**********************************************" << endl;
    weapon = WeaponFactory::getInstance()->getWeapon("spear");
    simulateWeapon(weapon, armor);
    simulateWeapon(weapon, armortest1);
    simulateWeapon(weapon, armortest2);
    simulateWeapon(weapon, armortest3);
    delete(weapon);

cout << "*********************************************" << endl;
    weapon = WeaponFactory::getInstance()->getWeapon("hammer");
    simulateWeapon(weapon, armor);
    simulateWeapon(weapon, armortest1);
    simulateWeapon(weapon, armortest2);
    simulateWeapon(weapon, armortest3);
    delete(weapon);

cout << "*********************************************" << endl;
    weapon = WeaponFactory::getInstance()->getWeapon("random");
    simulateWeapon(weapon, armor);
    simulateWeapon(weapon, armortest1);
    simulateWeapon(weapon, armortest2);
    simulateWeapon(weapon, armortest3);
    delete(weapon);

cout << "*********************************************" << endl;
    weapon = WeaponFactory::getInstance()->getWeapon("axe");
    simulateWeapon(weapon, armor);
    simulateWeapon(weapon, armortest1);
    simulateWeapon(weapon, armortest2);
    simulateWeapon(weapon, armortest3);
    delete(weapon);

    return 0;
}

