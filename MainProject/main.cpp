#include "Student.h"

int main()
{
	Student student1;
	Student student2 ("Alex");
	Student student3 ("Lesha", 14);
	Student student4 ("Ivan", 15, 8.4, true);

	cout << "Student 1:\n" << student1.toString() << endl;
	cout << "Student 2:\n" << student2.toString() << endl;
	cout << "Student 3:\n" << student3.toString() << endl;
	cout << "Student 4:\n" << student4.toString() << endl;

	return 0;
}