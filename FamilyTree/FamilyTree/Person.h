#pragma once
#include <string>
#include <vector>
using namespace std;
class Person {
	int id;
	string name;
	Person* father;
	Person* mother;
	vector<Person*> children;
public:
	Person(int id, string name);
	void setFather(Person* father);
	void setMother(Person* mother);
	void addChild(Person* child);
	Person* getFather();
	Person* getMother();
	vector<Person*>& getChildren();
	int getID();
	void printInfo();
	string getName();
};