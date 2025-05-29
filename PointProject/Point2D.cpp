#include "Point2D.h"
#include <math.h>

bool Point2D::operator==(Point2D point)
{
	return *this == point;
}

bool Point2D::operator!=(Point2D point)
{
	return !(*this == point);
}

bool Point2D::operator>(Point2D point)
{
	return getLenght() > point.getLenght();
}

bool Point2D::operator<(Point2D point)
{
	return getLenght() < point.getLenght();
}

bool Point2D::operator>=(Point2D point)
{
	return !(*this < point);
}

bool Point2D::operator<=(Point2D point)
{
	return !(*this > point);
}



double Point2D::getLenght()
{
	return sqrt(x * x + y * y);
}


string Point2D::toString()
{
	string s = "X = ";
	s += x + ", Y = ", + y;

	return s;
}