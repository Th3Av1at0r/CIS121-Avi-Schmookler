/*

Output Commands
Avi Schmookler
9/8/2021

*/
using namespace std;
#include <iostream>
#include <iomanip>
#include <string>

int get_number_of_grades() {
    int number_of_grades = 0;
    cout << "\nHow many grades would you like to enter?\n";
    cin >> number_of_grades;

    return number_of_grades;
}

int get_number_grade() {
    double number_grade = 0.0;
    cout << "\nPlease enter a grade\n";
    cin >> number_grade;
    if (number_grade <= 100) {
        if (number_grade >= 1) {
            return number_grade;
        }
        else {
            cout << "That is not a valid grade, exiting code.";
            exit(0);
        }
    }
    else {
        cout << "That is not a valid grade, exiting code.";
        exit(0);
    }
}

string get_letter_grade(double number_grade) {
    string letter_grade = "A (passing grade)\n";
    if (number_grade >= 90.0) {
        cout << letter_grade;
        return letter_grade;
    }
    else if (number_grade >= 80.0) {
        letter_grade = "B (passing grade)\n";
        cout << letter_grade;
        return letter_grade;
    }
    else if (number_grade >= 70.0) {
        letter_grade = "C (passing grade)\n";
        cout << letter_grade;
        return letter_grade;
    }
    else if (number_grade >= 60.0) {
        letter_grade = "D (failing grade)\n";
        cout << letter_grade;
        return letter_grade;
    }
    else if (number_grade >= 50.0) {
        letter_grade = "F (failing grade)\n";
        cout << letter_grade;
        return letter_grade;
    }
}

double get_average_number_grade(double total, int number_of_grades) {
    double average_number_grade = 0.0;
    average_number_grade = total / number_of_grades;
    string average = to_string(average_number_grade);
    cout << "\nThe average grade is " << average << "\n";

    return average_number_grade;
}

int main()
{
    system("color 0a");
    cout << "\tAvi Schmookler\n\tDate: 9/8/2021" << endl;
    cout << setw(19) << "Lab#: N/A\n\t";
    cout << "\"Grades\"\n\tObjectives: Create a program that tells the user the letter grade based on the number grade.\n";

    int number_of_grades = 0;
    int tracker = 0;
    double number_grade = 0.0;
    string letter_grade = "A";
    double total = 0.0;
    double average_number_grade = 0.0;
    string average_letter_grade = "A";

    number_of_grades = get_number_of_grades();
    while (tracker != number_of_grades) {
        number_grade = get_number_grade();
        letter_grade = get_letter_grade(number_grade);

        total = total + number_grade;
        tracker += 1;
    }
    average_number_grade = get_average_number_grade(total, number_of_grades);
    average_letter_grade = get_letter_grade(average_number_grade);

    return 0;
}