#include "Student.h"

string Student::getName() {
	return name;
}

void Student::setName(string name) {
	this->name = name;
}

int Student::getAge() {
	return age;
}

void Student::setAge(int age) {
	if (age >= 13 && age <= 18) {
		this->age = age;
	}
}

bool Student::isAlive() {
	return alive;
}

void Student::setAlive(bool alive) {
	this->alive = alive;
}


// canonical-constructor
Student::Student(string name, int age, int countMark, bool alive) {
	//cout << "canonical-constructor ..." << endl;
	this->name = name;
	this->age = age;
	this->alive = alive;
}

// copy-constructor
//Student::Student(const Student& student) : Student(student.name,
//	student.age, student.alive)
//{
//	//cout << "copy-constructor ..." << endl;
//}

// destructor
Student::~Student() {
	//cout << "destructor..." << endl;
}

// methods
string Student::toString() {
	string s = "Name: " + this->name;
	s += ", age: " + to_string(this->age);
	s += ", marks " + this->convert();
	s += ", alive: ";
	s += this->alive ? "yes" : "no";
	return s;
}