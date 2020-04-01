/* Gladys Roman
   Homework 3
   StaffST.cpp
   This class is derived from class Staff, which is derived from class Employee, which is derived from class Person.
   June 4, 2019
*/

// libraries
#include <string>
#include "Person.h"
#include "Employee.h"
#include "StaffST.h"
#include "Student.h"
#include "staff.h"
using namespace std;

StaffST::StaffST():Student(),Staff()
{	credithours = 0;
}

StaffST::StaffST(int ch, string jt, string o, string s, string dh, string cs, string n, string a, string num, string e):Student(cs,n,a,num,e), Staff(jt,o,s,dh, n,a,num,e)
{	credithours = ch;
}

int StaffST::getCreditHours()
{	return credithours;
}

string StaffST::whatami()
{	return "StaffST";
}
