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

	// constructor with args
	Student(string nm)
	{
		cout << "constructor with args" << endl;
		name = nm;
		age = 13;
		mark = 4.0;
		alive = true;
	}

	Student(string nm, int a)
	{
		cout << "constructor with args" << endl;
		name = nm;
		age = a > 13 ? a : 13;
		mark = 4.0;
		alive = true;
	}

	// canonical-constructor
	Student(string nm, int a, float mrk, bool alv)
	{
		cout << "canonical-constructor" << endl;
		name = nm;
		age = a > 13 ? a : 13;
		mark = mrk > 4.0 ? mrk : 4.0;
		alive = alv;
	}


	// constructor wihout args
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