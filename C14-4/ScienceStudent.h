#ifndef ScienceStudent_h
#define ScienceStudent_h
#include<iostream>
#include<string>
#include"Student.h"
using std::string;
class ScienceStudent :public Student {
public:
	ScienceStudent();
	ScienceStudent(string theproperties,string course,string theUniversityName,int theregistrationNumber,UniversityStaff& theObject);
	ScienceStudent(ScienceStudent& theObect);
	string getproperties();
	string getcourse();
	ScienceStudent& operator=(const ScienceStudent& theRSide);
private:
	string properties;
	string course;
};

#endif // !ScienceStudent

