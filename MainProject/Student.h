#pragma once
#include <iostream>
#include <string>
using namespace std;

string toString();

class Student
{
public:

	string name;
	int age;
	float mark;
	bool alive;

	// constructors
	Student()
	{
		cout << "default-construcor" << endl;

		name = "undefined";
		age = 13;
		mark = 4.0;
		alive = true;

	}

	// methods
	string toString()
	{
		string s = "Name: ";

		s += name + "\n";
		s += "Age: " + to_string(age) + "\n";
		s += "Average mark: " + to_string(mark) + "\n";
		s += "Is a student? ";
		s += (alive ? "Yes" : "No");

		return s;
	}
};