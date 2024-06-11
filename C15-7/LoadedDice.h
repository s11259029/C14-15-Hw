#ifndef LoadedDice_h
#define LoadedDice_h
#include"Dice.h"
class LoadedDice:public Dice{
public:
	LoadedDice();
	LoadedDice(int);
	int rollDice()const;
};


#endif // !LoadedDice_h



