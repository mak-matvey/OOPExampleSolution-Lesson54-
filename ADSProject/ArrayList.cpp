#include "ArrayList.h"

ArrayList::ArrayList()
{
	list = nullptr;
	size = 0;
}

ArrayList::~ArrayList()
{
	clear();
}

void ArrayList::add(int element)
{
	add(element, size - 1);
}

void ArrayList::add(int element, int index)
{
	if (isEmpty())
	{
		size = 1;
		list = new int[size];
		list[0] = element;
	}

	else if (isEmpty() || index < 0
		|| index >= size)
	{
		return;
	}

	else
	{
		size++;
		int* tempList = new int[size];

		for (int i = 0, j = 0; j < size; j++)
		{
			if (i != index)
			{
				tempList[j] = list[i];
				i++;
			}
			else
			{
				tempList[j] = element;
			}
		}

		delete[] list;

		list = tempList;
		delete[] tempList;
	}
}

void ArrayList::addAll(int* elements, int size)
{
	for (int i = 0; i < size; i++)
	{
		add(elements[i]);
	}
}

// need fix 68 line
void ArrayList::addAll(int index, int* elements, int size)
{
	for (int i = index; i < size; i++)
	{
		add(elements[i]);
	}
}

void ArrayList::remove()
{
	remove(size - 1);
}

void ArrayList::remove(int index)
{
	if (!isEmpty())
	{
		size--;
		int* tempList = new int[size];

		for (int i = 0, j = 0; i < size; i++)
		{
			if (i != index)
			{
				tempList[j] = list[i];
				j++;
			}
		}

		delete[] list;
		list = tempList;

		delete[] tempList;
	}
}

void ArrayList::clear()
{
	if (list != nullptr)
	{
		delete[] list;
		size = 0;
	}
}

bool ArrayList::isEmpty()
{
	return size > 0;
}

int ArrayList::get(int index)
{
	if (!isEmpty() || index < 0 || index > size)
	{
		return 0;
	}

	return list[index];
}

void ArrayList::set(int element, int index)
{
	if (!isEmpty() || index < 0 || index > size)
	{
		return;
	}

	list[index] = element;
}

int ArrayList::getSize()
{
	return size;
}

string ArrayList::toString()
{
	string s = "List is empty";

	if (!isEmpty())
	{
		s = "[ ";
	}

	for (int i = 0; i < size - 1; i++)
	{
		s += to_string(list[i]) + ", ";
	}

	s += list[size] + " ]";

	return s;
}