#pragma once

#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
	// fields
	string name;
	int age;
	int count_marks;
	int* marks;
	bool alive;

	// constructors

	// constructors with args
	Student(string name) : Student(name, 13)
	{
		cout << "constructor with args" << endl;
	}

	Student(string name, int age) : Student(name, age, 10, true) // Добавил значение по умолчанию для count_marks
	{
		//cout << "constructor with args" << endl;
	}

	// canonical-constructor
	Student(string name, int age, int countMarks, bool alive)
	{
		//cout << "canonical-constructor" << endl;
		this->name = name;
		this->age = age > 13 ? age : 13;
		this->count_marks = countMarks; // Исправлено: countMarks вместо count_marks
		marks = new int[count_marks]; // Теперь count_marks инициализирована

		for (int i = 0; i < count_marks; i++)
		{
			marks[i] = 4;
		}

		this->alive = alive;
	}

	// constructor without args
	Student() : Student("undefined", 13, 10, true)
	{
		//cout << "default-constructor" << endl;
	}

	// copy-constructor
	Student(const Student& student)
	{
		cout << "copy-constructor \n\n";
		name = student.name;
		age = student.age;
		count_marks = student.count_marks;
		marks = new int[count_marks];

		for (int i = 0; i < count_marks; i++)  // Fixed: initialized i and added condition
		{
			marks[i] = student.marks[i];
		}
		alive = student.alive;
	}

	// destructor
	~Student()
	{
		//cout << "destructor" << endl;

		if (marks != nullptr)
		{
			delete[] marks;
		}
	}

	// methods
	string toString()
	{
		string s = "Name: ";

		s += name + "\n";
		s += "Age: " + to_string(age) + "\n";
		s += "Marks: ";
		s += convert() + "\n";
		s += "Is a student? ";
		s += (alive ? "Yes" : "No");

		return s;
	}

	string convert()
	{
		if (count_marks == 0)
		{
			return "none";
		}

		string s = "[ ";

		for (int i = 0; i < count_marks - 1; i++)
		{
			s += to_string(marks[i]) + ", ";
		}

		s += to_string(marks[count_marks - 1]) + " ]";

		return s;
	}

	int get_mark(int index)
	{
		if (count_marks == 0 || index < 0 || index >= count_marks)
		{
			return 0;
		}

		return marks[index];
	}

	void set_marks(int index, int mark)
	{
		if (count_marks == 0 || index < 0 || index >= count_marks
			|| mark < 0 || mark > 10)
		{
			return;
		}

		marks[index] = mark;
	}
};