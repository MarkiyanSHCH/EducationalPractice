#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>
#include <string>
#include "person.h"

using namespace std;

class Customer: public Person {
private:

	string address;
	int bonus;

public:

	Customer(string = "", string = "", short = 0, string = "", int = 0);
	virtual void showInfo();

	void changeAddress();
	void addBonus();

	void addCustomer(string firstName, string lastName, short age, string address, int bonus);
	string returnStringInfo();
};



#endif // !1

