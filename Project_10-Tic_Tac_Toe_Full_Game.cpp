/*

Output Commands
Avi Schmookler
9/8/2021

*/
using namespace std;
#include <iostream>
#include <iomanip>
#include <string>

// initializes square as a character array that will be changed throughout the program
char square[10] = { 'o','1','2','3','4','5','6','7','8','9' };

// initializes the board as a function
void display_board() {

    // displays the board using different locations on the square array
    cout << "     |     |     \n";
    cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << "\n";

    cout << "_____|_____|_____\n";
    cout << "     |     |     \n";

    cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << "\n";

    cout << "_____|_____|_____\n" ;
    cout << "     |     |     \n" ;

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
            }
        }
        else {
            cout << "\nThat is not a valid number, please try again\n";
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
    cout << "\"Tic Tac Toe Full Game\"\n\tObjectives: Create a full tic tac toe game\n";

    // initializes all variables
    int player_1_number = 0;
    int player_2_number = 0;
    int win = 0;
    char player_1[1] = { 'X' };
    char player_2[1] = { 'O' };
    
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
        player_2_number = get_player_number(player_1[0], player_2[0]);
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