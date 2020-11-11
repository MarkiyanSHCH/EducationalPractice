#include "EmployeeRepository.h"
#include <fstream>
using namespace std;

EmployeeRepository::EmployeeRepository(bool sync) : Repository(sync)
{
	ReadFromStorage();
}

EmployeeRepository::~EmployeeRepository()
{

}

bool EmployeeRepository::Add(Employee emp)
{
	return Repository::Add(emp);
}

void EmployeeRepository::ReadFromStorage()
{

	ifstream myfile("Employee.txt");
	string firstName;
	string lastName;
	short age;
	short stars;
	if (!myfile)
	{
		throw("Error: Employee.txt not found");

	}

	for (int i = 0; myfile; i++) {
		if (myfile >> firstName >> lastName >> age >> stars)
		{
			Employee tmp(firstName, lastName, age, stars);
			Add(tmp);
		}
	}
	cout << "File Employee.txt Read Successfully" << endl;
	myfile.close();

	
}

void EmployeeRepository::WriteToStorage()
{
	ofstream outf("Employee.txt", ios::out);
	if (!outf)
	{
		throw("Error: Employee.txt not found");

	}
	else {
		for (int i = 0; i < data.size(); i++) {
			outf << data[i].returnStringInfo() << endl;

		}
	}
	outf.close();
}