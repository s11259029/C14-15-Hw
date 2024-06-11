#include<iostream>
#include<string>
#include"Student.h"
using std::string;

Student::Student():UniversityName(" "),registrationNumber(0), proctor(){}
Student::Student(string theUniversityName, int theregistrationNumber, UniversityStaff& theObject):UniversityName(theUniversityName), registrationNumber(theregistrationNumber), proctor(theObject) {}
Student::Student(Student& theObject) :UniversityName(theObject.UniversityName), registrationNumber(theObject.registrationNumber), proctor(theObject.proctor) {}
string Student::getUniversityName()const { return UniversityName; }
int Student::getregistrationNumber()const { return registrationNumber; }
string Student::getProctor()const { return proctor.getName(); }
Student& Student::operator=(const Student& theRSide) {
	UniversityName = theRSide.UniversityName;
	registrationNumber = theRSide.registrationNumber;
	proctor = theRSide.proctor;
	return *this;
}