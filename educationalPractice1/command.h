#ifndef COMMAND_H
#define COMMAND_H

#include <iostream>
#include <string>
#include <vector>
#include "employee.h"
#include "customer.h"
#include "driver.h"
using namespace std;

class Command {
private:

	
	string EmployeeFile = "Employee.txt";
	string CustomerFile = "Customer.txt";
	string DriverFile = "Driver.txt";

public:

	vector<Person*> empV;
	vector<Person*> cstV;
	vector<Person*> driV;


	void readEmployeeFile();
	void readCustomerFile();
	void readDriverFile();

	void writeEmployeeFile();
	void writeCustomerFile();
	void writeDriverFile();

	void showAll(string str, vector<Person*> persTmp);


	void addEmployee();
	void addCustomer();
	void addDriver();

	void deleteEmployee(int ind);
	void deleteCustomer(int ind);
	void deleteDriver(int ind);
	


	void analyse();

	

	~Command() {
		for (int i = 0; i < empV.size(); i++) {
			delete[] empV[i];
		}

		for (int i = 0; i < cstV.size(); i++) {
			delete[] cstV[i];
		}
	}
};

#endif // !1

