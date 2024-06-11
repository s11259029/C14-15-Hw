#ifndef Cyberdemon_h
#define Cyberdemon_h

#include<iostream>
#include<string>
#include"Demon.h"
using std::string;

class Cyberdemon :public Demon {
public:
	Cyberdemon();
	Cyberdemon(int, int);
	int getDamage();
	string getSpecies();
};

#endif // !Cyberdemon_h
