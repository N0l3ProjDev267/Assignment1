/* Name: Kyle Cody
 * CEN 4020-01 
 * Assignment 1 - Git and Object Oriented Programming Warm Up
 * MightyWarAxe.cpp contains the implementations of member functions
 * for the weapon type: Mighty War Axe.      
 */

#include "MightyWarAxe.h"

double MightyWarAxe::hit(double armor){
	double reducedarmor = 0;	//Stores amount of armor ignored
	if (armor > 25){reducedarmor = armor/ 2;}	//New armor value

	//Total amount of damage
	double damage = ((hitPoints * 2) - reducedarmor);

	if (armor < 25 ) {damage = hitPoints - armor;}
	if (damage < 0){
		return 0;
	}
	
	return damage;
}

