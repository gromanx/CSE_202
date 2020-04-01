/* Gladys Roman
 * Homework 2 - encode
 * May 15, 2019
 * This program will input an alphabetic message from a file, and use the class to build the morse code string, and then output the string.
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
  	Code(vector <int> codewords);  // constructor loading customized code
  	string encode(vector <char> message);  // encodes a message consisting of A-Z

	private:
  	vector <string> codewords; //codeword vector parallel to A-Z
  	vector <char> alpha; //  vector for A-Z
  	vector <char> alphacode(); // builds the vector alpha - A B C etc.
  	vector <string> morsecode(); //builds vector codewords containing morse code
  	string encode(char x); //returns the codeword for the character x

};

Code::Code()
{	codewords = morsecode();
	alpha = alphacode();
}

Code::Code(vector <int> codewords)
{	codewords = codewords;
}

vector <string> Code::morsecode()
{	// returns a vector containing the morse code
 	vector <string> temp(28);
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
{	// returns a vector containing the alphabet a-z and " "
 	vector	<char> temp;
 	for (char c='A'; c<='Z'; c++)
      	{	temp.push_back(c);
	}
	temp.push_back(' ');
 	temp.push_back('.');
 
	return temp;
}

string Code::encode(char x)
{	int idx = x - 'A';

	return codewords[idx];
}

string Code::encode(vector<char> message)
{	string encodedStr;
	for(int i = 0; i < message.size(); i++)
	{	 string word;
		 word = message[i];
  		 
		for(int j = 0; j < word.size(); j++)
		{
			if(word[j] == '.')
				encodedStr += "x";
			else if(word[j] == ' ')
				encodedStr  += ".......";
			else if(word[j] >= 'a' && word[j] <= 'z')
				encodedStr += encode(word[j] - 'a' + 'A');
			else if(word[j] >= 'A' && word[j] <= 'Z')
				encodedStr += encode( word[j]);

			encodedStr += " ";
		}		
	}

	return encodedStr;
}

// main function
int main()
{	//variables for input
	vector <char> msg;
        char t;
	cin >> t;

	//sentinel in while condition
 	while(t != '.')
	{
		msg.push_back(t);
		cin >> t;
	}
	msg.push_back('.');
	
	Code encoder;
	string message =  encoder.encode(msg);	
	cout << message << endl;
	
	return 0;
}
