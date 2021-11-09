/*

Output Commands
Avi Schmookler
10/15/2021

*/
using namespace std;
#include <iostream>
#include <iomanip>
#include <string>
#include <random>
#include <vector>
#include<Windows.h>
#include<ctime>
#include<cstdlib>

// initializes square as a character array that will be changed throughout the program
char square[10] = { '0','1','2','3','4','5','6','7','8','9' };

// initializes the board as a function
void display_board() {

    // displays the board using different locations on the square array
    cout << "     |     |     \n";
    cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << "\n";

    cout << "_____|_____|_____\n";
    cout << "     |     |     \n";

    cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << "\n";

    cout << "_____|_____|_____\n";
    cout << "     |     |     \n";

    cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << "\n";

    cout << "     |     |     \n\n";
}

// initializes the function that aquires the player numbers and checks them
int get_player_number(char player_1, char player_2) {
    int player_number = 0;
    // initializes a loop that will keep going untill a valid number is picked
    while (true == true) {
        cout << "Player please enter a number.\n";
        cin >> player_number;
        // checks if player_number is in range
        if (player_number >= 1 and player_number <= 9) {
            // checks if player_number has been picked before
            if (square[player_number] != player_1 and square[player_number] != player_2) {

                return player_number;
            }
            else {
                cout << "\nThat is not a valid number, please try again\n";
                continue;
            }
        }
        else {
            cout << "\nThat is not a valid number, please try again\n";
            continue;
        }
    }

}

// Calculates spaces 1,4,7,9
int calculate_comp_number_1(int one, int two, int three, int four, int five, int nine, int seven, char player_1, char player_2, int player_number) {
    if (square[two] == square[three] && square[one] != player_1 && square[one] != player_2 || square[five] == square[nine] && square[one] != player_1
        && square[one] != player_2 || square[four] == square[seven] && square[one] != player_1 && square[one] != player_2) {
        player_number = one;
        return player_number;
    }
    else {
        player_number = 0;
        return player_number;
    }
}

// Calculates spaces 2,4,6,8
int calculate_comp_number_2(int two, int one, int three, int five, int eight, char player_1, char player_2, int player_number) {
    if (square[one] == square[three] && square[two] != player_1 && square[two] != player_2 || square[five] == square[eight] && square[one] != player_1 && square[one] != player_2) {
        player_number = two;
        return player_number;
    }
    else {
        player_number = 0;
        return player_number;
    }
}

// Calculates space 5
int calculate_comp_number_3(int one, int two, int three, int four, int five, int six, int seven, int eight, int nine, char player_1, char player_2, int player_number) {
    if (square[one] == square[nine] && square[five] != player_1 && square[five] != player_2 || square[two] == square[eight] && square[five] != player_1 && square[five] != player_2 ||
        square[three] == square[seven] && square[five] != player_1 && square[five] != player_2 || square[four] == square[six] && square[five] != player_1 && square[five] != player_2) {
        player_number = five;
        return player_number;
    }
    else {
        player_number = 0;
        return player_number;
    }
}

// logic dictates the computer's number
int get_comp_number(char player_1, char player_2) {
    int player_number = 0;
    while (true == true) {
        if (player_number == 0) {
            player_number = calculate_comp_number_1(1, 2, 3, 4, 5, 9, 7, player_1, player_2, player_number);
        }
        if (player_number == 0) {
            player_number = calculate_comp_number_1(3, 2, 1, 6, 5, 7, 9, player_1, player_2, player_number);
        }
        if (player_number == 0) {
            player_number = calculate_comp_number_1(7, 8, 9, 4, 5, 3, 1, player_1, player_2, player_number);
        }
        if (player_number == 0) {
            player_number = calculate_comp_number_1(9, 8, 7, 6, 5, 1, 3, player_1, player_2, player_number);
        }
        if (player_number == 0) {
            player_number = calculate_comp_number_2(2, 1, 3, 5, 8, player_1, player_2, player_number);
        }
        if (player_number == 0) {
            player_number = calculate_comp_number_2(4, 7, 1, 5, 6, player_1, player_2, player_number);
        }
        if (player_number == 0) {
            player_number = calculate_comp_number_2(8, 7, 9, 5, 2, player_1, player_2, player_number);
        }
        if (player_number == 0) {
            player_number = calculate_comp_number_2(6, 9, 3, 4, 5, player_1, player_2, player_number);
        }
        if (player_number == 0) {
            player_number = calculate_comp_number_3(1, 2, 3, 4, 5, 6, 7, 8, 9, player_1, player_2, player_number);
        }
        if (player_number == 0) {
            player_number = (rand() % 9) + 1;
        }
        // checks if player_number is in range
        if (player_number >= 1 and player_number <= 9) {
            // checks if player_number has been picked before
            if (square[player_number] != player_1 and square[player_number] != player_2) {

                return player_number;
            }
            else {
                cout << "\nError 1: That is not a valid number, please try again\n";
                continue;
            }
        }
        else {
            cout << "\nError 2: That is not a valid number, please try again\n";
        }

    }

}

// initializes the check win function
int check_win() {
    // checks all possibilities of winning, there are only 8
    if (square[1] == square[2] && square[2] == square[3]) {
        return 1;
    }
    if (square[4] == square[5] && square[5] == square[6]) {
        return 1;
    }
    if (square[7] == square[8] && square[8] == square[9]) {
        return 1;
    }
    if (square[1] == square[4] && square[4] == square[7]) {
        return 1;
    }
    if (square[2] == square[5] && square[5] == square[8]) {
        return 1;
    }
    if (square[3] == square[6] && square[6] == square[9]) {
        return 1;
    }
    if (square[1] == square[5] && square[5] == square[9]) {
        return 1;
    }
    if (square[3] == square[5] && square[5] == square[7]) {
        return 1;
    }
    if (square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9') {
        return 2;
    }
    else {
        return 0;
    }
}

// initializes main
int main()
{
    system("color 0a");
    cout << "\tAvi Schmookler\n\tDate: 9/8/2021" << endl;
    cout << setw(19) << "Lab#: N/A\n\t";
    cout << "\"Project_30-Lab_8\"\n\tObjectives: Create a full tic tac toe game with a computer opponent.\n";

    // initializes all variables
    int player_1_number = 0;
    int player_2_number = 0;
    int win = 0;
    char player_1[1] = { 'X' };
    char player_2[1] = { 'O' };

    // randomizes random numbers
    srand(time(NULL));
    // displays board
    display_board();
    // loops untill win
    while (true == true) {
        // aquires the number that the player wants to replace
        player_1_number = get_player_number(player_1[0], player_2[0]);
        // replaces the location in square with the player symbol
        square[player_1_number] = player_1[0];
        display_board();
        // checks win or draw
        win = check_win();
        if (win == 1) {
            cout << "X wins!";
            break;
        }
        else if (win == 2) {
            cout << "It's a draw!";
            break;
        }
        // aquires the number that the player wants to replace
        player_2_number = get_comp_number(player_1[0], player_2[0]);
        // replaces the location in square with the player symbol
        square[player_2_number] = player_2[0];
        win = check_win();
        display_board();
        // checks win or draw
        if (win == 1) {
            cout << "O wins!";
            break;
        }
        else if (win == 2) {
            cout << "It's a draw!";
            break;
        }
        else {
            continue;
        }
    }

    return 0;
}