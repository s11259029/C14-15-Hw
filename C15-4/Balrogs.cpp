#include<iostream>
#include<string>
#include"Balrogs.h"

using std::cout;
using std::endl;

Balrogs::Balrogs() :Demon() {}
Balrogs::Balrogs(int theStrength, int theHitpoint) :Demon(theStrength, theHitpoint) {}
int Balrogs::getDamage() {
	int damage;
	damage = Demon::getDamage();
	int damage2 = (rand() % getStrength()) + 1;
	
	cout << "Balrogs attack inflicts " << damage2 << " additional damage points !" << endl;
	damage = damage + damage2;
	
	return damage;
}
string Balrogs::getSpecies() { return "Balrogs"; }