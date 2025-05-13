#include "Integer.h"
#include <iostream>

using namespace std;

int main(void)
{
	Integer integer(1, 2);
	Integer testInteger(0, 0);

	cout << "Testing Integer class methods: " << endl;

	integer.add(integer);

	cout << "Testing method add with class Integer(1,2): "
		<< testInteger.num1;
}