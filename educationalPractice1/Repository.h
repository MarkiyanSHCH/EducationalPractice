#ifndef REPOSITORY_H
#define REPOSITORY_H

#include <iostream>
#include <vector>

using namespace std;


template<class T>
class Repository
{
public:
	vector<T*> data;
	bool sync;

	bool Add(T* t) {
		data.push_back(t);
		if (sync)
			WriteToStorage();

		return true;
	}
	virtual void ReadFromStorage() = 0;
	virtual void WriteToStorage() = 0;

public:
	Repository(bool sync = false) {
		this->sync = sync;
		ReadFromStorage();
	}
	~Repository() {
		WriteToStorage();

		for (int i = 0; i < data.size(); i++) {
			delete data[i];
		}
	}
};

#endif // !1