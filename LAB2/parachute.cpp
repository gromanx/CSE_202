/* Gladys Roman
 * parachute.cpp / lab2
 * April 9, 2019
 * This program will show a parachutist falling and the calculations of their fall in terms of velocity before and after their parachute opens.
 */


#include "ccc_win.h"

int ccc_win_main()
{
  	cwin.coord(0, 1000, 1000, 0);
  	int alt = 999; //starting altitude
  	int velocity = 0; //initial velocity
  	int termVelocity = 174; //maximum velocity the parachutist may possibly reach
  	Point a(500, alt);
  	int secondsToOpen = 7; //parachute will open after 7 seconds of falling
  	int seconds = 0;

  	while(alt >= 0) // 0 represents the ground
  	{     	cwin << a;
		if(seconds < secondsToOpen)
		{	velocity += 32; //increase velocity my 32 each second that passes
			seconds++;
        		if(velocity >= 174) //if velocity is > max velocity, reset to max velocity value
        		{       velocity = termVelocity;
        		}
		}
		else //parachut is opened
		{	velocity -= 100; //decrease velocity by 100 each second that passes
			if(velocity <= 17)
			{	velocity = 17; //minimum velocity while in the air
			}
		}
		alt -= velocity; //decrease altitude value
        	a.move(0, -velocity); //decrease altitude of parachutist in graphics
  	}
	
 	Message message1(Point(180,40), "You have landed!");
	cwin << message1;

 	 return 0;
}
       
