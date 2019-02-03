/* Name: Kyle Cody
 * CEN 4020-01 
 * Assignment 1 - Git and Object Oriented Programming Warm Up
 * CrazyRandomSword.cpp contains the implementations of member functions
 * for the weapon type: Crazy Random Sword. 
 * Source: Code for random number generation within a range obtained 
 * from StackOverflow.com     
 */

#include "CrazyRandomSword.h"
#include <cstdlib>
#include <iostream>

double CrazyRandomSword::hit(double armor){
	int dividearmor = armor/3; 	//Calculates a third of the total armor

	/* See Source in Comments */
	double  armorignored = 2 + (rand()% (dividearmor + 1) - 2); //Amount of armor ignored

	std::cout << armorignored << std::endl;
	//Total amount of damage
	double damage = hitPoints - (armor - armorignored);

	if (damage < 0) {
		return 0;
	}
	return damage;
}
