#include <cmath>
#include <iostream>
#include "Point2D.h"

void Point2D::Distance(Point2D& xy)
{
	std::cout << sqrt((xy.mX * xy.mX) + (xy.mY * xy.mY)) << std::endl;
}

void Point2D::Print2D(Point2D& xy)
{
	std::cout << "(" << xy.mX << ", " << xy.mY << ")" << std::endl;
}


