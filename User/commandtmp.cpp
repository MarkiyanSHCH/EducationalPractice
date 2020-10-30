#include "commandtmp.h"
#include <iostream>
using namespace std;

void Command::showEmployee() {
    system("CLS");
    for (int i = 0; i < employeeRepository.data.size(); i++) {
        cout << i + 1 << ". \n\n";
        Employee* tmp = static_cast<Employee*>(employeeRepository.data[i]);
        tmp->showInfo();
        cout << endl;
    }

}

void Command::showCustomer() {
    system("CLS");

    for (int i = 0; i < customerRepository.data.size(); i++) {
        cout << i + 1 << ". \n\n";
        ((Customer*)customerRepository.data[i])->showInfo();
        cout << endl;
    }
}

void Command::showDriver() {
    system("CLS");

    for (int i = 0; i < driverRepository.data.size(); i++) {
        cout << i + 1 << ". \n\n";
        ((Driver*)driverRepository.data[i])->showInfo();
        cout << endl;
    }
}


void Command::analyse() {
    system("CLS");
    int max = ((Employee*)employeeRepository.data[0])->stars;
    int index = 0;
    for (int i = 0; i < employeeRepository.data.size(); i++) {
        if (((Employee*)employeeRepository.data[i])->stars > max) {
            max = ((Employee*)employeeRepository.data[i])->stars;
            index = i;
        }
    }

    cout << "\t\t\tTop Employee : \n\n";
    ((Employee*)employeeRepository.data[index])->showInfo();

    system("Pause");
}