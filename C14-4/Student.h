#ifndef Student_h
#define Student_h

#include<iostream>
#include<string>
#include"UniversityStaff.h"
using std::string;
class Student {
public:
	Student();
	Student(string theUniversityName,int theregistrationNumber,UniversityStaff& theObject);
	Student(Student& theObject);
	string getUniversityName()const;
	int getregistrationNumber()const;
	string getProctor()const;
	Student& operator=(const Student&);
private:
	string UniversityName;
	int registrationNumber;
	UniversityStaff proctor;
};


#endif // !Student_h

