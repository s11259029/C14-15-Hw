#include "Dice.h"
#include<iostream>
#include<cstdlib>

Dice::Dice() :numSides(6) { srand(time(NULL)); }
Dice::Dice(int numSides):numSides(numSides) { srand(time(NULL)); }
int Dice::rollDice()const { return (rand() % numSides) + 1; }
