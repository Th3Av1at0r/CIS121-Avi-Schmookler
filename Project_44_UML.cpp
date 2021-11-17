/*

Output Commands
Avi Schmookler
11/10/2021

*/
using namespace std;
#include <iostream>
#include <iomanip>
#include <string>
#include <random>
#include <vector>
#include <Windows.h>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <fstream>
#include <stdlib.h>
#include <chrono>
#include <thread>
#include "Project_44_UML.h"

account info;
double deposit;
double withdraw;

void display() 
{
    cout << "\nBalance  : 1\n";
    cout << "Deposit  : 2\n";
    cout << "Withdraw : 3\n";
    cout << "Quit     : 4\n";
}

int main()
{
    system("color 0a");
    cout << "\tAvi Schmookler\n\tDate: 11/10/2021" << endl;
    cout << setw(19) << "Lab#: N/A\n\t";
    cout << "\"Project_44-UML\"\n\tObjectives: Write the Program for both the .h and the .cpp for the UML diagram Account\n\n";

    int choice = 1;

    while (choice != 4) {
        display();
        cin >> choice;
        if (choice == 1) {
            cout << "Account Owner: " << info.get_name() << "\n";
            cout << "Account ID: " << info.get_id() << "\n";
            cout << "Balance: $" << fixed << setprecision(2) << info.get_balance() << "\n";
        }
        if (choice == 2) {
            cout << "Deposit Amount: ";
            cin >> deposit;
            info.deposit(deposit);
            cout << "\nNew Balance: $" << fixed << setprecision(2) << info.get_balance() << "\n";
        }
        if (choice == 3) {
            cout << "Withdrawl Amount: ";
            cin >> withdraw;
            while (withdraw > info.get_balance()) {
                cout << "You cannot withdraw more than you have.\nEnter new amount: ";
                cin >> withdraw;
            }
            info.withdraw(withdraw);
            cout << "\nNew Balance: $" << fixed << setprecision(2) << info.get_balance() << "\n";
        }
    }
    return 0;
}
