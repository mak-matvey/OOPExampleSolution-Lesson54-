#include "Initializer.h"

void Initializer::init(Group group)
{
	srand(time(0));

	if (group.isEmpty())
	{
		return;
	}

	string names[]{ "Alex", "Matvey", "Veronika",
				   "Sofia", "Alice", "Anna", "Stepan", "Daniil",
				   "Arseniy", "Vlad", "Bogdan", "Viktor", "Ilya",
				   "Peter", "Harry", "Gleb" };

	int minAge = 13;
	int maxAge = 18;

	int minMark = 6;
	int maxMark = 10;

	for (int i = 0; i < group.getCount(); i++)
	{
		group.get(i).setName(names[rand() % 16]);
		group.get(i).setAge(rand() % (maxAge - minAge + 1) + minAge);

		for (int j = 0; j < group.get(i).getCountMarks(); j++)
		{
			group.get(i).getMarks()[j] = rand() % (maxMark - minMark + 1) + minMark;
		}
	}
}