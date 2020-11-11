#ifndef DRIVERREPOSITORY_H
#define DRIVERREPOSITORY_H

#include "Repository.h"
#include "Driver.h"

class DriverRepository : public Repository<Driver>
{
public:
	DriverRepository(bool sync = false);
	~DriverRepository();
	bool Add(Driver emp);
	void ReadFromStorage();
	void WriteToStorage();
};


#endif // !1