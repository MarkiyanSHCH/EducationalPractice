#include "driver.h"
#include <iostream>

using namespace std;

Driver::Driver(string firstName, string lastName, short age, short stars, string car) : Employee(firstName, lastName, age, stars) {
	this->car = car;
}

void Driver::showInfo() {
	cout << "First Name : " << firstName << "\nLast Name:  " << lastName << "\nAge : " << age;
	cout << "\nRating : ";
	for (int i = 0; i < stars; i++)
		cout << "*";
	cout << endl;
	cout << "Car : " << car << endl;

}

void Driver::AddDriver(string firstName, string lastName, short age, short stars = NULL, string car = "") {
	addEmployee(firstName, lastName, age, stars);
	this->car = car;
}

string Driver::returnStringInfo() {
	string tmp = firstName + " " + lastName + " " + to_string(age) + " " + to_string(stars) + " " + car;
	return tmp;
}