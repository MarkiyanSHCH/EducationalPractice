#include "commandtmp.h"
#include <iostream>
using namespace std;

void Command::addEmployee() {
    string firstNameTmp;
    string lastNameTmp;
    short ageTmp;
    short starsTmp = NULL;

    cout << "Enter first name : ";
    cin >> firstNameTmp;
    cout << "Enter last name : ";
    cin >> lastNameTmp;
    cout << "Enter age : ";
    cin >> ageTmp;
    Employee tmp(firstNameTmp, lastNameTmp, ageTmp, starsTmp);

    employeeRepository.Add(tmp);

}

void Command::addCustomer() {

    string firstNameTmp;
    string lastNameTmp;
    short ageTmp;
    string addressTmp;
    short bonusTmp = NULL;

    cout << "Enter first name : ";
    cin >> firstNameTmp;
    cout << "Enter last name : ";
    cin >> lastNameTmp;
    cout << "Enter age : ";
    cin >> ageTmp;
    cout << "Enter address : ";
    cin >> addressTmp;

    Customer tmp(firstNameTmp, lastNameTmp, ageTmp, addressTmp, bonusTmp);

    customerRepository.Add(tmp);
}

void Command::addDriver() {

    string firstNameTmp;
    string lastNameTmp;
    short ageTmp;
    short starsTmp = NULL;
    string car;

    cout << "Enter first name : ";
    cin >> firstNameTmp;
    cout << "Enter last name : ";
    cin >> lastNameTmp;
    cout << "Enter age : ";
    cin >> ageTmp;
    cout << "Enter car : ";
    cin >> car;
    Driver tmp(firstNameTmp, lastNameTmp, ageTmp, starsTmp, car);

    driverRepository.Add(tmp);
}

void Command::showEmployee() {
    system("CLS");
    for (int i = 0; i < employeeRepository.data.size(); i++) {
        cout << i + 1 << ". \n\n";
        Employee tmp(employeeRepository.data[i]);
        tmp.showInfo();
        cout << endl;
    }

}

void Command::showCustomer() {
    system("CLS");

    for (int i = 0; i < customerRepository.data.size(); i++) {
        cout << i + 1 << ". \n\n";
        customerRepository.data[i].showInfo();
        cout << endl;
    }
}

void Command::showDriver() {
    system("CLS");

    for (int i = 0; i < driverRepository.data.size(); i++) {
        cout << i + 1 << ". \n\n";
        driverRepository.data[i].showInfo();
        cout << endl;
    }
}

void Command::deleteEmployee(int ind) {
    employeeRepository.data.erase(employeeRepository.data.begin() + ind);
    employeeRepository.WriteToStorage();
}

void Command::deleteCustomer(int ind) {
    customerRepository.data.erase(customerRepository.data.begin() + ind);
    customerRepository.WriteToStorage();
}

void Command::deleteDriver(int ind) {

    driverRepository.data.erase(driverRepository.data.begin() + ind);
    driverRepository.WriteToStorage();
}

void Command::analyse() {
    system("CLS");
    int max = employeeRepository.data[0].stars;
    int index = 0;
    for (int i = 0; i < employeeRepository.data.size(); i++) {
        if (employeeRepository.data[i].stars > max) {
            max = employeeRepository.data[i].stars;
            index = i;
        }
    }

    cout << "\t\t\tTop Employee : \n\n";
    employeeRepository.data[index].showInfo();

    system("Pause");
}