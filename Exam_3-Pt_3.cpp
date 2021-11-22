/*

Output Commands
Avi Schmookler
11/22/2021

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
#include "Exam_3-Pt_3.h"

account info;

void display()
{
    cout << "\nInfo      : 1";
    cout << "\nAdd Class : 2";
    cout << "\nQuit      : 3\n";
}

int main()
{
    system("color 0a");
    cout << "\tAvi Schmookler\n\tDate: 11/22/2021" << endl;
    cout << setw(19) << "Lab#: N/A\n\t";
    cout << "\"Project_44-UML_Student\"\n\tObjectives: Create an example for a class Customer that has a private int id followed by a private string name\n\n";

    int choice = 0;
    string class_choice = "A";
 
    while (choice != 3) {
        display();
        cin >> choice;
        if (choice == 1) {
            cout << "student: " << info.get_name() << "\n";
            cout << "id: " << fixed << setprecision(2) << info.get_id() << "\n";
            cout << info.class_list;
        }
        if (choice == 2) {
            cout << "please enter a class you would like to add.\n";
            cin >> class_choice;
            info.class_list.append(class_choice);
        }
    }

    return 0;
}
