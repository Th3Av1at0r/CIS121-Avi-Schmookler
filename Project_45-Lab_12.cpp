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
#include "Project_45-Lab_12.h"

account info;
double deposit;
double withdraw;

// displays your options
void display()
{
    cout << "\nBalance  : 1";
    cout << "\nDeposit  : 2";
    cout << "\nWithdraw : 3";
    cout << "\nQuit     : 4\n";
}

int main()
{
    system("color 0a");
    cout << "\tAvi Schmookler\n\tDate: 11/10/2021" << endl;
    cout << setw(19) << "Lab#: N/A\n\t";
    cout << "\"Project_45-Lab_12\"\n\tObjectives: In main( ) display all the defaults and then prompt the user to Deposit, Withdraw,  Balance or Quit."
        << "Repeat until quit.Modify each private Datatype and re - Display\n\n";

    int choice = 1;

    // quits if 4
    while (choice != 4) {
        display();
        cin >> choice;
        // shows balance if 1
        if (choice == 1) {
            cout << "Account Owner: " << info.get_name() << "\n";
            cout << "Account ID: " << info.get_id() << "\n";
            cout << "Balance: $" << fixed << setprecision(2) << info.get_balance() << "\n";
        }
        // deposits if 2
        if (choice == 2) {
            cout << "Deposit Amount: ";
            cin >> deposit;
            info.deposit(deposit);
            cout << "\nNew Balance: $" << fixed << setprecision(2) << info.get_balance() << "\n";
        }
        // withdrawls if 3
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