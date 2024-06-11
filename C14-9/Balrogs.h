#ifndef Balrogs_h
#define Balrogs_h

#include<iostream>
#include<string>
#include"Demon.h"
using std::string;
class Balrogs : public Demon {
public:
	Balrogs();
	Balrogs(int,int);
	int getDamage();
	string getSpecies();
};

#endif // !Balrogs_h
