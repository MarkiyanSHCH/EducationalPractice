#ifndef COMMAND_H
#define COMMAND_H

#include <iostream>
#include <string>
#include <vector>
#include "../educationalPractice1/employee.h"
#include "../educationalPractice1/customer.h"
#include "../educationalPractice1/driver.h"
#include "../educationalPractice1/EmployeeRepository.h"
#include "../educationalPractice1/CustomerRepository.h"
#include "../educationalPractice1/DriverRepository.h"
using namespace std;

class Command {
public:

	EmployeeRepository employeeRepository = EmployeeRepository(true);
	CustomerRepository customerRepository = CustomerRepository(true);
	DriverRepository driverRepository = DriverRepository(true);

public:

	void addEmployee();
	void addCustomer();
	void addDriver();

	void showEmployee();
	void showCustomer();
	void showDriver();

	void analyse();

	void deleteEmployee(int ind);
	void deleteCustomer(int ind);
	void deleteDriver(int ind);
};

#endif // !1

