/* Gladys Roman
 * Lab 5
 * May 2, 2019
 * Simple buffer overflow example             RJBotting 9/27/2004
   this is an example with many pieces of insecure code and information.
* This program fixes Dr. Botting's errors.
*/

//libraries
#include <cassert>
#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>

using namespace std;

// foward-declared functions
string get(string askfor, string input);
string get_password(string name);

int main()
{	 // Changed the character arrays to strings.
	string name; string pwd; string passwd; 
	cout << "Address of name =" <<  &name <<"\n";
	cout << "Address of pwd =" <<  &pwd <<"\n";
	cout << "Address of passwd =" <<  &passwd <<"\n";
	string Name = "Name";
	string Password = "Password";

	bool authenticated = false;
	while(! authenticated)
	{       // input the name here 
		name = get(Name, name);
                // get the password pwd for the name
		pwd = get_password(name);
               // input a password passwd
		passwd = get(Password, passwd);
	 	// cout << pwd << " vs " << passwd << endl
                // compare the two passwords
		if(pwd == passwd)
			authenticated = true;
		if(!authenticated)
			cout << "Please try again\n";
	}
	cout << "Welcome " << name << "\n";

	return 0;
}

string get(string askfor, string input)
{	//input a string
	cout << askfor;
	cin >> input;

	return input;
}
string get_password(string name)
{	if(name == "botting")
		return "123456";
	else if(name == "ernesto")
		return "765432";
	else if(name == "tong")
		return "234567";
	else
		 return "qwert";
}
