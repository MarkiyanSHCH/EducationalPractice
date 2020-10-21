#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
#include "Entity.h"
using namespace std;

class Person: public Entity {
protected:
	string firstName;
	string lastName;
	short age;

public:
	Person(string = "", string = "", short = NULL);
	
	virtual void showInfo();
	
	void setting();
	void addPerson(string firstName, string lastName, short age);

};

	#endif // !1
