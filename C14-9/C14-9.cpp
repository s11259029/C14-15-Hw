#include<iostream>
#include<cstdlib>
#include"Balrogs.h"
#include"Cyberdemon.h"
#include"Elves.h"
#include"Human.h"

using namespace std;
void clean() {
	while(getchar()!='\n'){}
}
int main(void) {
	Human human(20, 100);
	Elves elf(15,100);
	Balrogs balrog(10, 100);
	Cyberdemon cyberdemon(15, 100);
	char again;
	do{
	cout << "Human : " << human.getDamage() << " points" << endl;
	cout << "Elves : " << elf.getDamage() << " points" << endl;
	cout << "Balrogs : " << balrog.getDamage() << " points" << endl;
	cout << "Cyberdemon : " << cyberdemon.getDamage() << " points" << endl;
	
	cout << "Again ? (y/n) : ";
	cin >> again;
	clean();
	} while (again == 'y');

	return 0;
}