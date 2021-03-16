#include "Person.h"
#include <iostream>
using namespace std;
Person::Person(int id, string name) {
	this->id = id;
	this->name = name;
}
void Person::printInfo() {
	cout << name << " (" << id << ")" << endl;
}
void Person::setFather(Person* father) {
	this->father = father;
}
void Person::setMother(Person* mother) {
	this->mother = mother;
}
void Person::addChild(Person* child) {
	this->children.push_back(child);
}
Person* Person::getFather() {
	return father;
}
Person* Person::getMother() {
	return mother;
}
vector<Person*>& Person::getChildren() {
	return children;
}
int Person::getID() {
	return id;
}
string Person::getName() {
	return name;
}