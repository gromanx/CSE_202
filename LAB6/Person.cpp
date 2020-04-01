/* Gladys Roman
 * Lab 6
 * Person.cpp
 * May 14, 2019
 * This file defines the classes Person and Location.
 */
   
// libraries
#include "Person.h"
#include <string>
using namespace std; 

// Person class 
Person::Person()
{
        firstname = "";
        lastname = "";
        company = "";
}; // defualt constructor

Person::Person(string fname, string lname, string cname)
{	firstname = fname;
	lastname = lname;
	company = cname;
}; // overload constructor
	
string Person::getFirstName()
{	return firstname;
};

string Person::getName()
{	return firstname + " " + lastname;
};

string Person::getLastName()
{ 	return lastname;
};

string Person::getCompany()
{ 	 return company;
};



// Location class
Location::Location()
{	address = "";
	building = "";
	room = "";
}; // default constructor
	
Location::Location(string addr, string bldg, string rm)
{	address = addr;
	building = bldg;
	room = rm;
}; 

string Location::getLocationAddress()
{	return address;
};

string Location::getLocationBuilding()
{	return building;
};

string Location::getLocationRoom()
{ 	return room;
};
