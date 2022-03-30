#include <iostream>
#include "Point2D.h"

int main()
{
	Point2D xy(3,4);

	xy.Distance(xy);
	xy.Print2D(xy);
}