#include<iostream>
#include<string>
#include"Elves.h"

using std::cout;
using std::endl;

Elves::Elves():Creature() {}
Elves::Elves(int theStrength, int theHitpoint):Creature(theStrength,theHitpoint) {}
int Elves::getDamage() {
	int damage;
	damage = Creature::getDamage();
	if (rand() % 10 == 0) {
		cout << "Magical attack inflicts " << damage << " additional damage points !" << endl;
		damage = damage * 2;;
	}
	return damage;
}
string Elves::getSpecies() {
	return "Elves";
}