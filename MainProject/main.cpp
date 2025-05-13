#include "Manager.h"
#include "Initializer.h"

int main()
{
	Student a;
	Student* list = nullptr;
	Initializer initializer;
	Manager manager;

	int count;

	cout << "Input number of students: ";
	cin >> count;

	Group group(count);

	initializer.init(group);

	cout << "All students: " << endl;
	cout << group.toString() << endl;

	return 0;
}