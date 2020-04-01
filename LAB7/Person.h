/* Gladys Roman
   Homework 3
   Person.h
   June 4, 2019
*/

// libraries
#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;

class Person
{ 
 	public:
  	Person();
  	Person(string n, string a, string num, string e);
 	string getName();
  	string getAddress();
  	string getNumber();
  	string getEmail();
  	virtual string whatami(); //every class will have this function to reveal to the user what type of object it is in the main function
  	void reset(string n, string a, string num, string e);
  
	private:
  	string name;
  	string address;
  	string number;
  	string email;
};

#endif
