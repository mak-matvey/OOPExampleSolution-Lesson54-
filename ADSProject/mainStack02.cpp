#include "Stack.h"

bool isPalindrome(string s)
{
	Stack stack;

	int size =  s.length() / 2;

	for (int i = 0; i < size; i++)
	{
		stack.push(s[i]);
	}

	if (s.length() % 2 == 1)
	{
		size++;
	}

	for (int i = size; i < s.length(); i--)
	{
		if (s[i] != stack.pop())
		{
			return false;
		}
	}

	return true;
}

void main(void)
{
	Stack stack;
	string msg;

	cout << "Input your string: " << endl;
	cin >> msg;

}