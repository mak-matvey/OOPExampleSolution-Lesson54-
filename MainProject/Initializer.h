#include "Student.h"
#include <ctime>

class Initializer
{
public:
	void init(Student*& list, int count)
	{
		srand(time(0));

		if (list == nullptr && count > 0)
		{
			list = new Student[count];
		}

		string names[]{ "Alex", "Matvey", "Veronika",
					   "Sofia", "Alice", "Anna", "Stepan", "Daniil",
					   "Arseniy", "Vlad", "Bogdan", "Viktor", "Ilya",
					   "Peter", "Harry", "Gleb" };

		int minAge = 13;
		int maxAge = 18;

		int minMark = 0;
		int maxMark = 10;

		for (int i = 0; i < count; i++)
		{
			list[i].setName(names[rand() % 16]);
			list[i].setAge(rand() % (maxAge - minAge + 1) + minAge);

			for (int j = 0; j < list[i].getCountMarks(); j++)
			{
				list[i].getMarks()[j] = rand() % (maxMark - minMark + 1) + minMark;
			}
		}
	}
};