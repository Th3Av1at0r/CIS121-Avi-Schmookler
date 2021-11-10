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
#include "Class_Space.h"


int main()
{
    system("color 0a");
    cout << "\tAvi Schmookler\n\tDate: 11/10/2021" << endl;
    cout << setw(19) << "Lab#: N/A\n\t";
    cout << "\"Project_43-Class_Space\"\n\tObjectives: Create the following example"
        << "Public name - 'YourMiddleNameCompany' Public #   - 12345 Private name - 'Your FirstNameOwner' Private #  - 54321"
        << " Create a Display( ) Method/Function that will display all Public variables Create a.cpp with a main() and call the Display()\n\n";

    names variable;

    cout << "\nPublic name: " << variable._name_1 << "\n";
    cout << "\nPublic number: " << variable._number_1 << "\n";
    cout << "\nPrivate name: " << variable.get_name() << "\n";
    cout << "\nPrivate number: " << variable.get_number() << "\n";

    variable.set_name_1("Timothy");
    variable.set_name_2("Drake");
    variable.set_number_1(14);
    variable.set_number_2(27);

    cout << "\nPublic name: " << variable._name_1 << "\n";
    cout << "\nPublic number: " << variable._number_1 << "\n";
    cout << "\nPrivate name: " << variable.get_name() << "\n";
    cout << "\nPrivate number: " << variable.get_number() << "\n";

    names myobj;

    return 0;
}
