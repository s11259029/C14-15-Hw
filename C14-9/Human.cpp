#include<iostream>
#include<string>
#include"Human.h"

using std::cout;
using std::endl;


Human::Human() :Creature() {}
Human::Human(int theStrength, int theHitpoint): Creature(theStrength, theHitpoint) {}
int Human::getDamage() {
	int damage;
	damage = Creature::getDamage();

	return damage;
}
string Human::getSpecies() { return "Human"; }
