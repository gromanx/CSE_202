/* Gladys Roman
   Homework 3
   Employee.cpp
   This class inherets from class Person.
   June 4, 2019
*/

// libraries
#include "Person.h"
#include "Employee.h"
#include <string>
using namespace std;

Employee::Employee():Person()
{	office = "";
	salary = "";
	dateHired = "";
} //default constructor

Employee::Employee(string o, string s, string dh, string n, string a, string num, string e):Person(n,a,num,e)
{	office = o;
	salary = s;
	dateHired = dh;
}

string Employee::getOffice()
{	return office;
}

string Employee::getSalary()
{	return salary;
}

string Employee::getDateHired()
{	return dateHired;
}

string Employee::whatami()
{	return "Employee";
}
