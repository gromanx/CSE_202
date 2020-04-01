/* Gladys Roman
 * fall.cpp
 * April 9, 2019
 * This program will show a parachutist falling.
 */

#include "ccc_win.h"

int ccc_win_main()
{
	cwin.coord(0, 1000, 1000, 0);
  	int alt = 999;
  	int velocity = 0;
  	int termVelocity = 174;
  	Point a(500, alt);

  	while(alt >= 0)  
  	{	cwin << a;
		velocity += 32;
		if(velocity >= 174)
		{	velocity = termVelocity;
		}
		alt -= velocity;
		a.move(0, -velocity);
  	}	

 	 return 0;
}
