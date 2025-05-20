#pragma once

class Queue
{
private:
	int* queue;
	int size;
public:
	void enqueue();
	void dequeue();
	void peek();
	bool isEmpty();
	int getSize();
};