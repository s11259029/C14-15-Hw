#ifndef UniversityStaff_h
#define UniversityStaff_h
#include<iostream>
#include<string>

using std::string;
using std::istream;
using std::ostream;
class UniversityStaff {
public:
	UniversityStaff();
	UniversityStaff(string theName);
	UniversityStaff(const UniversityStaff& theObject);
	string getName()const;
	UniversityStaff& operator=(const UniversityStaff& rtSide);
	friend istream& operator>>(istream& inStream, UniversityStaff& staffObject);
	friend ostream& operator<<(ostream& outStream, const UniversityStaff& staffObject);
private:
	string name;
};


#endif // !UniversityStaff_h

