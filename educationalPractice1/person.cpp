#include "person.h"
#include <iostream>

using namespace std;

Person::Person(string firstName, string lastName, short age) {
	this->firstName = firstName;
	this->lastName = lastName;
	this->age = age;
	if (age < 0) {
		throw ("Error: Wrong age");
	}
}

void Person::showInfo() {
	cout << "First Name : " << firstName << "\nLast Name:  " << lastName << "\nAge : " << age;
}

void Person::addPerson(string firstName, string lastName, short age) {
	this->firstName = firstName;
	this->lastName = lastName;
	this->age = age;
}

void Person::setting() {
	uint8_t op = NULL;
	while (true) {
		system("CLS");
		cout << "1. Change first name;\t(" << firstName << ")" << endl;
		cout << "2. Change last name;\t(" << lastName << ")" << endl;
		cout << "3. Change age.\t(" << age << ")" << endl;
		cout << "4. Exit" << endl;
		cin >> op;
		if (op == '4') {
			break;
		}
		switch (op) {
			case '1': {
				cout << "First name : " << firstName << endl;
				string tmp;
				cout << "Enter new first name : ";
				cin >> tmp;
				firstName = tmp;
				break;
			}
			case '2': {
				cout << "Last name : " << lastName << endl;
				string tmp;
				cout << "Enter new Last name : ";
				cin >> tmp;
				lastName = tmp;
				break;
			}
			case '3': {
				cout << "Age : " << age << endl;
				short tmp;
				while (true) {
					cout << "Enter new age : ";
					cin >> tmp;
					if (tmp > 0) {
						break;
					}
					cerr << "Error: Wrong age" << endl;
				}
				age = tmp;
				break;
			}
			default: {
				cerr << "Error: wrong operation" << endl;
				system("Pause");
				break;
			}
		}
	}
	
}