#ifndef Administrator_h
#define Administrator_h
#include<iostream>
#include<string>
#include "SaloriedEmployee.h"

using namespace std;

namespace SavitchEmployees
{
    class Administrator :protected SalariedEmployee {
    public:
        Administrator();
        Administrator(const string&, const string&, const string&, double, const string&, const string&);
        void setSupervisor(const string&);
        void input();
        void output();
        void printcheck(int);
    protected:
        double annualsalary;
    private:
        string title;
        string area;
        string supervisor;
    };
    }

#endif
