/* Name: Kyle Cody
 * CEN 4020-01 
 * Assignment 1 - Git and Object Oriented Programming Warm Up
 * CrazyRandomSword.cpp contains the implementations of member functions
 * for the weapon type: Crazy Random Sword.      
 */

#include "CrazyRandomSword.h"
#include <cstdlib>

double CrazyRandomSword::hit(double armor){
	int dividearmor = armor/.33;
	int  armorignored = rand()% dividearmor + 2;

	double damage = hitPoints - (armor - armorignored);

	if (damage < 0) {
		return 0;
	}
	return damage;
}
