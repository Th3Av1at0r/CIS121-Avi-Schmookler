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
#include "Coffee_Pasta.h"

account info;

int main()
{
    system("color 0a");
    cout << "\tAvi Schmookler\n\tDate: 11/22/2021" << endl;
    cout << setw(19) << "Lab#: N/A\n\t";
    cout << "\"Project_44-UML_Student\"\n\tObjectives: Create an example for a class Customer that has a private int age followed by a private string name\n\n";

    cout << "student: " << info.get_name() << "\n";
    cout << "age: " << fixed << setprecision(2) << info.get_age() << "\n";

    return 0;
}