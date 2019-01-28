/* Name: Kyle Cody
 * CEN 4020-01 
 * Assignment 1 - Git and Object Oriented Programming Warm Up
 * MightyWarAxe.cpp contains the implementations of member functions
 * for the weapon type: Mighty War Axe.      
 */

#include "MightyWarAxe.h"

double MightyWarAxe::hit(double armor){
	if (armor > 50){armor/=2;}

	double damage = hitPoints - armor;
	if (damage < 0){
		return 0;
	}
	
	return damage;
}

