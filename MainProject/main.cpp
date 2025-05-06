#include "Initializer.h"

int main()
{
	Student a;
	Student* list = nullptr;
	Initializer initializer;

	int count;

	cout << "Input number of students: ";
	cin >> count;

	cout << endl;

	initializer.init(list, count);

	for (int i = 0; i < count; i++)
	{
		cout << list[i].toString() << endl;
	}
}