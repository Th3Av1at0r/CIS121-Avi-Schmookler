/*

Output Commands
Avi Schmookler
9/1/2021

*/
using namespace std;
#include <iostream>
#include <iomanip>
#include <string>

double get_fees() {
    double fees = 0.0;
    int nof = 0;
    int tracker = 0;
    double fee = 0.0;
    cout << "\nHow many fees do you want to enter?\n";
    cin >> nof;
    // while the variable is not equal to the the other variable it loops
    while (tracker != nof) {
        cout << "\nPlease enter a fee.\n";
        cin >> fee;
        fees = fees + fee;
        tracker += 1;
    }

    return fees;
}

double get_expenses() {
    double expenses = 0.0;
    int noe = 0;
    int tracker = 0;
    double expense = 0.0;
    cout << "\nHow many expenses do you want to enter?\n";
    cin >> noe;
    while (tracker != noe) {
        cout << "\nPlease enter an expense.\n";
        cin >> expense;
        expenses = expenses + expense;
        tracker += 1;
    }

    return expenses;
}

double get_miles() {
    double miles = 0.0;
    cout << "\nHow many miles?\n";
    cin >> miles;

    return miles * 0.87;
}

double get_total(double fees, double expenses, double miles) {
    double total = 0.0;
    //calculates the total expenses out of the $150
    total = fees + expenses + miles - 150;

    return total;
}

void display_results(double total) {
    if (-total > 0) {
        cout << "\nYou have $" << -total << " left.\n";
    }
    else if (-total < 0) {
        cout << "\nYou are $" << -total << " in debt, congrats.\n";
    }
    else {
        cout << "\nYour total is $" << -total << " exactally, congrats, you're broke.\n";
    }
}

int main()
{
    system("color 0a");
    cout << "\tAvi Schmookler\n\t9/1/2021" << endl;
    cout << setw(18) << "Lab#:N/A\n\t";
    cout << "\"Expense report\"\n\tcalculate the total expenses";
    
    double fees = 0.0;
    double expenses = 0.0;
    double miles = 0.0;
    double total = 0.0;

    fees = get_fees();
    expenses = get_expenses();
    miles = get_miles();
    total = get_total(fees, expenses, miles);
    display_results(total);

    return 0;
}