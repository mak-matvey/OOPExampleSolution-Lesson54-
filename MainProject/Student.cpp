#include "Student.h"

using namespace std;


Student::Student(string name, int age, bool alive)
{
	this->name = name;
	this->age = age > 13 ? age : 13;
	this->alive = alive;
}

Student::Student(const Student& student)
{
	cout << "copy-constructor \n\n";
	name = student.name;
	age = student.age;
	alive = student.alive;
}

// destructor
Student::~Student()
{
}

string Student::convert()
{
	if (countMarks == 0)
	{
		return "none";
	}

	string s = "[ ";

	for (int i = 0; i < countMarks - 1; i++)
	{
		s += to_string(marks[i]) + ", ";
	}

	s += to_string(marks[countMarks - 1]) + " ]";

	return s;
}

string Student::getName()
{
	return name;
}

void Student::setName(string name)
{
	this->name = name;
}

int Student::getAge()
{
	return age;
}

void Student::setAge(int age)
{
	if (age > 18 || age < 13)
	{
		return;
	}

	this->age = age;
}

bool Student::isAlive()
{
	return alive;
}

void Student::setAlive(bool alive)
{
	this->alive = alive;
}

// methods
string Student::toString()
{
	string s = "Name: ";

	s += name + "\n";
	s += "Age: " + to_string(age) + "\n";
	s += "Marks: ";
	s += convert() + "\n";
	s += "Is a student? ";
	s += (alive ? "Yes\n" : "No\n");

	return s;
}