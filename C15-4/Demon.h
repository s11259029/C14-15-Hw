#ifndef Demon_h
#define Demon_h

#include<iostream>
#include<string>
#include"Creature.h"
using std::string;
class Demon :public Creature {
public:
	Demon();
	Demon(int, int);
	int getDamage();
};


#endif // !Demon_h
