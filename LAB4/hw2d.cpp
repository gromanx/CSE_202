/* Gladys Roman
 * Homework 2 - decode
 * May 15, 2019
 * This program will take a file containing a message in morse code and convert it to the alphabetic message.
 */

// libraries
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Code
{
	public:
  	Code();  // Default constructor - loads and uses morse code
  	string decode(vector< string> message);  // decodes a message 

	private:
  	vector <string> codewords; // codeword vector parallel to A-Z
 	 vector <char> alpha; // vector for A-Z
  	vector <char> alphacode(); // function builds the vector alpha - A B C etc.
  	vector <string> morsecode(); // builds vector codewords containing morse code
  	char decode(string c); //returns the character for the codeword c.

};

Code::Code()
{	codewords = morsecode();
	alpha = alphacode();
}

vector <string> Code::morsecode()
{ 	// This member function returns a vector containing the morse code
 	vector<string> temp(28);
 	temp[0] = ".-";  //0-25 is A-Z
 	temp[1] = "-...";
 	temp[2] = "-.-.";
 	temp[3] = "-..";
 	temp[4] = ".";
 	temp[5] = "..-.";
 	temp[6] = "--.";
 	temp[7] = "....";
 	temp[8] = "..";
 	temp[9] = ".---";
	temp[10] = "-.-";
 	temp[11] = ".-..";
 	temp[12] = "--";
 	temp[13] = "-.";
 	temp[14] = "---";
 	temp[15] = ".--.";
 	temp[16] = "--.--";
 	temp[17] = ".-.";
 	temp[18] = "...";
 	temp[19] = "-";
 	temp[20] = "..-";
	temp[21] = "...-";
 	temp[22] = ".--";
 	temp[23] = "-..-";
 	temp[24] = "-.--";
 	temp[25] = "--..";
 	temp[26] = "......."; //space
 	temp[27] = "x"; //ending of the msg
 
	return temp;
}

vector <char> Code::alphacode()
{ 	// This member function returns a vector containing the alphabet a-z and " "
 	vector<char> temp;
 	for (char c='A'; c<='Z'; c++)
	{	temp.push_back(c);
	}
	temp.push_back(' ');
 	temp.push_back('.');
 
	return temp;
}

char Code::decode(string c)
{	//decodes one character at a time
	for(int i = 0; i < codewords.size(); i++)
	{	if(codewords[i] == c)
		{	return alpha[i];
		}
	}

	return '0';
}

string Code::decode(vector <string> message)
{	//calls the private decode function to create the string of msg
	char temp;
	string msg;
	for(int i = 0; i < message.size(); i++)
	{	temp = decode(message[i]);
		msg += temp;
	}
	
	return msg;
}


// main function
int main()
{	//variables for input
	vector <string> msg;
        string t;
	cin >> t;

	//sentinel in while condition
 	while(t != "x")
	{	msg.push_back(t);
		cin >> t;
	}
	msg.push_back("x");
	
	Code decoder;
	string message =  decoder.decode(msg);	
	cout << message << endl; //output decoded msg
	
	return 0;
}
