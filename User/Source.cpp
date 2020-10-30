#include <iostream>
#include "menu.h"
#include "commandtmp.h"
using namespace std;


void menu() {
    Menu prog;
    Command com;

    short userInput = NULL;
    while (true) {
        prog.showMenu();
        cin >> userInput;
        switch (userInput)
        {
        case 1: {
            if (com.customerRepository.data.size() == 0) {
                system("CLS");
                cout << "No Customer" << endl;
                system("Pause");
            }
            else {
                com.showCustomer();
                system("Pause");
            }
            break;

        }
        case 2: {
            if (com.employeeRepository.data.size() == 0) {
                system("CLS");
                cout << "No Employee" << endl;
                system("Pause");
            }
            else {
                com.showEmployee();
                system("Pause");
            }
            break;
        }
        case 0: {
            exit(1);
            break;
        }
        case 3: {
            com.analyse();
            break;
        }
        case 5: {
            if (com.driverRepository.data.size() == 0) {
                system("CLS");
                cout << "No Driver" << endl;
                system("Pause");
            }
            else {
                com.showDriver();
                system("Pause");
            }
            break;
        }
        default:
            cerr << "Error: wrong operation" << endl;
            system("Pause");
            break;
        }
    }
}



int main()
{
    try {

        menu();

    }
    catch (const char* err) {
        cerr << err << endl;
    }

}

