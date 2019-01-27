/* Name: Kyle Cody
 * CEN 4020-01
 * Assignment 1 - Git and Object Oriented Programming Warm Up 
 * SimpleHammer.cpp contains the implementations of member functions
 * for the weapon type: Simple Hammer      
 */

#include "SimpleHammer.h"

double SimpleHammer::hit(double armor){
	if (armor < 30){armor = 0;}
	
	double damage = hitpoints - armor;
	if (damage < 0){
		return 0;
	}

	return damage;
}
