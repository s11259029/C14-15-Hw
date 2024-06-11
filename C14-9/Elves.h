#ifndef Elves_h
#define Elves_h

#include<iostream>
#include<string>
#include"Creature.h"

using std::string;
class Elves :public Creature{
public:
	Elves();
	Elves(int, int);
	int getDamage();
	string getSpecies();
};


#endif