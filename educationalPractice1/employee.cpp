#include "employee.h"
#include <iostream>

using namespace std;

Employee::Employee(string firstName, string lastName, short age, short stars) : Person(firstName, lastName, age) {
	this->stars = stars;
	if (stars < 0 || stars > 5) {
		throw("Error: Enter wrong rating");
	}
}

void Employee::showInfo() {
	cout << "First Name : " << firstName << "\nLast Name:  " << lastName << "\nAge : " << age;
	cout << "\nRating : ";
	for (int i = 0; i < stars; i++)
		cout << "*";
	cout << endl;
	
}

void Employee::setRating() {
	cout << "You can set from 1 to 5" << endl;
	cin >> stars;
	if (stars < 0 || stars > 5) {
		throw("Error: Enter wrong rating");
	}
}

void Employee::addEmployee(string firstName, string lastName, short age, short stars = NULL) {
	addPerson(firstName, lastName, age);
	this->stars = stars;
}

string Employee::returnStringInfo() {
	 string tmp = firstName + " " + lastName + " " + to_string(age) + " " + to_string(stars);
	 return tmp;
}