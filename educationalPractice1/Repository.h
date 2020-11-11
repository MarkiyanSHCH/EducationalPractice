#ifndef REPOSITORY_H
#define REPOSITORY_H

#include <iostream>
#include <vector>

using namespace std;


template<class T>
class Repository
{
public:
	vector<T> data;
	bool sync;

	bool Add(T t) {
		data.push_back(t);
		if (sync)
			WriteToStorage();

		return true;
	}
	virtual void ReadFromStorage() {};
	virtual void WriteToStorage() {};

public:
	Repository(bool sync = false) {
		this->sync = sync;
		ReadFromStorage();
	}
	~Repository() {
		WriteToStorage();
	}
};

#endif // !1