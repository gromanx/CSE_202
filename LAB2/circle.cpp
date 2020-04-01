/* Gladys Roman
 * circle.cpp 
 * April 9, 2019
 * This program demonstrates functions of the graphics window class, ccc_win.h.
 */

#include "ccc_win.h"

int ccc_win_main()
{
  	Point p(1, 3);
  	Circle c(p,2.5);
  	cwin << p << c;
  	c.move(3,3);
  	cwin << p << c;
  
	return 0;
}
