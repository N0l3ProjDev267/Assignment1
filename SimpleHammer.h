/* Name: Kyle Cody
 * CEN 4020-01 
 * Assignment 1 - Git and Object Oriented Programming Warm Up
 * SimpleHammer.h contains the declarations of member functions
 * for the weapon type: Simple Hammer.      
 */

#include <string>
#include "Weapon.h"

#ifndef SIMPLEHAMMER_H
#define SIMPLEHAMMER_H

//***********************************************
// Defines the behavior of a simple hammer: 
// (hitpoints = 25, If the armor is less than 30, 
// the hammer will ignore all the armor points)
//********************************* *************

class SimpleHammer : public Weapon {
public:

	SimpleHammer() : Weapon("Simple hammer", 25.0) //Calls Weapon(name, hitpoints) constructor with values Simple Hammer and 25.0 for hitpoints
	{
	}

	virtual ~SimpleHammer() {};

	virtual double hit(double armor);
};
#endif //SIMPLEHAMMER_H
