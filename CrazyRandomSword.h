/* Name: Kyle Cody
 * CEN 4020-01 
 * Assignment 1 - Git and Object Oriented Programming Warm Up
 * CrazyRandomSword.h contains the declarations of member functions
 * for the weapon type: Crazy Random Sword.      
 */

#include <string>
#include <cstdlib>
#include "Weapon.h"

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

//*************************************************
//Defines the behavior of a crazy random sword:
//(hitpoints = random int between 7-100, Ignores
//a random amount of int armor points between 2-1/3 
//of the armor the weapon hits
//*************************************************

class CrazyRandomSword : public Weapon {
public:

	CrazyRandomSword() : Weapon("Crazy random sword", rand()% 100 + 7){ //Calls Weapon(name, hitpoints) constructor with values Crazy Random Sword and random int between 7-100.
	}
	virtual ~CrazyRandomSword() {};

	virtual double hit(double armor);
};

#endif //CRAZYRANDOMSWORD_H
