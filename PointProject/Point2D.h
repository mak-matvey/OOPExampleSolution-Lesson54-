#pragma once
#include <string>

using namespace std;

class Point2D
{
private:
	int x;
	int y;

	double getLenght();
public:
	Point2D() : x(0), y(0) {}
	Point2D (int x, int y) : x(x), y(y) {}

	int getX() { return x; }
	void setX(int x) { this->x = x; }
	int getY() { return x; }
	void setY(int y) { this->y = y; }

	string toString();

	bool operator==(Point2D point);
	bool operator!=(Point2D point);
	bool operator>(Point2D point);
	bool operator<(Point2D point);
	bool operator>=(Point2D point);
	bool operator<=(Point2D point);
};