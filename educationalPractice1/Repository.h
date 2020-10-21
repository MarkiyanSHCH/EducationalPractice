#ifndef REPOSITORY_H
#define REPOSITORY_H

#include <iostream>
#include <vector>
#include "Entity.h"

using namespace std;

class Repository
{
public:
	vector<Entity*> data;
	bool sync;

	bool Add(Entity*);
	virtual void ReadFromStorage() {}
	virtual void WriteToStorage() {}

public:
	Repository(bool sync = false);
	~Repository();
};

#endif // !1