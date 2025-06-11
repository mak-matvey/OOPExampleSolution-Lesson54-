#include "SoundStudio.h"
#include "Cat.h"
#include "Dog.h"
#include "Crocodile.h"

int main()
{
	Animal a1, a2, a3;

	cout << "Number of animals: " << a3.count << endl;
	cout << "Number of animals: " << Animal::count << endl;

	{
		Animal a4, a5;
		cout << "Number of animals: " << Animal::count << endl;
	}

	cout << "Number of animals: " << Animal::count << endl;

	return 0;
}