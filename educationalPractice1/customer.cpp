#include "customer.h"
#include <iostream>

using namespace std;

Customer::Customer(string firstName, string lastName, short age, string address, int bonus): Person(firstName, lastName, age) {
	this->address = address;
	this->bonus = bonus;
}

void Customer::showInfo() {
	cout << "First Name : " << firstName << "\nLast Name:  " << lastName << "\nAge : " << age;
	cout << "\nAddress : " << address << "\nBonus : " << bonus << endl;
}

void Customer::addBonus() {
	bonus += 100;
}

void Customer::addCustomer(string firstName, string lastName, short age, string address, int bonus = NULL) {
	addPerson(firstName, lastName, age);
	this->address = address;
	this->bonus = bonus;
}

void Customer::changeAddress() {
	system("CLS");
	cout << "Address : " << address << endl;
	string tmp;
	cout << "Enter new address : ";
	cin >> tmp;
	address = tmp;
	cout << "New address : " << address << endl;

}

string Customer::returnStringInfo() {
	string tmp = firstName + " " + lastName + " " + to_string(age) + " " + address + " " + to_string(bonus);
	return tmp;
}