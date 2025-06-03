#pragma once
#include "Animal.h"

class SoundStudio
{
public:
	void makeItSound(Animal* animal)
	{
		animal->getVoice();
	}
};