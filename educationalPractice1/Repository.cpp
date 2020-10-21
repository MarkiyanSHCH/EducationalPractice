#include "Repository.h"

Repository::Repository(bool sync)
{
	this->sync = sync;
	ReadFromStorage();
}

Repository::~Repository()
{
	WriteToStorage();

	for (int i = 0; i < data.size(); i++) {
		delete data[i];
	}
}

bool Repository::Add(Entity* entity)
{
	data.push_back(entity);
	if (sync)
		WriteToStorage();

	return true;
}