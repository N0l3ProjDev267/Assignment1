/* Name: Kyle Cody
 * CEN 4020-01 
 * Assignment 1 - Git and Object Oriented Programming Warm Up
 * MightyWarAxe.h contains the declarations of member functions
 * for the weapon type: Mighty War Axe.      
 */

#include <string>
#include "Weapon.h"

#ifndef MIGHTYWARAXE_H
#define MIGHTYWARAXE_H

//**************************************************************
//Defines the behavior of a mighty war axe: 
//(hitpoints = 30, If the armor is greater than 25, hitpoints 
//are doubled and the mighty war axe will ignore 50% current 
//armor rating.)
//**************************************************************

class MightyWarAxe : public Weapon {
public:
	MightyWarAxe() : Weapon("Mighty war axe", 30.0) //Calls Weapon(name, hitpoints) constructor with values Mighty war axe and 30.0 for hitpoints
	{
	}

	virtual ~MightyWarAxe() {}; //Destructor

	virtual double hit(double armor);	//Simulates a hit
};
#endif //MIGHTYWARAXE_H
