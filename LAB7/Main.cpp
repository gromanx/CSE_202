/* Gladys Roman
   Homework 3
   Main.cpp
   This program tests the functionlaty of the classes: Person, Student, Employee, Faculty, Staff, and StaffST.
   June 4, 2019
*/

// libraries
#include "Person.h"
#include "Student.h"
#include "Employee.h"
#include "Faculty.h"
#include "staff.h"
#include "StaffST.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{ 
 	vector<Person*> v;
   	v.push_back(new Person("John Adams", "Boston", "617-555-0000", "john@adams.com"));
   	v.push_back(new Student("senior", "John Quincy Adams", "Boston", "617-555-0000", "johnq@adams.com"));
   	v.push_back(new Employee("jb358", "70000", "March 2000", "John Smith", "8888 University Pkwy, SB", "909-555-5555", "jsmith@csusb.edu"));
   	v.push_back(new Staff("Brewer","brewhouse 1", "1000","9-15-1764", "Samuel Adams","Boston","617-555-BEER", "sam@adams.com"));
   	v.push_back(new Faculty("lecturer", "tenured", "jb356", "60000", "April 2017", "April Adams", "7777 University Pkwy, SB", "909-333-3333", "aadams@csusb.edu"));
   	v.push_back(new StaffST(5, "Taster", "brewhouse 5", "100", "9-15-1774", "junior", "Samuel Smith", "Boston","617-555-BEER", "samsmith@adams.com"));

   	v[3]->reset("Samuel Adams", "Boston","617-555-BEER", "sam@adams.com");
   	v[4]->reset("April Adams", "7777 University Pkwy, SB", "909-333-3333", "aadams@csusb.edu");
   	v[5]->reset("Samuel Smith", "Boston","617-555-BEER", "samsmith@adams.com");

   	for (int i=0; i<v.size(); i++)
     	{	cout << v[i]->getName() << " - " << v[i]->whatami() << endl;
     	}

   return 0;
}
