#include<iostream>
#include<string>
#include"Administrator.h"
using namespace std;

namespace SavitchEmployees{
        Administrator::Administrator() :SalariedEmployee(), title(" "), area(" "), supervisor(" ") {}
        Administrator::Administrator(const string& thename, const string& theSsn, const string& thetitle, double theannual, const string& thearea, const string& thesupervisor) :SalariedEmployee(thename,theSsn, theannual),title(thetitle),area(thearea),supervisor(thesupervisor){}
        void Administrator::setSupervisor(const string& sv) {
            supervisor = sv;
        }
        void Administrator:: input() {
            string inp;
            cout << "Enter the name : " ;
            getline(cin,inp);
            setName(inp);
            cout << "Enter the employee number : ";
            getline(cin, inp);
            setSsn(inp);
            double money;
            cout << "Enter the salary : ";
            cin >> money;
            setSalary(money);
            annualsalary = getSalary() * 4 * 12;
            getchar();
            cout << "Enter the title : ";
            getline(cin, title);
            cout << "Enter the area : ";
            getline(cin, area);
            cout << "Enter the supervisor : ";
            getline(cin, supervisor);

        }
        void Administrator::output() {
            cout << "Name : " << getName() << endl;
            cout << "Title : " << title << endl;
            cout << "Area : " << area << endl;
            cout << "Supervisor : " << supervisor << endl;
        }
        void Administrator::printcheck(int) {
            SalariedEmployee::printCheck();
            cout << "Name : " << getName() << endl;
            cout << "Title : " << title << endl;
            cout << "Area : " << area << endl;
            cout << "Supervisor : " << supervisor << endl;
        }
    
    };
     

