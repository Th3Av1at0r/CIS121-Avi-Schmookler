/*

Output Commands
Avi Schmookler
10/20/2021

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

// main
int main()
{
    //header
    system("color 0a");
    cout << "\tAvi Schmookler\n\tDate: 10/20/2021" << endl;
    cout << setw(19) << "Lab#: N/A\n\t";
    cout << "\"Title\"\n\tObjectives: Create an Example that will prompt the user for 3 names and write those names to a data file.\n\n";

    // create variables
    ofstream names;
    string prompt = "Enter a name:";
    string name;

    // opens file
    names.open("names.txt", ios::out);

    // asks for 3 names
    for (int var = 0; var < 3; var++)
    {
        cerr << prompt << "\n";
        cin >> name;
    }
    // close file
    names.close();

    return 0;
}