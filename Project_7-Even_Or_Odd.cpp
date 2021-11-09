/*

Output Commands
Avi Schmookler
9/7/2021

*/
using namespace std;
#include <iostream>
#include <iomanip>
#include <string>

// aquires the first and second number from input
int get_number() {
    int number = 0;
    cout << "Please enter a number.\n";
    cin >> number;

    return number;
}

// calculates if the first and second numbers are even or odd using if else statements
string calculate_even_or_odd(int number) {
    string even_or_odd = "A";
    if (number % 2 == 0) {
        even_or_odd = "even";
    }
    else {
        even_or_odd = "odd";
    }
    return even_or_odd;
}

// calculates if the first and second numbers are positive or negative using if else statements
string calculate_positive_or_negative(int number) {
    string positive_or_negative = "A";
    if (number < 0) {
        positive_or_negative = "is negative";
    }
    else if (number > 0) {
        positive_or_negative = "is positive";
    }
    else {
        positive_or_negative = "is zero";
    }
    return positive_or_negative;
}

// calculates if the first and second numbers are greater than or less than or equal to eachother using if else statements
string calculate_greater_than_or_less_than(int number_1, int number_2) {
    string greater_than_or_less_than = "A";
    if (number_1 > number_2) {
        greater_than_or_less_than = "greater than ";
    }
    else if (number_1 < number_2) {
        greater_than_or_less_than = "less than ";
    }
    else {
        greater_than_or_less_than = "equal to ";
    }

    return greater_than_or_less_than;
}

// calculates if the first and second numbers are divisible by eachother using if else statements
string caluclate_divisible(int number_1, int number_2) {
    string first_number = to_string(number_1);
    string second_number = to_string(number_2);
    string divisible = "A";
    if (number_1 > number_2) {
        if (number_1 % number_2 == 0) {
            divisible = first_number + " is divisible by " + second_number;
        }
        else {
            divisible = "neither are divisible by eachother";
        }
    }
    else if (number_1 < number_2) {
        if (number_2 % number_1 == 0) {
            divisible = second_number + " is divisible by " + first_number;
        }
        else {
            divisible = "neither are divisible by eachother";
        }
    }
    else {
        divisible = "They are the same number ergo they are divisible by eachother.";
    }
    return divisible;
}

// displays the results of all functions
void display_result(string even_or_odd_1, string even_or_odd_2, int number_1, int number_2,
    string positive_or_negative_1, string positive_or_negative_2, string greater_than_or_less_than, string divisible) {
    cout << number_1 <<" is " << even_or_odd_1 << ", and " << positive_or_negative_1 << ".\n" << number_2 
        << " is " << even_or_odd_2 << ", and " << positive_or_negative_2 << ".\n" << number_1 << " is " 
        << greater_than_or_less_than << number_2 << "\n" << divisible;
}

int main()
{
    system("color 0a");
    cout << "\tAvi Schmookler\n\tDate: 9/7/2021" << endl;
    cout << setw(19) << "Lab#: N/A\n\t";
    cout << "\"Odd Or Even\"\n\tobjectives: Make a program that can diferentiate between odd and even,"
        << "positive and negative, size of the number, and if they are divisible by eachother\n\n";

    // initializes all variables
    int number_1 = 0;
    int number_2 = 0;
    string even_or_odd_1 = "A";
    string even_or_odd_2 = "A";
    string positive_or_negative_1 = "A";
    string positive_or_negative_2 = "A";
    string greater_than_or_less_than = "A";
    string divisible = "A";

    // initializes all functions
    number_1 = get_number();
    number_2 = get_number();
    even_or_odd_1 = calculate_even_or_odd(number_1);
    even_or_odd_2 = calculate_even_or_odd(number_2);
    positive_or_negative_1 = calculate_positive_or_negative(number_1);
    positive_or_negative_2 = calculate_positive_or_negative(number_2);
    greater_than_or_less_than = calculate_greater_than_or_less_than(number_1, number_2);
    divisible = caluclate_divisible(number_1, number_2);
    display_result(even_or_odd_1, even_or_odd_2, number_1, number_2, positive_or_negative_1,
        positive_or_negative_2, greater_than_or_less_than, divisible);

    return 0;
}