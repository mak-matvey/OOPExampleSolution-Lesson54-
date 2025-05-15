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

}

void ArrayList::add(int element, int index)
{

}

void ArrayList::addAll(int* elements, int size)
{

}

// add later: void ArrayList::addAll(int index, int* elements, int size)

void ArrayList::remove()
{

}

void ArrayList::remove(int index)
{

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