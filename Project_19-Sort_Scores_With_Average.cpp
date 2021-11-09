/*

Output Commands
Avi Schmookler
9/26/2021

*/
using namespace std;
#include <iostream>
#include <iomanip>
#include <string>
#include <Windows.h>

// initializes the array 
double scores_array[5] = {0,0,0,0,0};

// gets the inputed scores
void get_scores() {
    double score = 0;
    int variable = 0;
    for (variable = 0; variable < 5; variable++) {
        cout << "Please enter a score.\n";
        cin >> score;
        scores_array[variable] = score;
    }
}

// sorts the scores 
void sort_scores() {
    int var_1 = 0;
    int var_2 = 0;
    double bank = 0.0;
    for (var_1 = 0; var_1 < 5; var_1++) {
        for (var_2 = 0; var_2 < 5; var_2++)
        {
            if (scores_array[var_2] < scores_array[var_2 + 1])
            {
                bank = scores_array[var_2];
                scores_array[var_2] = scores_array[var_2 + 1];
                scores_array[var_2 + 1] = bank;
            }
            else {
                continue;
            }
        }
    }

}

// calculates average
double get_average(double average) {
    int variable = 0;
    for (variable = 0; variable < 5; variable++) {
        average = average + scores_array[variable];
    }
    average = average / 5;

    return average;
}

// displays the results
void display_results(double average) {
    cout << "The scores in order of largest to smallest are " << scores_array[0] << ", " << scores_array[1] << ", "
        << scores_array[2] << ", " << scores_array[3] << ", " << scores_array[4] << ", and the average score is " << average;
}

// initializes main
int main()
{
    system("color 0a");
    cout << "\tAvi Schmookler\n\tDate: 9/26/2021" << endl;
    cout << setw(19) << "Lab#: N/A\n\t";
    cout << "\"Project_19-Sort_Scores_With_Average\"\n\tObjectives: Sort scores from large to small and prdouble the average score\n\n";

    // initializes the variable
    double average = 0.0;

    // calls functions
    get_scores();
    sort_scores();
    average = get_average(average);
    display_results(average);
 
    return 0;
}