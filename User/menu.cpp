#include "menu.h"
#include <iostream>

using namespace std;

void Menu::showMenu() {
    system("CLS");
    cout << "\t\t\tWelcome to the MainMenu for User! \n" <<
        "\t\tSelect an option from the following: \n" <<
        "1.....Show Customers\n" <<
        "2.....Show Employee\n" <<
        "5.....Show Driver\n" <<
        "3.....Analyse\n" <<
        "0.....Close Program\n\n";

}
