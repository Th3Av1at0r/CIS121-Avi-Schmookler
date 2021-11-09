/*

Output Commands
Avi Schmookler
10/20/2021

*/
using namespace std;
#include <iostream>
#include <iomanip>
#include <string>
#include <random>
#include <vector>

enum weapon { Rock, Paper, Scissors };
const int max_games = 5;

string show(weapon human) {
    if (human == Rock) {
        return "Rock";
    }
    else if (human == Paper) {
        return "Paper";
    }
    else if (human == Scissors) {
        return "Scissors";
    }
    else {
        cout << "error 1 exiting code";
        exit(0);
    }
}

string displayWinner(weapon human, weapon comp) {
    if (human == Rock && comp == Scissors) return "puny human wins ... ROCK smashes SCISSORS!";
    if (human == Rock && comp == Paper) return "PAPER covers rock! Superior computer wins";
    if (human == Scissors && comp == Paper) return "puny human wins .... SCISSORS cuts PAPER!";
    if (human == Scissors && comp == Rock)return "ROCK smashes scissors! Superior computer wins";
    if (human == Paper && comp == Rock) return "puny human wins .... PAPER covers ROCK!";
    if (human == Paper && comp == Scissors)return "SCISSORS cuts paper! Superior computer wins";
    if (human == comp) return " ... DRAW!! ....";
}

int main()
{
    system("color 0a");
    cout << "\tAvi Schmookler\n\tDate: 10/20/2021" << endl;
    cout << setw(19) << "Lab#: N/A\n\t";
    cout << "\"Project_31-Enumerations\"\n\tObjectives: Research Enumerations. Cite your source."
        << "What are enums ? What is their Data Type ? Using Enums and random numbers(1 - 3), create a Paper, Rock, Scissors game against the computerand play to 5\n\n";

    srand(time(NULL));

    int games_played = 0;
    int human_choice;
    weapon computer_weapon;
    weapon human_weapon;

    while (games_played < max_games) {

        cout << "What do you choose [Rock is default]? Rock (1), Paper (2) or Scissors (3)  ";
        cin >> human_choice;
        if (human_choice == 1) human_weapon = Rock;
        else if (human_choice == 2) human_weapon = Paper;
        else if (human_choice == 3) human_weapon = Scissors;
        else human_weapon = Rock;

        int x = rand() % 3;
        if (x == 0) computer_weapon = Rock;
        if (x == 1) computer_weapon = Paper;
        if (x == 2) computer_weapon = Scissors;
        cout << "computer chooses " << show(computer_weapon) << "\n";
        cout << displayWinner(human_weapon, computer_weapon) << "\n next game\n\n";
        games_played++;
    }


    return 0;
}