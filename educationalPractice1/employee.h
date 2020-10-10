#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>
#include "person.h"

using namespace std;

class Employee: public Person {
public:
	short stars;
	Employee(string = "", string = "", short = NULL, short = NULL);
	virtual void showInfo();

	void setRating();
	void addEmployee(string firstName, string lastName, short age, short stars);
	
	string returnStringInfo();

};


#endif // !1