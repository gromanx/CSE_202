/* Gladys Roman
   Homework 3
   Employee.h
   This class inherets from class Person.
   June 4, 2019
*/

// libraries
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include "Person.h"
using namespace std;

class Employee:virtual public Person
{
	public:
  	Employee();
  	Employee(string o, string s, string dh, string n, string a, string num, string e);
  	string getOffice();
  	string getSalary();
  	string getDateHired();
  	virtual string whatami();

	private:
  	string office;
  	string salary;
  	string dateHired;
};

#endif

