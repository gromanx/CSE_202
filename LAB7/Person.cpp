/* Gladys Roman
   Homework 3
   Person.cpp
   This file defines the class Person
   June 4, 2019
*/ 

// libraries
#include "Person.h"
#include <string>
using namespace std; 

Person::Person()
{	name = "";
 	address = "";
	number = "";
	email = "";
} //default constructor

Person::Person(string n, string a, string num, string e)
{	name = n;
	address = a;
	number = num;
	email = e;
}

string Person::getName()
{ 	return name;
}

string Person::getAddress()
{ 	return address;
}
   
string Person::getNumber()
{ 	return number;
}

string Person::getEmail()
{ 	return email;
}
   
string Person::whatami()
{ 	return "Person";
}

void Person::reset(string n, string a, string num, string e)
{ 	name = n;
      	address = a;
      	number = num;
      	email = e;
}  
