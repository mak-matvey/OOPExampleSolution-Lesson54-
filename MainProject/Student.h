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

	string convert();

public:
	// constructors
	Student(string name) : Student(name, 13)
	{
	}
	Student(string name, int age) : Student(name, age, 10, true)
	{
	}
	
	Student(string name, int age, int countMarks, bool alive);
	
	Student() : Student("no name", 13, 10, true) {}
	
	Student(const Student& student);
	
	// destructor
	~Student();

	// methods get and set
	string getName();
	void setName(string name);
	int getAge();
	void setAge(int age);
	int* getMarks();
	void setMarks(int* marks, int countMarks);
	int getCountMarks();
	bool isAlive();
	void setAlive(bool alive);
	double getAverageMark();

	// methods
	string toString();
	int get_mark(int index);
	void set_marks(int index, int mark);
};