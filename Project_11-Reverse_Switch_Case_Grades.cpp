/*

Output Commands
Avi Schmookler
9/15/2021

*/
using namespace std;
#include <iostream>
#include <iomanip>
#include <string>

// initializes the function
int get_number_of_grades() {
    int number_of_grades = 0;
    cout << "\nHow many grades would you like to enter?\n";
    cin >> number_of_grades;

    return number_of_grades;
}

// initializes the function
int get_number_grade() {
    double number_grade = 0.0;
    bool true_false = 0;
    // uses a boolean to form a loop that idiot proofs the code
    while (true_false == false) {
        cout << "\nPlease enter a grade\n";
        cin >> number_grade;
        if (number_grade <= 100) {
            if (number_grade >= 1) {
                true_false = true;
                return number_grade;
            }
            else {
                cout << "That is not a valid grade.";
                true_false = false;
                continue;
            }
        }
        else {
            cout << "That is not a valid grade.";
            true_false = false;
            continue;
        }
    }

}

// initializes the function
int get_letter_grade_qualifier(double number_grade) {
    int letter_grade_qualifier = 0;
    // checks what range the grade is in
    if (number_grade >= 0.0 && number_grade < 60.0) {
        letter_grade_qualifier = 1;
        return letter_grade_qualifier;
    }
    else if (number_grade >= 60.0 && number_grade < 70.0) {
        letter_grade_qualifier = 2;
        return letter_grade_qualifier;
    }
    else if (number_grade >= 70.0 && number_grade < 80.0) {
        letter_grade_qualifier = 3;
        return letter_grade_qualifier;
    }
    else if (number_grade >= 80.0 && number_grade < 90.0) {
        letter_grade_qualifier = 4;
        return letter_grade_qualifier;
    }
    else if (number_grade >= 90.0) {
        letter_grade_qualifier = 5;
        return letter_grade_qualifier;
    }
    // creates an error default
    else {
        cout << "Error 1";
        exit(0);
    }
}

// initializes the function
double get_average_number_grade(double total, int number_of_grades) {
    double average_number_grade = 0.0;
    average_number_grade = total / number_of_grades;
    string average = to_string(average_number_grade);
    cout << "\nThe average grade is " << average << "\n";

    return average_number_grade;
}

// initializes the function
void get_letter_grade(int letter_grade_qualifier) {
    switch (letter_grade_qualifier) {                                               // this is the variable that the switch case will use
    case 1:                                                                         // this is one of the possible variables that the qualifier could be
        cout << "Grade: F";
        break;
    case 2:
        cout << "Grade: D";
        break;
    case 3:
        cout << "Grade: C";
        break;
    case 4:
        cout << "Grade: B";
        break;
    case 5:
        cout << "Grade: A";
        break;
    }
}

// initializes the main function
int main()
{
    system("color 0a");
    cout << "\tAvi Schmookler\n\tDate: 9/15/2021" << endl;
    cout << setw(19) << "Lab#: N/A\n\t";
    cout << "\"Project_11-Reverse_Switch_Case_Grades\"\n\tObjectives: create a program that accepts number grades and produces letter grades.\n";

    // initializes the different variables
    double number_grade = 0.0;
    int tracker = 0;
    int letter_grade_qualifier = 0;
    int number_of_grades = 0;
    double total = 0.0;
    double average_number_grade = 0.0;
    int average_letter_grade_qualifier = 0;
    string letter_grade = "A";
    string average_letter_grade = "A";

    // asks the number of grades you want to enter
    number_of_grades = get_number_of_grades();
    // creates a loop that continues untill the ammount of grades are entered
    while (tracker != number_of_grades) {
        // enter a grade here
        number_grade = get_number_grade();
        // qualifies the grade
        letter_grade_qualifier = get_letter_grade_qualifier(number_grade);
        // uses switch case to get the letter grade
        get_letter_grade(letter_grade_qualifier);

        // creates a total
        total = total + number_grade;
        // tracks the ammount of grades entered
        tracker += 1;
    }
    // does the same thing as earlier but for averages
    average_number_grade = get_average_number_grade(total, number_of_grades);
    average_letter_grade_qualifier = get_letter_grade_qualifier(average_number_grade);
    get_letter_grade(average_letter_grade_qualifier);

    return 0;
}