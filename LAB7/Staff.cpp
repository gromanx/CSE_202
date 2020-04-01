/* Gladys Roman
   Homework 3
   Staff.cpp
   June 4, 2019
*/
#include "Person.h"
#include "Employee.h"
#include "staff.h"
#include <string>
using namespace std;

Staff::Staff():Employee()
{	jobTitle = "";
};

Staff::Staff(string jt, string o, string s, string dh, string n, string a, string num, string e):Employee(o,s,dh,n,a,num,e)
{	jobTitle = jt;
};

string Staff::getJobTitle()
{  	return jobTitle;
};
string Staff::whatami()
{	return  "Staff";
};
