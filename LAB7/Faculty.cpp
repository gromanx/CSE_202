/* Gladys Roman
   Lab 7
   Faculty.cpp
   This class is derived from class Employee, which is derived from class Person.
   May 14, 2019
*/

// libraries
#include "Person.h"
#include "Employee.h"
#include "Faculty.h"
#include <string>
using namespace std;

Faculty::Faculty():Employee()
{	rank = "";
	status = "";
}

Faculty::Faculty(string r, string stat, string o, string s, string dh, string n, string a, string num, string e):Employee(o,s,dh,n,a,num,e)
{	rank = r;
	status = stat;
}

string Faculty::getRank()
{	return rank;
}

string Faculty:: getStatus()
{ 	return status;
}

string Faculty::whatami()
{	return "Faculty";
}
