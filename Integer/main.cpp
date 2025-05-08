#include "Integer.h"
#include <iostream>

using namespace std;

int main(void)
{
	Integer integer(1, 2);

	cout << "Testing Integer class methods: " << endl;

	cout << "Testing method add with class Integer(1,2): ";

	integer.add(integer);

	cout << "Result: " << integer.add(integer);
}