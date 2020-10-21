#include "CustomerRepository.h"
#include <fstream>
using namespace std;

CustomerRepository::CustomerRepository(bool sync) : Repository(sync)
{
	ReadFromStorage();
}

CustomerRepository::~CustomerRepository()
{

}

bool CustomerRepository::Add(Customer& emp)
{
	return Repository::Add(&emp);
}

void CustomerRepository::ReadFromStorage()
{


	ifstream myfile("Customer.txt");
	string firstName;
	string lastName;
	short age;
	string address;
	int bonus;
	if (!myfile)
	{
	    throw("Error: Customer.txt not found");
	}
	
	for (int i = 0; myfile; i++) {
	    if (myfile >> firstName >> lastName >> age >> address >> bonus)
	    {
	        Customer* tmp = new Customer(firstName, lastName, age, address, bonus);
			Add(*tmp);
	    }
	    
	}
	cout << "File Customer.txt Read Successfully" << endl;
	myfile.close();


}

void CustomerRepository::WriteToStorage()
{
	ofstream outf("Customer.txt", ios::out);
	if (!outf)
	{
		throw("Error: Customer.txt not found");

	}
	else {
		for (int i = 0; i < data.size(); i++) {
			outf << ((Customer*)data[i])->returnStringInfo() << endl;

		}
	}
	outf.close();
}