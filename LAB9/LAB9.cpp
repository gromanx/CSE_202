/* Gladys Roman
   Homework 4 / LAB9
   This program will use a class Mlist which will handle different type objects. An mlist is a list of objects (numbers, strings, etc) which has functions which allow additions to the front, and back of the list, removals from the front and back of the list, and removals from anywhere in the list. The accessor functions will return the front and end of the list. We will use iterators as well as recursion to implement the class.
   June 4, 2019
*/

// libraries
#include <vector>
#include <iostream>
using namespace std;

template<class T>
class Mlist
{
   	public:
    	Mlist(); //creates the list
    	T front(); //returns the front of the list
    	T end(); //returns the end of the list
    	bool in(T x); //returns true if x is in the list and false otherwise
    	bool empty(); // returns true if the list is empty
    	void addfront(T entry); //add entry to the back of the list
    	void addend(T entry); //add entry to the back of the list
   	void addorder(T entry); //add entry to an ordered list
    	void removefront(); //removes the front of the list
    	void removeend(); //removes the back of the list
    	void remove(T n); //searches the list and removes the entry with value n
    
	private:
    	vector<T> mlist;
    	void remove(typename vector<T>::iterator ix, T n); //uses an iterator and recursion to remove value n
    	void addorder(typename vector<T>::iterator ix, T n); //uses an iterator and recursion to add value n in an ordered list
}; // Mlist

template<typename T>
Mlist<T> :: Mlist()
{	vector<T> mlist;	
}

template<typename T>
T Mlist<T> :: front()
{ 	return *mlist.begin();
}

template<typename T>
T Mlist<T> :: end()
{	return *(-- mlist.end());
}

template<typename T>
bool Mlist<T> :: empty()
{	if(mlist.size() == 0)
		return true;
	else
		return false;
}

template<typename T>
bool Mlist<T> :: in( T x)
{	for(int i = 0; i < mlist.size(); i ++)
	{	if(mlist[i] == x)
			return true;
	}
	return false;
}

template<typename T>
void Mlist<T> :: addfront(T entry)
{	mlist.insert(mlist.begin(), entry);
}

template<typename T>
void Mlist<T> :: addend(T entry)
{	mlist.push_back(entry);
}

template<typename T>
void Mlist<T> :: removefront()
{	mlist.erase(mlist.begin());
}

template<typename T>
void Mlist<T> :: removeend()
{	mlist.pop_back();
}

/*
template<typename T>
void Mlist<T> :: remove(T n)
{	typename vector<T> :: iterator ix = mlist.begin();
	while(ix != mlist.end())
	{	if(*ix == n)
			mlist.erase(ix);
		else
			ix++;
	}
}

template<typename T>
void Mlist<T> :: addorder(T entry)
{	typename vector<T> :: iterator ix = mlist.begin();
	while(ix != mlist.end() && *ix > entry)
		ix++;
	mlist.insert(ix, entry);
}
*/

template<typename T>
void Mlist<T> :: addorder(T entry)
{	addorder(mlist.begin(), entry);
}

template<typename T>
void Mlist<T> :: addorder(typename vector <T> :: iterator ix, T n)
{	if(ix == mlist.end())
	{	mlist.insert(mlist.end(), n);
		return;
	}
	if(n <=  *ix)
	{	mlist.insert(ix, n);
		return;
	}
	addorder(++ix, n);
}

template<typename T>
void Mlist<T> :: remove(T n)
{	remove(mlist.begin(), n);
}

template<typename T>
void Mlist<T> :: remove(typename vector<T>::iterator ix, T n)
{	if(ix == mlist.end())
		return;
	if(*ix == n)
		mlist.erase(ix);
	else
		++ix;
	remove(ix, n);
}
			

int main()
{
	 Mlist<int> test1=Mlist<int>() ;

	 //test addorder function
 	test1.addorder(5);
 	test1.addorder(7);
 	test1.addorder(4);

	//test remove function
 	test1.remove(7);

	//test front function
 	cout << test1.front()<< endl;

	//test end function
 	cout << test1.end()<< endl;
 
	Mlist<string> test2= Mlist<string>() ;
	
	//test addend function 
 	test2.addend("John");
 	test2.addend("Paul");
 	test2.addend("Mary");
 	test2.addend("Kate");
 	
	test2.remove("Paul");
 
	cout << test2.front()<< endl;
 	cout << test2.end()<< endl;

	//test in function
 	if(test1.in(4))
		cout << "4 is in the vector" << endl;
 	else
		cout << "4 is not in the vector" << endl;

	//test empty function 
 	if(test2.empty())
		cout << "test2 vector is empty" << endl;
	else
		cout << "test2 vector is not empty" << endl;
 
	return 0;
}
