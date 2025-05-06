#pragma once

#include "Initializer.h"

class Manager
{
public:
	Student* findBestStudents(Student* list, int count, int* BestCount);
	Student* findWorstStudents(Student* list, int count, int* BestCount);
};