/* Gladys Roman
   Homework 3
   Student.cpp
   This class inherets from class Person
   June 4, 2019
*/
#include "Person.h"
#include "Student.h"
#include <string>
using namespace std;

Student::Student():Person()
{	classStatus = "";
}

Student::Student(string cs, string n, string a, string num, string e):Person(n,a,num,e)
{	classStatus = cs;
}

string Student::getClassStatus()
{	return classStatus;
}

string Student::whatami()
{ 	return "Student";
}
