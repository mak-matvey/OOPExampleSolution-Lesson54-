#pragma once

#include <iostream>
#include <string>

using namespace std;

class Student
{
private:

	string name;
	int age;
	int countMarks;
	int* marks;
	bool alive;

	string convert()
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

public:

	// methods get and set

	string getName()
	{
		return name;
	}

	void setName(string name)
	{
		this->name = name;
	}

	int getAge()
	{
		return age;
	}

	void setAge(int age)
	{
		if (age > 18 || age < 13)
		{
			return;
		}

		this->age = age;
	}

	int* getMarks()
	{
		return marks;
	}

	void setMarks(int* marks, int countMarks)
	{
		if (countMarks <= 0 )
		{
			return;
		}

		this->marks = marks;
		this->countMarks = countMarks;
	}

	int getCountMarks()
	{
		return countMarks;
	}

	bool isAlive()
	{
		return alive;
	}

	bool setAlive(bool alive)
	{
		this->alive = alive;
	}

	float getAverageMark()
	{
		int sum = 0;

		for (int i = 0; i < countMarks; i++)
		{
			sum += marks[i];
		}

		return sum / countMarks;
	}

	// constructors

	Student(string name) : Student(name, 13)
	{
	}

	Student(string name, int age) : Student(name, age, 10, true)
	{
	}

	Student(string name, int age, int countMarks, bool alive)
	{
		this->name = name;
		this->age = age > 13 ? age : 13;
		this->countMarks = countMarks;
		marks = new int[countMarks];

		for (int i = 0; i < countMarks; i++)
		{
			marks[i] = 4;
		}

		this->alive = alive;
	}

	Student() : Student("undefined", 13, 10, true)
	{
		//cout << "default-constructor" << endl;
	}

	Student(const Student& student)
	{
		cout << "copy-constructor \n\n";
		name = student.name;
		age = student.age;
		countMarks = student.countMarks;
		marks = new int[countMarks];

		for (int i = 0; i < countMarks; i++)
		{
			marks[i] = student.marks[i];
		}
		alive = student.alive;
	}

	// destructor
	~Student()
	{
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
		s += (alive ? "Yes\n" : "No\n");

		return s;
	}

	int get_mark(int index)
	{
		if (countMarks == 0 || index < 0 || index >= countMarks)
		{
			return 0;
		}

		return marks[index];
	}

	void set_marks(int index, int mark)
	{
		if (countMarks == 0 || index < 0 || index >= countMarks
			|| mark < 0 || mark > 10)
		{
			return;
		}

		marks[index] = mark;
	}
};