/* Gladys Roman
 * Lab 6
 * PersonTest.cpp
 * May 14, 2019
 * This program tests the functionality of the Person and Location classes.
 */

// libraries
#include "Person.h"
#include <iostream>
#include <string>
using namespace std;
    
int main()
{
        Person t("Bill", "Gates", "Microsoft");
        cout << t.getName() << endl;
        cout << t.getCompany() << endl;

	Location z("5500 University Pkwy, SB", "JackBrown", "358");
	cout << z.getLocationAddress() << endl;
        cout << z.getLocationBuilding() << " " << z.getLocationRoom() << endl;

    	return 0;
}
