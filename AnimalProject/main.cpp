#include "main.h"

class A
{
public:
	int value = 0;

	virtual void show()
	{
		cout << "Class A" << endl;
	}
};

class B : public A
{
public:
	void show() override
	{
		cout << "Class B" << endl;
	}
};

class C : public B
{
public:
	void show() override
	{
		cout << "Class C" << endl;
	}

};

class D : public C
{
public:
	void show() override
	{
		cout << "Class D" << endl;
	}

};

int main()
{

	A* a = new A();
	a->show();
	delete a;

	a = new B();
	a->show();

	a = new C();
	a->show();

	a = new D();
	a->show();

	return 0;
}