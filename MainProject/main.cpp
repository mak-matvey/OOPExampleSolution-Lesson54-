#include "Student.h"

int main()
{
	Student student1{};

	cout << "Before: \n" << student1.toString() << endl;

	student1.name = "Alex";
	student1.age = 14;
	student1.mark = 7.8;
	student1.alive = 1;

	cout << "After: \n" << student1.toString() << endl;

	return 0;
}