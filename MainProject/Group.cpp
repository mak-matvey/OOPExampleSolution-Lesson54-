#include "Group.h"

Group::Group():Group(20)
{
}

Group::Group(int capacity)
{
	this->capacity = capacity;
	list = new Student[capacity];
	count = 0;
}

Group::Group(Student* list, int count)
{
	if (count > 0 && list != nullptr)
	{
		this->count = count;
		capacity = count;
		list = new Student[count];

		for (int i = 0; i < count; i++)
		{
			this->list[i] = list[i];
		}
	}
}

Group::~Group()
{
	if (list != nullptr)
	{
		delete[] list;
	}
}

Student get(int index);
void set(int index, Student student);
int getCount();
void add(Student student);
void add(int index, Student student);
void remove(Student student);
void remove(int index);
void clear();
string toString();
bool isEmpty();