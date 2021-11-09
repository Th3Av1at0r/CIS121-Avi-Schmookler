/*

Output Commands
Avi Schmookler
9/22/2021

*/
using namespace std;
#include <iostream>
#include <iomanip>
#include <string>

// aquires the number of grades the user wants to enter
int get_number_of_grades(string print) {
    int number_of_grades = 0;
    cout << print;
    cin >> number_of_grades;

    return number_of_grades;
}

// gets the total grades and the average from that
double get_average_grade(int number_of_grades, string print) {
    int counter = 0;
    double total = 0.0;
    double grade = 0.0;
    double average = 0.0;
    while (counter < number_of_grades) {
        cout << print;
        cin >> grade;
        total = total + grade;
        counter += 1;
    }
    average = (total / number_of_grades);

    return average;
}

// gets the total grade at the percentage marks
double calculate_total_grade(double lab_grades, double exam_grades) {
    double total = 0.0;
    total = (lab_grades * .6) + (exam_grades * .4);

    return total;
}

// corrilates the total grade to a letter grade
char get_letter_grade(double total) {
    char letter_grade = 'A';
    if (total >= 90.0) {
        return letter_grade;
    }
    else if (total >= 80.0) {
        letter_grade = 'B';
        return letter_grade;
    }
    else if (total >= 70.0) {
        letter_grade = 'C';
        return letter_grade;
    }
    else if (total >= 60.0) {
        letter_grade = 'D';
        return letter_grade;
    }
    else if (total >= 50.0) {
        letter_grade = 'F';
        return letter_grade;
    }
}

// displays the result
void display_results(double total, char letter_grade) {
    cout << "The total grade is " << total << " which is a(n) " << letter_grade;
}

// initializes main
int main()
{
    system("color 0a");
    cout << "\tAvi Schmookler\n\tDate: 9/22/2021" << endl;
    cout << setw(19) << "Lab#: N/A\n\t";
    cout << "\"Project_15-Grade_Book_With_Percentage\"\n\tObjectives: Make a grade book that accounts for different types of assignments.\n\n";

    // initializes variables
    int number_of_lab_grades = 0;
    int number_of_exam_grades = 0;
    double lab_grades_average = 0.0;
    double exam_grades_average = 0.0;
    double total_grade = 0.0;
    char letter_grade = 'A';
    double largest_possible_grade = 0.0;

    // calls functions
    number_of_lab_grades = get_number_of_grades("\nPlease enter the number of lab grades you want to enter.\n");
    number_of_exam_grades = get_number_of_grades("\nPlease enter the number of exam grades you want to enter.\n");
    lab_grades_average = get_average_grade(number_of_lab_grades, "\nPlease enter a lab grade\n");
    exam_grades_average = get_average_grade(number_of_exam_grades, "\nPlease enter an exam grade\n");
    total_grade = calculate_total_grade(lab_grades_average, exam_grades_average);
    letter_grade = get_letter_grade(total_grade);
    display_results(total_grade, letter_grade);

    return 0;
}