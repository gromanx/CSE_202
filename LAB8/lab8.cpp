/* Gladys Roman
 * lab8.cpp
 * In this program, we are going to revisit the username-password problem by storing the usernames and passwords in a file. The file will consist of a single username and password per line with a space in between.
 * May 21, 2019
 */

// libraries
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;


class PasswordFile
{
 	public:
 	PasswordFile(string filename);// opens the file and reads the names/passwords in the vector entry
 	void addpw(string u, string p); //adds a new user/password to entry and writes entry to the file filename
 	void delpw(string u); //this deletes the user u from the password file
 	bool checkpw(string u, string p); // returns true is user exists and password matches
 
	private:
 
	string filename; // the file that contains password information
	vector<string> user; // the list of usernames/passwords
 	vector<string> password; // the list of usernames/passwords
};

PasswordFile::PasswordFile(string filename)
{	this->filename = filename;
	ifstream inFS;
	inFS.open(filename);
	while(!inFS.eof())  //eof = end of file
	{	string temp;
		inFS >> temp;
		user.push_back(temp);
		inFS >> temp;
		password.push_back(temp);
	}

	inFS.close();
}

void PasswordFile::addpw(string u, string p)
{	user.push_back(u);
	password.push_back(p); //adds paramaters to vectors
	ofstream outFS;
	outFS.open(filename); //adds parameter to txt file
	for(int i = 0; i < user.size(); i++)
	{	
		outFS << user[i] << " " << password[i] << endl;
	}

	outFS.close();
}

void PasswordFile::delpw(string u)
{	for(int i = 0; i < user.size(); i++)
	{	if(user[i] == u)
		{	user.erase(user.begin() + i); //creates iterator at beginning of vector & adds i 
			password.erase(password.begin() + i);

			ofstream outFS;
			outFS.open(filename);
			for(int j = 0; j < user.size(); j++)
			{	
				outFS << user[j] << " " << password[j] << endl;
			}

			outFS.close();
		}
	}
}

bool PasswordFile::checkpw(string u, string p)
{	for(int i = 0; i < user.size(); i++)
	{	if(user[i] == u)
		{	if(password[i] == p)
				return true;
		}
	}

	return false;
}

// main function
int main()
{
 	PasswordFile passfile("password.txt");
	passfile.addpw("dbotting","123qwe");
 	passfile.addpw("egomez","qwerty");
 	passfile.addpw("tongyu","liberty");
 
 	passfile.delpw("egomez");
 	bool authenticated = passfile.checkpw("tongyu", "pwd");
 	if(authenticated)
		cout << "Password found" << endl;
 	else
		cout << "Password not found" << endl;

 	return 0;	
}
