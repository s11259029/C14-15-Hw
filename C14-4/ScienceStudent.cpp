#include<iostream>
#include<string>
#include"ScienceStudent.h"
using std::string;
ScienceStudent::ScienceStudent():properties(""),course(""){}
ScienceStudent::ScienceStudent(string theproperties, string thecourse, string theUniversityName, int theregistrationNumber, UniversityStaff& theObject) :properties(theproperties), course(thecourse),Student(theUniversityName,theregistrationNumber,theObject) {}
ScienceStudent::ScienceStudent(ScienceStudent& theObject) :properties(theObject.properties), course(theObject.course) ,Student(theObject){}
string ScienceStudent::getproperties() { return properties; }
string ScienceStudent::getcourse() { return course; }
ScienceStudent& ScienceStudent::operator=(const ScienceStudent& theRSide) {
	Student::operator=(theRSide);
	properties = theRSide.properties;
	course = theRSide.course;
	return *this;
}