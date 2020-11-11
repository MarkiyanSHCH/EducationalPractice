#include "DriverRepository.h"
#include <fstream>
using namespace std;

DriverRepository::DriverRepository(bool sync) : Repository(sync)
{
	ReadFromStorage();
}

DriverRepository::~DriverRepository()
{

}

bool DriverRepository::Add(Driver emp)
{
	return Repository::Add(emp);
}

void DriverRepository::ReadFromStorage()
{

	ifstream myfile("Driver.txt");
	string firstName;
	string lastName;
	short age;
	short stars;
	string car;
	if (!myfile)
	{
		throw("Error: Driver.txt not found");

	}

	for (int i = 0; myfile; i++) {
		if (myfile >> firstName >> lastName >> age >> stars >> car)
		{
			Driver tmp(firstName, lastName, age, stars, car);
			Add(tmp);
		}
	}
	cout << "File Driver.txt Read Successfully" << endl;
	myfile.close();


}

void DriverRepository::WriteToStorage()
{
	ofstream outf("Driver.txt", ios::out);
	if (!outf)
	{
		throw("Error: Driver.txt not found");

	}
	else {
		for (int i = 0; i < data.size(); i++) {
			outf << data[i].returnStringInfo() << endl;

		}
	}
	outf.close();
}