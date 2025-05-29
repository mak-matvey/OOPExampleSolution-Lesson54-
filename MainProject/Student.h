#include <iostream>
#include <string>
using namespace std;

// Entity-class
class Student {
private:
	// fields
	string name;
	int age;
	bool alive;

	string convert();

public:
	Student() : Student("", 0, 0, false) { }
	Student(string name) : Student(name, 13) { }
	Student(string name, int age) : Student(name, age, 0, true) { }
	Student(string name, int age, int countMark, bool alive);
	Student(const Student& student);
	~Student();

	string getName();
	void setName(string name);
	int getAge();
	void setAge(int age);
	bool isAlive();
	void setAlive(bool alive);

	string toString();
};