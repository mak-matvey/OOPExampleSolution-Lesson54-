#pragma once
#include "main.h"

class Animal
{
private:
	static int count;
public:
	string name;

	Animal()
	{
		count++;
	}
	
	Animal(string name) : name(name) {}

	~Animal()
	{
		count--;
	}

	virtual void getVoice()
	{
		cout << "..." << endl;
	}

	static int getCount();

	string toString();
};