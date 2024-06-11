#include<iostream>
#include<cstdlib>
#include"Creature.h"

using std::cout;
using std::endl;

Creature::Creature() :strength(10), hitpoints(10) {}
Creature::Creature(int newStrength, int newHit) : strength(newStrength), hitpoints(newHit) {}
int Creature::getDamage() {
	int damage;
	damage = (rand() % strength) + 1;
	cout << getSpecies() << " attack for " << damage << " points !" << endl;
	return damage;
}
string Creature::getSpecies() { return "Unknow"; }
void Creature::setHit(int point) { hitpoints = point; }
void Creature::setStrength(int stren) { strength = stren; }
int Creature::getStrength()const { return strength; }
int Creature::getHit()const { return hitpoints; }