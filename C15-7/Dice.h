#ifndef Dice_h
#define Dice_h
#include<iostream>

class Dice{
public:
	Dice();
	Dice(int numSides);
	virtual int rollDice()const;
protected:
	int numSides;
};


#endif // !Dice_h



