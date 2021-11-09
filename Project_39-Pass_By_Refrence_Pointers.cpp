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

void increment(int*);

//main
int main()
{
    system("color 0a");
    cout << "\tAvi Schmookler\n\tDate: 11/3/2021" << endl;
    cout << setw(19) << "Lab#: N/A\n\t";
    cout << "\"Project_39-Pass_By_Refrence_pointers\"\n\tObjectives: How can a pointer be used to create a Pass-by-Reference (with a Pointer)?\n\n";

    // initialization
    int number, incramnet;
    // asks for numbers
    cout << "Enter a number and how many times you want it to be increment.\n";
    cin >> number >> incramnet;
    // incraments untill i == incrament
    for (int i = 0; i < incramnet; i++)
    {
        increment(&number);
    }

    return 0;
}
// prints in incramnets of 1
void increment(int* number_1)
{
    *number_1 -= -1;
    static int turn = 0;
    turn++;
    cout << "Increment " << turn << ": ";
    cout << *number_1 << "\n";
}