/*

Output Commands
Avi Schmookler
10/6/2021

*/
using namespace std;
#include <iostream>
#include <iomanip>
#include <string>
#include <random>
#include <vector>

void display_result() {
    int scores[] = { 0,1,2,3,4,5 };
    for (int i : scores) {
        cout << i << "\n";
    }
}

int main()
{
    system("color 0a");
    cout << "\tAvi Schmookler\n\tDate: 10/6/2021" << endl;
    cout << setw(19) << "Lab#: N/A\n\t";
    cout << "\"Project_22-Ranged_Loops\"\n\tResearch Ranged Loops and cite your sources"
        << "Create a program that will initialize an integer arrayand then using a ranged Loop, display the contents\n\n";

    display_result();

    return 0;
}