#include "Point2D.h"
#include <iostream>

int main()
{
	Point2D point1(1, 1), point2(2, 2);

	cout << (point1 > point2) ? "Yes" : "No";
}