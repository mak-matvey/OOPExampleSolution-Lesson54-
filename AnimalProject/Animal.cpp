#include "Animal.h"

int Animal::count = 0;

int Animal::getCount()
{
	return count;
}

string Animal::toString()
{
	this->name = "Alex";

	return "Animal";
}