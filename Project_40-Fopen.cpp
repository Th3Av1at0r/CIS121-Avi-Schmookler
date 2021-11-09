/*

Output Commands
Avi Schmookler
11/3/2021

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


int main()
{
    system("color 0a");
    cout << "\tAvi Schmookler\n\tDate: 11/3/2021" << endl;
    cout << setw(19) << "Lab#: N/A\n\t";
    cout << "\"Project_40-Fopen\"\n\tObjectives: Using the Fopen( ) and File Pointers,"
        << "Create a program that will prompt the user to enter namesand write them to a names.txt File and"
        << "Add to Q3 and read the names that have been written to names.txt\n\n";

    fstream file;
    string name = "A";
    int number_of_names = 0;
    int counter = 0;

    cout << "How many names do you want to enter?\n";
    cin >> number_of_names;

    while (counter < number_of_names) {
        cout << "\nPlease enter a name.\n";
        cin >> name;
        file.open("names.txt", std::ios_base::app | std::ios_base::in);
        if (file.is_open())
            file << name << "\n";
        file.close();

        counter++;
    }

    file.open("names.txt", std::ios_base::app | std::ios_base::in);
    cout << "\nContent of log:-\n" << file.rdbuf();
    file.close();

    return 0;
}