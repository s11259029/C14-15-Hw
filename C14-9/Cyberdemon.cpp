#include<iostream>
#include<string>
#include"Cyberdemon.h"

using std::cout;
using std::endl;

Cyberdemon::Cyberdemon() :Demon() {}
Cyberdemon::Cyberdemon(int theStrength, int theHitpoint) :Demon(theStrength, theHitpoint) {}
int Cyberdemon::getDamage() {
	int damage;
	damage = Demon::getDamage();
	return damage;
}
string Cyberdemon::getSpecies() { return "Cyberdemon"; }