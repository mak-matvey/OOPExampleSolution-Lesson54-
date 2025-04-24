#include <iostream>
#include <string>

using namespace std;

void test(int* ptr)
{
	if (ptr == nullptr)
	{
		ptr = new int;
	}

	*ptr = 100;
}

int main(void)
{
	int* ptr_value = nullptr;

	test(ptr_value);

	cout << "Before value: " << *ptr_value << endl;
}	