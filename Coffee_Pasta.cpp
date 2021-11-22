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

string name[3] = { "Capulet", "Monty", "Rose" };

int main()
{
    system("color 0a");
    cout << "\tAvi Schmookler\n\tDate: 11/22/2021" << endl;
    cout << setw(19) << "Lab#: N/A\n\t";
    cout << "\"Exam_3\"\n\tObjectives: Display each name in the vector above Prompt the user to enter 1, 2 or 3 and depending upon the selection, display the letters in that name \n\n";

    int choice = 0;
    string name_var = "A";

    for (int i = 0; i < 3; i++) {
        cout << i+1 << ": " << name[i] << "\n";
    }
    cout << "Which letters would you like to see?\n";
    while (true == true) {
        cin >> choice;
        if (0 < choice & choice < 4) {
            break;
        }
        else {
            cout << "That is not a valid number, please enter another.\n";
            continue;
        }
    }
    if (choice == 1) {
        name_var = name[choice - 1];
    }
    else if (choice == 2) {
        name_var = name[choice - 1];
    }
    else if (choice == 3) {
        name_var = name[choice - 1];
    }
    else {
        cout << "Error 1";
    }

    for (int i = 0; i < name_var.size(); i++) {
        cout << name_var[i] << "\n";
    }

    return 0;
}