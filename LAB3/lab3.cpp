/*Gladys Roman
 * lab3.cpp
 * April 16, 2019
 * This program will use the class Chutist to show a parachutist falling and display a parachute at a certain altitude.
 */

#include "ccc_win.h"

class Chutist
{
	public:
  	Chutist();  // Default constructor
  	Chutist(Point loc);       // constructor where chutist always points up
  	void display(int i) const;  // accessor function, displays chutist
  	void move(int dx, int dy);  // mutator function, moves chutist

	private:
  	Point location; // location of chutist 
};

// default constructor
Chutist::Chutist()
{
  	location = Point(0,0);
}

// constructor of Chutist object at Point loc
Chutist::Chutist(Point loc)
{
  	location = loc;
}

// accessor function: displays the chutist at location to the cwin

void Chutist::display(int i) const
{	// displays the chutist at the Point location. 
	// If i is negative the chute is closed. If i is positive, it is open.
        int xvalue = location.get_x();
        int yvalue = location.get_y();
	Point body(xvalue, yvalue - 25);
        Line pbody(location, body);
	cwin << pbody;
	
	// parachute open
	if(i > 0){
         	Point leftcorner(xvalue - 50, yvalue + 50);
        	Point rightcorner(xvalue + 50, yvalue + 50);

        	Line top(leftcorner, rightcorner);
        	Line leftside(leftcorner, location);
        	Line rightside(rightcorner, location);
        
		cwin << top << leftside << rightside;
	}

	// parachute closed
	if(i < 0){
		cwin << location;
	}
}

void Chutist::move(int dx, int dy)
{
	location.move(dx,dy);
}

// main function will use the same concept as in Lab 2, except using a class
int ccc_win_main()
{
  	cwin.coord(0, 1000, 1000, 0);
  	int alt = 999;
  	int velocity = 0;
  	int termVelocity = 174;
  	Point a(500, alt);
  	int secondsToOpen = 7;
  	int seconds = 0;
  	Chutist tom(a);

  	while(alt >= 0)
  	{    	 tom.display(-1); //parachute closed
        	if(seconds < secondsToOpen)
        	{	velocity += 32;
        		seconds++;
        		if(velocity >= 174)
        		{       velocity = termVelocity;
        		}
        	}
        	else
        	{      	tom.display(1); //parachute open
	       		velocity -= 100;
                	if(velocity <= 17)
                        {	velocity = 17;
        		}
		}
        	alt -= velocity;
        	tom.move(0, -velocity);
  	}

        Message message1(Point(180,40), "You have landed!");
        cwin << message1;

	return 0;
}
