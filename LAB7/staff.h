/* Gladys Roman
   Homework 3
   Staff.h
   June 4, 2019
*/

#ifndef STAFF_H
#define STAFF_H
#include <string>
#include "Person.h"
#include "Employee.h"
using namespace std;

class Staff:public Employee
{
public:
  Staff();
  Staff(string jt, string o, string s, string dh, string n, string a, string num, string e);
  string getJobTitle();
  virtual string whatami();
private:
  string jobTitle;
};

#endif
