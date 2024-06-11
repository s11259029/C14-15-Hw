#include<iostream>
#include<cstdlib>
#include"LoadedDice.h"
using namespace std;
int rollTeoDice(const Dice& dice1,const Dice& dice2);
int main(void) {
	LoadedDice D1, D2;
	for (int i = 0; i < 10; i++) {
		cout << rollTeoDice(D1, D2) << endl;
	}


}
int rollTeoDice(const Dice& dice1, const Dice& dice2) {
	return dice1.rollDice() + dice2.rollDice();
}