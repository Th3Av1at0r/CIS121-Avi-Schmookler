/*

Output Commands
Avi Schmookler
9/15/2021

*/
using namespace std;
#include <iostream>
#include <iomanip>
#include <string>

// aquires the three numbers
double get_number(string place) {
    double number;
    cout << "Please enter the " << place << " number.\n";
    cin >> number;

    return number;
}

// tests for largest number
void get_largest_number(double number_a, double number_b, double number_c) {
    if (number_a > number_b && number_a > number_c) {
        cout << number_a << " is the largest number.\n";
    }
    else if (number_b > number_a && number_b > number_c) {
        cout << number_b << " is the largest number.\n";
    }
    else if (number_c > number_a && number_c > number_b) {
        cout << number_c << " is the largest number.\n";
    }
    else {
        cout << "Error 1";
    }
}

// tests for middle number
void get_middle_number(double number_a, double number_b, double number_c) {
    if (number_a < number_b && number_a > number_c or number_a < number_c && number_a > number_b) {
        cout << number_a << " is the middle number.\n";
    }
    else if (number_b < number_a && number_b > number_c or number_b < number_c && number_b > number_a) {
        cout << number_b << " is the middle number.\n";
    }
    else if (number_c < number_b && number_c > number_a or number_c < number_a && number_c > number_b) {
        cout << number_c << " is the middle number.\n";
    }
    else {
        cout << "Error 2";
    }
}

// tests for smallest number
void get_smallest_number(double number_a, double number_b, double number_c) {
    if (number_a < number_b == true && number_a < number_c == true) {
        cout << number_b << " is the smallest number.";
    }
    else if (number_b < number_a == true && number_b < number_c == true) {
        cout << number_b << " is the smallest number.";
    }
    else if (number_c < number_b == true && number_c < number_a == true) {
        cout << number_c << " is the smallest number.";
    }
    else {
        cout << "Error 3";
    }
}

// initializes main
int main()
{
    system("color 0a");
    cout << "\tAvi Schmookler\n\tDate: 9/15/2021" << endl;
    cout << setw(19) << "Lab#: N/A\n\t";
    cout << "\"Large_Middle_Small\"\n\tObjectives: Make 3 different functions that find the largest middle and smalleds numbers inputed\n\n";

    // initializes variables
    double number_a = 0;
    double number_b = 0;
    double number_c = 0;
    
    // calculates the different places for the numbers
    number_a = get_number("first");
    number_b = get_number("second");
    number_c = get_number("third");
    get_largest_number(number_a, number_b, number_c);
    get_middle_number(number_a, number_b, number_c);
    get_smallest_number(number_a, number_b, number_c);


    return 0;
}