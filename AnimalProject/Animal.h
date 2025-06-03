#pragma once
#include "main.h"

class Animal
{
	string name;

	Animal(string name) : name(name) {}

	virtual void getVoice()
	{
		cout << "..." << endl;
	}
};