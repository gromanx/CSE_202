/* Gladys Roman
 * Lab 6
 * Person.h
 * May 14, 2019
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
        Person(string fname, string lname, string cname);
        string getFirstName();
        string getName();
        string getLastName();
        string getCompany();
    private:
        string firstname;
        string lastname;
        string company; 
}; // Person class declaration


class Location
{
    public:
        Location();
        Location(string addr, string bldg, string rm);
        string getLocationAddress();
        string getLocationBuilding();
        string getLocationRoom();
    private:
        string address;
        string building;
        string room;
}; // Location

#endif
