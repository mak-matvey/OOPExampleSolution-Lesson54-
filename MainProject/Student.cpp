#include "Student.h"

using namespace std;

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

	int* Student::getMarks()
	{
		return marks;
	}

	void Student::setMarks(int* marks, int countMarks)
	{
		if (countMarks <= 0)
		{
			return;
		}

		this->marks = marks;
		this->countMarks = countMarks;
	}

	int Student::getCountMarks()
	{
		return countMarks;
	}

	bool Student::isAlive()
	{
		return alive;
	}

	bool Student::setAlive(bool alive)
	{
		this->alive = alive;
	}

	float Student::getAverageMark()
	{
		int sum = 0;

		for (int i = 0; i < countMarks; i++)
		{
			sum += marks[i];
		}

		return sum / countMarks;
	}


	Student::Student(string name, int age, int countMarks, bool alive)
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

	Student::Student(const Student& student)
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
	Student::~Student()
	{
		if (marks != nullptr)
		{
			delete[] marks;
		}
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

	int Student::get_mark(int index)
	{
		if (countMarks == 0 || index < 0 || index >= countMarks)
		{
			return 0;
		}

		return marks[index];
	}

	void Student::set_marks(int index, int mark)
	{
		if (countMarks == 0 || index < 0 || index >= countMarks
			|| mark < 0 || mark > 10)
		{
			return;
		}

		marks[index] = mark;
	}