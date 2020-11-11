#ifndef CUSTOMERREPOSITORY_H
#define CUSTOMERREPOSITORY_H

#include "Repository.h"
#include "Customer.h"

class CustomerRepository : public Repository<Customer>
{
public:
	CustomerRepository(bool sync = false);
	~CustomerRepository();
	bool Add(Customer& emp);
	void ReadFromStorage();
	void WriteToStorage();
};


#endif // !1