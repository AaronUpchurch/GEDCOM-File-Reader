#pragma once
/*
#include <iostream>
#include <fstream>
#include <vector>
#include "Person.h"

void printTree(Person* head, int space);
void loadData(vector<Person*>& tree, string filename); // loads people//
Person* getPerson(int id, vector<Person*>& tree); // gets person based on ID //
int getIndex(char c, string word);
void setFamily(vector<Person*>& tree, string filename);
int main()
{
	vector<Person*> tree;
	string filename = "C:/Users/aaron/Downloads/Upchurch Family Tree 2 (7).ged";
	loadData(tree, filename);
	setFamily(tree, filename);
	Person* a = getPerson(39, tree);


}
void printTree(Person* head, int space) {
	for (int i = 0; i < head->getChildren().size(); ++i) {
		for (int j = 0; j < space; ++j) {
			cout << " ";
		}
		head->getChildren().at(i)->printInfo();
		cout << endl;
		printTree(head->getChildren().at(i), space + 8);
	}
}
void setFamily(vector<Person*>& tree, string filename) {
	ifstream file(filename);
	string startLine;
	while (startLine.compare("0 @F1@ FAM ") != 0) { // gets first line //
		getline(file, startLine);

	}

	  // get father, mother... add children, get next fam //
	string line;


	while (getline(file, line)) {
		Person* father;
		Person* mother;
		if (line.substr(2, 4).compare("HUSB") == 0) {
			int fatherID = stoi(line.substr(getIndex('@', line) + 2, line.length() - getIndex('@', line) - 2)); // gets id of father //
			father = getPerson(fatherID, tree);
		}
		else {
			father = new Person(0, "Unknown");
		}
		getline(file, line);
		if (line.substr(2, 4).compare("WIFE") == 0) {
			int motherID = stoi(line.substr(getIndex('@', line) + 2, line.length() - getIndex('@', line) - 2)); // gets id of mother //
			mother = getPerson(motherID, tree);
		}
		else {
			mother = new Person(0, "Unknown");
		}

		while (line.at(0) != '0') {
			if (getline(file, line)  && line.substr(2, 4).compare("CHIL") == 0) {
				int childID = stoi(line.substr(getIndex('@', line) + 2, line.length() - getIndex('@', line) - 2)); // gets id of mother //
				Person* child = getPerson(childID, tree);
				father->addChild(child);
				mother->addChild(child);
				child->setFather(father);
				child->setMother(mother);
				//cout << "Added " << child->getName() << " to " << father->getName() << " and " << mother->getName() << endl;

			}

		}
	}

}
int getIndex(char c, string word) {
	for (int i = 0; i < word.length(); ++i) {
		if (word.at(i) == c) {
			return i;
		}
	}
	return -99;
}
Person* getPerson(int id, vector<Person*>& tree) {
	for (int i = 0; i < tree.size(); ++i) {
		if (tree.at(i)->getID() == id) {
			return tree.at(i);
		}
	}
}
void loadData(vector<Person*>& tree, string filename) {
	ifstream file(filename);
	string line;
	string nameLine;
	string id;
	while (getline(file, line)) {
		if (line.substr(0, 4).compare("0 @P") == 0) {

			int lastAt = 3;  // gets ID //
			while (line.at(lastAt) != '@') {
				++lastAt;
			}
			id = line.substr(4, lastAt - 4);

			while (line.substr(0, 6).compare("1 NAME") != 0) {  // gets fisrt and last name //
				getline(file, line);
			}

			int lastLetterOfFirstName = 7;
			while (line.at(lastLetterOfFirstName) != ' ' && lastLetterOfFirstName < line.length() - 1) {
				++lastLetterOfFirstName;
			}
			string firstName = line.substr(7, lastLetterOfFirstName - 7);

			int firstSlash = 0;
			while (line.at(firstSlash) != '/' && firstSlash < line.length() - 1) {
				++firstSlash;
			}
			string lastName = line.substr(firstSlash + 1, line.length() - firstSlash - 2);

			Person* temp = new Person(stoi(id), firstName + " " + lastName);
			tree.push_back(temp);
		}
	}
	cout << "People loaded" << endl;
}


*/