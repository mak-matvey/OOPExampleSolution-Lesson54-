#include "Student.h"

int main()
{
	Student st1, st2;

	st1.name = "Dominik";
	st1.age = 13;
	st1.mark = 7.6;
	st1.alive = true;

	st2.name = "Ivan";
	st2.age = 14;
	st2.mark = 3.4;
	st2.alive = false;

	cout << st1.getString();
	cout << st2.getString();

	return 0;
}