//#include "command.h"
//#include <iostream>
//#include <fstream>
//using namespace std;
//
//
//void Command::readEmployeeFile() {
//    ifstream myfile(EmployeeFile);
//    string firstName;
//    string lastName;
//    short age;
//    short stars;
//    if (!myfile)
//    {
//        throw("Error: Employee.txt not found");
//       
//    }
//
//    for (int i = 0; myfile; i++) {
//        if (myfile >> firstName >> lastName >> age >> stars)
//        {
//            Employee* tmp = new Employee(firstName, lastName, age, stars);
//            /*tmp.addEmployee(firstName, lastName, age, stars);*/
//            empV.push_back(tmp);// delete empV1[i]
//        }
//    }
//    system("CLS");
//    cout << "File Employee.txt Read Successfully" << endl;
//    if (empV.size() == 0) {
//        cout << "File Employee.txt empty" << endl;
//        system("Pause");
//    }
//    else {
//        cout << "Read " << empV.size() << " Employees" << endl;
//        system("Pause");
//    }
//    myfile.close();
//}
//
//void Command::readCustomerFile() {
//    ifstream myfile(CustomerFile);
//    string firstName;
//    string lastName;
//    short age;
//    string address;
//    int bonus;
//    if (!myfile)
//    {
//        throw("Error: Customer.txt not found");
//    }
//
//    for (int i = 0; myfile; i++) {
//        if (myfile >> firstName >> lastName >> age >> address >> bonus)
//        {
//            Customer* tmp = new Customer(firstName, lastName, age, address, bonus);
//            /*tmp.addCustomer(firstName, lastName, age, address, bonus);*/
//            cstV.push_back(tmp);
//        }
//        
//    }
//    system("CLS");
//    cout << "File Customer.txt Read Successfully" << endl;
//    if (cstV.size() == 0) {
//        cout << "File Customer.txt empty" << endl;
//        system("Pause");
//    }
//    else {
//        cout << "Read " << cstV.size() << " Customers" << endl;
//        system("Pause");
//    }
//    myfile.close();
//}
//
//void Command::readDriverFile() {
//    ifstream myfile(DriverFile);
//    string firstName;
//    string lastName;
//    short age;
//    short stars;
//    string car;
//    if (!myfile)
//    {
//        throw("Error: Driver.txt not found");
//    }
//
//    for (int i = 0; myfile; i++) {
//        if (myfile >> firstName >> lastName >> age >> stars >> car)
//        {
//            Driver* tmp = new Driver(firstName, lastName, age, stars, car);
//            /*tmp.addEmployee(firstName, lastName, age, stars);*/
//            driV.push_back(tmp);// delete empV1[i]
//        }
//    }
//    system("CLS");
//    cout << "File Driver.txt Read Successfully" << endl;
//    if (driV.size() == 0) {
//        cout << "File Driver.txt empty" << endl;
//        system("Pause");
//    }
//    else {
//        cout << "Read " << driV.size() << " Driver" << endl;
//        system("Pause");
//    }
//    myfile.close();
//}
//
//void Command::showAll(string str, vector<Person*> persTmp) {
//    system("CLS");
//    cout << "\t\t\t" << str << ":\n\n";
//    for (int i = 0; i < persTmp.size(); i++) {
//        cout << i + 1 << ". \n\n";
//        persTmp[i]->showInfo();
//        cout << endl;
//    }
//}
//
//void Command::writeEmployeeFile() {
//    ofstream outf(EmployeeFile, ios::out);
//    if (!outf)
//    {
//        throw("Error: Employee.txt not found");
//
//    }
//    else {
//        for (int i = 0; i < empV.size(); i++) {
//            outf << ((Employee*)empV[i])->returnStringInfo() << endl;
//            
//        }
//    }
//    outf.close();
//}
//
//void Command::writeCustomerFile() {
//    ofstream outf(CustomerFile, ios::out);
//    if (!outf)
//    {
//        throw("Error: Customer.txt not found");
//
//    }
//    else {
//        for (int i = 0; i < cstV.size(); i++) {
//            outf << ((Customer*)cstV[i])->returnStringInfo() << endl;
//        }
//    }
//    outf.close();
//}
//
//void Command::writeDriverFile() {
//    ofstream outf(DriverFile, ios::out);
//    if (!outf)
//    {
//        throw("Error: Driver.txt not found");
//
//    }
//    else {
//        for (int i = 0; i < driV.size(); i++) {
//            outf << ((Driver*)driV[i])->returnStringInfo() << endl;
//
//        }
//    }
//    outf.close();
//}
//
//void Command::deleteEmployee(int ind) {
//    delete empV[ind];
//    empV.erase(empV.begin() + ind);
//    writeEmployeeFile();
//}
//
//void Command::deleteCustomer(int ind) {
//    delete cstV[ind];
//    cstV.erase(cstV.begin() + ind);
//    writeCustomerFile();
//}
//
//void Command::deleteDriver(int ind) {
//    delete driV[ind];
//    driV.erase(driV.begin() + ind);
//    writeDriverFile();
//}
//
//void Command::addEmployee() {
//    ofstream outf(EmployeeFile, ios::app);
//    if (!outf)
//    {
//        throw ("Error: Employee.txt not found");
//
//    }
//    else {
//        
//        string firstNameTmp;
//        string lastNameTmp;
//        short ageTmp;
//        short starsTmp = NULL;
//
//        cout << "Enter first name : ";
//        cin >> firstNameTmp;
//        cout << "Enter last name : ";
//        cin >> lastNameTmp;
//        cout << "Enter age : ";
//        cin >> ageTmp;
//        Employee* tmp = new Employee(firstNameTmp, lastNameTmp, ageTmp, starsTmp);
//       /* tmp.addEmployee(firstNameTmp, lastNameTmp, ageTmp, starsTmp);*/
//        empV.push_back(tmp);
//
//        outf << ((Employee*)empV[empV.size()-1])->returnStringInfo() << endl;
//
//    }
//    outf.close();
//   
//}
//
//void Command::addCustomer() {
//    ofstream outf(CustomerFile, ios::app);
//    if (!outf)
//    {
//        throw ("Error: Customer.txt not found");
//    }
//    else {
//        
//        string firstNameTmp;
//        string lastNameTmp;
//        short ageTmp;
//        string addressTmp;
//        short bonusTmp = NULL;
//
//        cout << "Enter first name : ";
//        cin >> firstNameTmp;
//        cout << "Enter last name : ";
//        cin >> lastNameTmp;
//        cout << "Enter age : ";
//        cin >> ageTmp;
//        cout << "Enter address : ";
//        cin >> addressTmp;
//
//        Customer* tmp = new Customer(firstNameTmp, lastNameTmp, ageTmp, addressTmp, bonusTmp);
//        /*tmp.addCustomer(firstNameTmp, lastNameTmp, ageTmp, addressTmp, bonusTmp);*/
//        cstV.push_back(tmp);
//
//        outf << ((Customer*)cstV[cstV.size() - 1])->returnStringInfo() << endl;
//    }
//    outf.close();
//
//}
//
//void Command::addDriver() {
//    ofstream outf(DriverFile, ios::app);
//    if (!outf)
//    {
//        throw ("Error: Driver.txt not found");
//
//    }
//    else {
//
//        string firstNameTmp;
//        string lastNameTmp;
//        short ageTmp;
//        short starsTmp = NULL;
//        string car;
//
//        cout << "Enter first name : ";
//        cin >> firstNameTmp;
//        cout << "Enter last name : ";
//        cin >> lastNameTmp;
//        cout << "Enter age : ";
//        cin >> ageTmp;
//        cout << "Enter car : ";
//        cin >> car;
//        Driver* tmp = new Driver(firstNameTmp, lastNameTmp, ageTmp, starsTmp, car);
//        driV.push_back(tmp);
//
//        outf << ((Driver*)driV[driV.size() - 1])->returnStringInfo() << endl;
//
//    }
//    outf.close();
//
//}
//
//void Command::analyse() {
//    system("CLS");
//    int max = ((Employee*)empV[0])->stars;
//    int index = 0;
//    for (int i = 0; i < empV.size(); i++) {
//        if (((Employee*)empV[i])->stars > max) {
//            max = ((Employee*)empV[i])->stars;
//            index = i;
//        }
//    }
//
//    cout << "\t\t\tTop Employee : \n\n";
//    ((Employee*)empV[index])->showInfo();
//
//    system("Pause");
//}