#pragma once

class Integer
{
private:
	int num1;
	int num2;
public:
	// constructor
	Integer() : Integer(0, 0)
	{}

	Integer(int num1, int num2)
	{
		this->num1 = num1;
		this->num2 = num2;
	}

	Integer add(Integer integer);
	Integer sub(Integer integer);
	Integer mul(Integer integer);
	Integer div(Integer integer);
	Integer mod(Integer integer);
};