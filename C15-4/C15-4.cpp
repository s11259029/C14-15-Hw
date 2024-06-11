#include<iostream>
#include<cstdlib>
#include<ctime>
#include"Balrogs.h"
#include"Cyberdemon.h"
#include"Elves.h"
#include"Human.h"

using namespace std;
void clean() {
	while (getchar() != '\n') {}
}
void battlearea(Creature&, Creature&);

int main(void) {
	Human human(60, 100);
	Elves elf(40, 100);
	Balrogs balrog(30, 100);
	Cyberdemon cyberdemon(40, 100);
	
	srand(time(NULL));

	battlearea(human,elf);
	battlearea(human, balrog);
	battlearea(human, cyberdemon);

	battlearea(elf, human);
	battlearea(elf, balrog);
	battlearea(elf, cyberdemon);

	battlearea(balrog, human);
	battlearea(balrog, elf);
	battlearea(balrog, cyberdemon);

	battlearea(cyberdemon, human);
	battlearea(cyberdemon, balrog);
	battlearea(cyberdemon, elf);

	return 0;
}
void battlearea(Creature& creature1, Creature& creature2) {
	cout << creature1.getSpecies() << " v.s " << creature2.getSpecies() << endl;
	cout << "Strength : " << creature1.getStrength() << " v.s " << creature2.getStrength() << endl;

	int hit1, hit2;
	hit1 = creature1.getHit();
	hit2 = creature2.getHit();

	cout << "Hitpoints : " << hit1 << " v.s " << hit2 << endl;

	while (hit1 > 0 && hit2 > 0) {
		hit1 -= creature2.getDamage();
		hit2 -= creature1.getDamage();
		cout << "Hitpoints : " << hit1 << " v.s " << hit2 << endl;
	}
	if (hit1 <= 0 && hit2 <= 0) {
		cout << "--over--" << endl;
	}
	else if (hit1 <= 0) {
		cout << "--" << creature2.getSpecies() << "--" << " win" << endl;
	}
	else {
		cout << "--" << creature1.getSpecies() << "--" << " win" << endl;
	}

}