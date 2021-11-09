/*

Output Commands
Avi Schmookler
10/13/2021

*/
using namespace std;
#include <iostream>
#include <iomanip>
#include <string>
#include <random>
#include <vector>

void calculate_factorials(int number_of_factorials) {
    int counter = 0;
    while (counter < number_of_factorials) {
        int n;
        long double factorial = 1.0;

        cout << "\nEnter a positive integer: ";
        cin >> n;

        if (n < 0)
            cout << "Error! Factorial of a negative number doesn't exist.";
        else {
            for (int i = 1; i <= n; ++i) {
                factorial *= i;
            }
            cout << "Factorial of " << n << " = " << factorial << "\n";
            counter++;
        }
    }
}

int main()
{
    system("color 0a");
    cout << "\tAvi Schmookler\n\tDate: 10/13/2021" << endl;
    cout << setw(19) << "Lab#: N/A\n\t";
    cout << "\"Project_28-Recursion\"\n\tObjectives: Create a program that calculates the Factorials 0! - 10!\n\n";

    int number_of_factorials = 0;

    cout << "How many factorials do you want to find?\n";
    cin >> number_of_factorials;

    calculate_factorials(number_of_factorials);

    return 0;
}