#ifndef COMMAND_H
#define COMMAND_H

#include <iostream>
#include <string>
#include <vector>
#include "EmployeeRepository.h"
#include "CustomerRepository.h"
#include "DriverRepository.h"
using namespace std;

class Command {
public:

	EmployeeRepository employeeRepository = EmployeeRepository(true);
	CustomerRepository customerRepository = CustomerRepository(true);
	DriverRepository driverRepository = DriverRepository(true);

public:
	void showEmployee();
	void showCustomer();
	void showDriver();
	void analyse();
};

#endif // !1

