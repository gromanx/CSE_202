/* Gladys Roman
   Homework 3
   Faculty.h
   This class is derived from class Employee, which is derived from class Person.
   June 4, 2019
*/

// libraries
#ifndef FACULTY_H
#define FACULTY_H
#include <string>
#include "Person.h"
#include "Employee.h"
using namespace std;

class Faculty:public Employee
{
	public:
  	Faculty();
  	Faculty(string r, string stat, string o, string s, string dh, string n, string a, string num, string e);
  	string getRank();
  	string getStatus();
  	virtual string whatami();

	private:
  	string rank;
  	string status;
};

#endif
