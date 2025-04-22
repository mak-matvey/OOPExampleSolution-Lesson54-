#include "Student.h"
#include <ctime>

int main()
{
	srand(time(0));

	Student student1("Alex", 14, 5, true);

	cout << "Student 1:\n" << student1.toString() << "\n\n";

	for (int i = 0; i < student1.count_marks; i++)
	{
		student1.set_marks(i, rand() % 7 + 4);
	}

	cout << "Student 1:\n" << student1.toString() << "\n";

	cout << "Student marks: ";
	for (int i = 0; i < student1.count_marks - 1; i++)
	{
		cout << student1.get_mark(i) << ", ";
	}

	cout << student1.get_mark(student1.count_marks - 1) << "\n";

	return 0;
}