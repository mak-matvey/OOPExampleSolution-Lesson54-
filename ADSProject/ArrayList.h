#pragma once
#include <iostream>
#include <string>

using namespace std;

class ArrayList
{
private:
	int* list;
	int size;
public:
	ArrayList();
	~ArrayList();

	void add(int element);
	void add(int element, int index);
	void addAll(int* elements, int size);
	// add later: void addAll(int index, int* elements, int size);
	void remove();
	void remove(int index);
	void clear();
	bool isEmpty();
	int get(int index);
	void set(int element, int index);
	int getSize();
	string toString();
};