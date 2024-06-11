#include<iostream>
#include<cstdlib>
#include<string>
#include"ScienceStudent.h"
using namespace std;
void output(ScienceStudent& student1) {
	cout << "University name : " << student1.getUniversityName() << endl;
	cout << "Registration number : " << student1.getregistrationNumber() << endl;
	cout << "Proctor : " << student1.getProctor() << endl;
	cout << "Course : " << student1.getcourse() << endl;
	cout << "Properties science dicipline : " << student1.getproperties() << endl;

}
int main(void) {
	UniversityStaff basestaff("K");
	ScienceStudent base("program", "undergraduate course", "NUTN", 11259099, basestaff), SCstudent1(base), Scstudent2;

	cout << "Science student 1 " << endl;
	output(SCstudent1);
	cout << "-------------------------------------" << endl;
	cout << endl;

	cout << "Science student 2 " << endl;
	output(Scstudent2);
	cout << "-------------------------------------" << endl;
	cout << endl;

	Scstudent2 = SCstudent1;
	cout << "Copy student 1 to student 2 : " << endl;
	cout << "Science student 2 : " << endl;
	output(Scstudent2);
	cout << endl;

}
