/*

Output Commands
Avi Schmookler
10/6/2021

*/
using namespace std;
#include <iostream>
#include <iomanip>
#include <string>
#include <random>
#include <vector>

vector<string> names{};
vector<int> scores{};

int get_number_of_names_and_scores(int number_of_names_and_scores) {
    cout << "\nHow many names and scores do you want to enter?\n";
    cin >> number_of_names_and_scores;

    return number_of_names_and_scores;
}

void get_names_and_scores(int number_of_names_and_scores) {
    int counter = 0;
    string name = "A";
    int score = 0;
    while (counter < number_of_names_and_scores) {
        cout << "\nPlease enter a name.\n";
        cin >> name;
        cout << "\nWhat is " << name << "'s score?\n";
        cin >> score;
        names.push_back(name);
        scores.push_back(score);
        counter++;
    }
}

void sort_names_and_scores(int number_of_names_and_scores) {
    int var_1 = 0;
    int var_2 = 0;
    double bank = 0.0;
    string str_bank = "A";
    for (var_1 = 0; var_1 < names.size(); var_1++) {
        for (var_2 = 0; var_2 < number_of_names_and_scores - 1; var_2++)
        {
            if (scores[var_2] < scores[var_2++])
            {
                bank = scores[var_2];
                scores[var_2] = scores[var_2++];
                scores[var_2++] = bank;

                str_bank = names[var_2];
                names[var_2] = names[var_2++];
                names[var_2++] = str_bank;
            }
            else {
                continue;
            }
        }
    }
}

void display_results(int number_of_names_and_scores) {
    int number = 0;
    for (number = 0; number < number_of_names_and_scores; number++)
        std::cout << setw(50) << names[number] << ": " << scores[number] << "\n";
}

int main()
{
    system("color 0a");
    cout << "\tAvi Schmookler\n\tDate: 10/6/2021" << endl;
    cout << setw(19) << "Lab#: N/A\n\t";
    cout << "\"Project_21-Int_Vectors\"\n\tPrompt the user to enter their name into a string vector and then their score into an int vector."
        << "Sort the scores highest to lowest"
        << "Display the sorted scores along with their corresponding name\n\n";

    int number_of_names_and_scores = 0;


    number_of_names_and_scores = get_number_of_names_and_scores(number_of_names_and_scores);
    get_names_and_scores(number_of_names_and_scores);
    sort_names_and_scores(number_of_names_and_scores);
    display_results(number_of_names_and_scores);

    return 0;
}