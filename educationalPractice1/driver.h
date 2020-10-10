#ifndef DRIVER_H
#define DRIVER_H

#include <iostream>
#include <string>
#include "employee.h"

using namespace std;

class Driver : public Employee {
public:
	string car;
	Driver(string = "", string = "", short = NULL, short = NULL, string = "");
	virtual void showInfo();

	void AddDriver(string firstName, string lastName, short age, short stars, string car);
	string returnStringInfo();

};


#endif // !1