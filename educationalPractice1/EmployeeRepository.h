#ifndef EMPLOYEEREPOSITORY_H
#define EMPLOYEEREPOSITORY_H

#include "Repository.h"
#include "Employee.h"

class EmployeeRepository : public Repository<Employee>
{
public:
	EmployeeRepository(bool sync = false);
	~EmployeeRepository();
	bool Add(Employee emp);
	void ReadFromStorage();
	void WriteToStorage();
};


#endif // !1