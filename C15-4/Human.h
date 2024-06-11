#ifndef Human_h
#define Human_h

#include<iostream>
#include<string>
#include"Creature.h"

using std::string;

class Human :public Creature {
public:
	Human();
	Human(int, int);
	int getDamage();
	string getSpecies();
};

#endif // !Human_h
