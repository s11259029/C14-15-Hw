#ifndef Creature_h
#define Creature_h

#include<iostream>
#include<string>
using std::string;

class Creature {
public:
	Creature();
	Creature(int newStrength,int newHit);
	int getDamage();
	string getSpecies();
	void setHit(int);
	void setStrength(int);
	int getStrength()const;
	int getHit()const;
private:
	int  type;
	int strength;
	int hitpoints;
};

#endif // !Creature_h
