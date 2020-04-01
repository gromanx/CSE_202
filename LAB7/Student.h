/* Gladys Roman
   Homework 3
   Student.h
   This class inherets from class Person.
   June 4, 2019
*/

// libraries
#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include "Person.h"
using namespace std;

class Student:virtual public Person
{
	public:
  	Student();
  	Student(string cs, string n, string a, string num, string e);
  	string getClassStatus();
  	virtual string whatami();

	private:
  	string classStatus;
};

#endif
