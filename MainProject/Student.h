#pragma once
#include <iostream>
#include <string>
using namespace std;

string getString();

class Student
{
public:

	string name;
	int age;
	float mark;
	bool alive;

	string getString()
	{
		string s = "Name: ";

		s += name + ", ";
		s += "age: " + to_string(age) + ", ";
		s += "average mark: " + to_string(mark) + ", ";
		s += "is a student? ";
		s += (alive ? "Yes\n" : "No\n");

		return s;
	}
};