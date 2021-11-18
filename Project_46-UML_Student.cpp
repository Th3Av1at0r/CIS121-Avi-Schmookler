/*

Output Commands
Avi Schmookler
11/17/2021

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
#include "Project_46-UML_Student.h"

account info;
double deposit;
double withdraw;

void display()
{
    cout << "\nInfo     : 1";
    cout << "\nAproval  : 2";
    cout << "\nQuit     : 3\n";
}

int main()
{
    system("color 0a");
    cout << "\tAvi Schmookler\n\tDate: 11/17/2021" << endl;
    cout << setw(19) << "Lab#: N/A\n\t";
    cout << "\"Project_44-UML_Student\"\n\tObjectives: Create both the .h and .cpp for the UML Diagram\n\n";

    int choice = 1;

    // quits if 3
    while (choice != 3) {
        display();
        cin >> choice;
        // shows GPA if 1
        if (choice == 1) {
            cout << "student: " << info.get_name() << "\n";
            cout << "GPA: " << fixed << setprecision(2) << info.get_GPA() << "\n";
        }
        // deposits if 2
        if (choice == 2) {
            if (info.aproval(info.get_GPA()) == true) {
                cout << "Student is APPROVED.";
            }
            else {
                cout << "Student is NOT APPROVED.";
            }
        }
    }

    return 0;
}