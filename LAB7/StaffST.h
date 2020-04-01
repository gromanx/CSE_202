/* Gladys Roman
   Homework 3
   StaffST.h
   This class is derived from class Staff, which is derived from class Employee, which is derived from class Person.
   June 4, 2019
*/

// libraries
#ifndef STAFFST_H
#define STAFFST_H
#include <string>
#include "Person.h"
#include "Student.h"
#include "Employee.h"
#include "staff.h"

class StaffST : public Student, public Staff
{
	public:
  	StaffST();
  	StaffST(int ch, string jt, string o, string s, string dh, string cs, string n, string a, string num, string e);
  	int getCreditHours();
  	virtual string whatami();

	private:
  	int credithours;
};

#endif
