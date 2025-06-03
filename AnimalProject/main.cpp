#include "SoundStudio.h"
#include "Cat.h"
#include "Dog.h"

int main()
{
	SoundStudio studio;

	Dog dog("Laika");
	Cat cat("Adel");

	studio.makeItSound(dog);
	studio.makeItSound(cat);
}