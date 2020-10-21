#include <iostream>
#include "menu.h"

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
        case 4: {
            prog.showFirstMenuSetting();
            short i = NULL;
            while (true) {
                cin >> i;
                if (i == 0) {
                    menu();
                    break;
                }
                switch (i)
                {
                case 1: {
                    short tmp = NULL;
                    while (true) {
                        prog.showCustomerSetting();
                        cin >> tmp;
                        if (tmp == 0) {
                            prog.showFirstMenuSetting();
                            break;
                        }
                        switch (tmp)
                        {
                        case 1: {
                            system("CLS");
                            com.addCustomer();
                            cout << "Customer Added Successfully" << endl;
                            system("Pause");
                            break;
                        }
                        case 2: {
                            com.showCustomer();
                            cout << "Select Customer you want delete : ";
                            short selCustomer;
                            cin >> selCustomer;
                            com.deleteCustomer(selCustomer - 1);
                            cout << "Customer Deleted Successfully" << endl;
                            system("Pause");
                            break;
                        }
                        case 3: {
                            com.showCustomer();
                            cout << "Select Customer you want edit : ";
                            short selCustomer;
                            cin >> selCustomer;
                            ((Customer*)com.customerRepository.data[selCustomer - 1])->setting();
                            com.customerRepository.WriteToStorage();
                            cout << "Customer Edited Successfully" << endl;
                            system("Pause");
                            break;

                        }
                        case 4: {
                            com.showCustomer();
                            cout << "Select Customer you want edit address : ";
                            short selCustomer;
                            cin >> selCustomer;
                            ((Customer*)com.customerRepository.data[selCustomer - 1])->changeAddress();
                            com.customerRepository.WriteToStorage();
                            cout << "Customer Edited Successfully" << endl;
                            system("Pause");
                            break;
                        }
                        case 5: {
                            com.showCustomer();
                            cout << "Select Customer you want add bonus : ";
                            short selCustomer;
                            cin >> selCustomer;
                            ((Customer*)com.customerRepository.data[selCustomer - 1])->addBonus();
                            com.customerRepository.WriteToStorage();
                            cout << "Bonus Added Successfully" << endl;
                            system("Pause");
                            break;
                        }
                        default:
                            cerr << "Error: wrong operation" << endl;
                            system("Pause");
                            break;
                        }
                    }
                    break;
                }
                case 2: {

                    short tmp = NULL;
                    while (true) {
                        prog.showEmployeeSetting();
                        cin >> tmp;
                        if (tmp == 0) {
                            prog.showFirstMenuSetting();
                            break;
                        }
                        switch (tmp)
                        {
                        case 1: {
                            system("CLS");
                            com.addEmployee();
                            cout << "Employee Added Successfully" << endl;
                            system("Pause");
                            break;
                        }
                        case 2: {
                            com.showEmployee();
                            cout << "Select Employee you want delete : ";
                            short selCustomer;
                            cin >> selCustomer;
                            com.deleteEmployee(selCustomer - 1);
                            cout << "Employee Deleted Successfully" << endl;
                            system("Pause");
                            break;
                        }
                        case 3: {
                            com.showEmployee();
                            cout << "Select Employee you want edit : ";
                            short selCustomer;
                            cin >> selCustomer;
                            ((Employee*)com.employeeRepository.data[selCustomer - 1])->setting();
                            com.employeeRepository.WriteToStorage();
                            cout << "Employee Edited Successfully" << endl;
                            system("Pause");
                            break;

                        }
                        case 4: {
                            com.showEmployee();
                            cout << "Select Employee you want edit address : ";
                            short selCustomer;
                            cin >> selCustomer;
                            ((Employee*)com.employeeRepository.data[selCustomer - 1])->setRating();
                            com.employeeRepository.WriteToStorage();
                            cout << "Rating Successfully" << endl;
                            system("Pause");
                            break;
                        }
                        default:
                            cerr << "Error: wrong operation" << endl;
                            system("Pause");
                            break;
                        }
                    }

                    break;
                }
                case 3: {

                    short tmp = NULL;
                    while (true) {
                        prog.showDriverSetting();
                        cin >> tmp;
                        if (tmp == 0) {
                            prog.showFirstMenuSetting();
                            break;
                        }
                        switch (tmp)
                        {
                        case 1: {
                            system("CLS");
                            com.addDriver();
                            cout << "Driver Added Successfully" << endl;
                            system("Pause");
                            break;
                        }
                        case 2: {
                            com.showDriver();
                            cout << "Select Driver you want delete : ";
                            short selCustomer;
                            cin >> selCustomer;
                            com.deleteDriver(selCustomer - 1);
                            cout << "Driver Deleted Successfully" << endl;
                            system("Pause");
                            break;
                        }
                        case 3: {
                            com.showDriver();
                            cout << "Select Driver you want edit : ";
                            short selCustomer;
                            cin >> selCustomer;
                            ((Driver*)com.driverRepository.data[selCustomer - 1])->setting();
                            com.driverRepository.WriteToStorage();
                            cout << "Driver Edited Successfully" << endl;
                            system("Pause");
                            break;

                        }
                        case 4: {
                            com.showDriver();
                            cout << "Select Driver you want edit address : ";
                            short selCustomer;
                            cin >> selCustomer;
                            ((Driver*)com.driverRepository.data[selCustomer - 1])->setRating();
                            com.driverRepository.WriteToStorage();
                            cout << "Rating Successfully" << endl;
                            system("Pause");
                            break;
                        }
                        default:
                            cerr << "Error: wrong operation" << endl;
                            system("Pause");
                            break;
                        }
                    }

                    break;
                
                }
                default:
                    cerr << "Error: wrong operation" << endl;
                    system("Pause");
                    break;
                }
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
    catch(const char* err){
        cerr << err << endl;
    }

}

