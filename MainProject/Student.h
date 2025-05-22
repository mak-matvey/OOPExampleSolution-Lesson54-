#pragma once
#include <iostream>
#include <string>

using namespace std;

class Student
{
private:

	string name;
	int age;
	bool alive;

	string convert();

public:
	// constructors
	Student(string name) : Student(name, 13)
	{
	}
	Student(string name, int age) : Student(name, age, true)
	{
	}
	
	Student(string name, int age, bool alive);
	
	Student() : Student("", 0, false) {}
	
	Student(const Student& student);
	
	// destructor
	~Student();

	// methods get and set
	string getName();
	void setName(string name);
	int getAge();
	void setAge(int age);
	bool isAlive();
	void setAlive(bool alive);

	// methods
	string toString();
};