/*

Output Commands
Avi Schmookler
9/22/2021

*/
using namespace std;
#include <iostream>
#include <iomanip>
#include <string>

// gets start and range
int get_value(string print) {
    int value = 0;
    cout << print;
    cin >> value;

    return value;
}
// starts start as an odd number
int calculate_start(int input) {
    int start = 0;
    if (input % 2 == 0) {
        start = input + 1;

        return start;
    }
    else
        return input;
}
// ends range as an odd number
int calculate_range(int input) {
    int range = 0;
    if (input % 2 == 0) {
        range = input - 1;

        return range;
    }
    else
        return input;
}
// displays results
void display_results(int start, int range) {
    int i = 0;
    for (i = start; i <= range; i = i + 2) {
        cout << i << ", ";
    }
}

// initializes main
int main()
{
    system("color 0a");
    cout << "\tAvi Schmookler\n\tDate: 9/22/2021" << endl;
    cout << setw(19) << "Lab#: N/A\n\t";
    cout << "\"Project_14-Odd_Range\"\n\tObjectives: Ask for a start and range and list the odd numbers between them.\n\n";

    // initilaizes variables
    int start_input = 0;
    int range_input = 0;
    int start = 0;
    int range = 0;

    // calls functions
    start_input = get_value("\nPlease enter the starting point.\n");
    range_input = get_value("\nPlease enter the range\n");
    start = calculate_start(start_input);
    range = calculate_range(range_input);
    display_results(start, range);



    return 0;
}