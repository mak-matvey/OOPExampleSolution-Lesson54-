#include "Student.h"

int main()
{
	Student* st1 = nullptr;
	Student* st2 = nullptr;

	st1 = new Student;
	st2 = new Student;

	st1->name = "Dominik";
	st1->age = 13;
	st1->mark = 7.6;
	st1->alive = true;

	st2->name = "Ivan";
	st2->age = 14;
	st2->mark = 3.4;
	st2->alive = false;

	cout << "Before: " << endl;
	cout << st1->getString();
	cout << st2->getString();

	st1 = st2;
	st1->name = "Vlad";

	cout << "After: " << endl;
	cout << st1->getString();
	cout << st2->getString();

	delete st1, st2;

	return 0;
}