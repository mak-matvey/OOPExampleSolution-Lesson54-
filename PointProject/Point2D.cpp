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
	return getLenght() > point.getLenght;
}

bool Point2D::operator<(Point2D point)
{
	return getLenght() < point.getLenght;
}

bool Point2D::operator>=(Point2D point)
{
	getLenght() >= point.getLenght;
}

bool Point2D::operator<=(Point2D point)
{
	getLenght() <= point.getLenght;
}

double Point2D::getLenght()
{
	return sqrt(x * x + y * y);
}