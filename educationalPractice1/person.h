#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
using namespace std;

class Person {
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
