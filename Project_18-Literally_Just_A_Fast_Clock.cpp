/*

Output Commands
Avi Schmookler
9/26/2021

*/
using namespace std;
#include <iostream>
#include <iomanip>
#include <string>
#include <windows.h>

// prints the clock every second
void print_clock(int hours, int minutes, int seconds) {
    for (hours = 0; hours <= 23; hours++) {
        for (minutes = 0; minutes <= 59; minutes++) {
            for (seconds = 0; seconds <= 59; seconds++) {
                cout << "\r" << hours << " : " << minutes << " : " << seconds << " ";
                if (seconds < 10 && minutes < 1 && hours < 1)
                {
                    Sleep(1000);
                }
                if (seconds > 10 && minutes <= 59 && hours < 1)
                {
                    Sleep(10);
                }
                if (hours >= 1)
                {
                    Sleep(0);
                }
            }
        }
    }
}

// initializes main
int main()
{
    system("color 0a");
    cout << "\tAvi Schmookler\n\tDate: 9/26/2021" << endl;
    cout << setw(19) << "Lab#: N/A\n\t";
    cout << "\"Project18-Literally_Just_A_Fast_Clock\"\n\tObjectives: Create a clock that is fast\n\n";

    // initializes variables
    int hours = 0;
    int minutes = 0;
    int seconds = 0;

    // calls the print function
    print_clock(hours, minutes, seconds);

    return 0;
}