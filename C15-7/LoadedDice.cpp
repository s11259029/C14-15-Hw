#include "LoadedDice.h"
#include<iostream>
#include<cstdlib>

LoadedDice::LoadedDice():Dice() {}
LoadedDice::LoadedDice(int num) :Dice(num){}
int LoadedDice::rollDice()const {
	if (rand() % 2 == 0) {
		return numSides;
	}
	else {
		return Dice::rollDice();
	}
}
