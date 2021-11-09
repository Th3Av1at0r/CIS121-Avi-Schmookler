/*

Output Commands
Avi Schmookler
11/3/2021

*/
// adds includes
using namespace std;
#include <iostream>
#include <iomanip>
#include <string>
#include <random>
#include <vector>
#include <Windows.h>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <fstream>
#include <stdlib.h>
#include <chrono>
#include <thread>

// creates global variables
static char board[3][3] = { {' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '} }, ch1;
string p1, p2;
int row, column;
int alt = 0;

// resets the board
void board_reset() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            board[i][j] = ' ';
}

// prints the board
void print_board() {
    system("cls");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (j == 0)
                cout << "\t\t\t";
            cout << " " << board[i][j] << " ";
            if (j != 2)
                cout << "|";
        }
        cout << "\n";
        if (i != 2)
            cout << "\t\t\t-----------\n";
    }
}

// logs the board to a file
void log_board() {
    fstream file;

    file.open("TTTwins.txt", std::ios_base::app | std::ios_base::in);
    if (file.is_open()) {

        string string_board = "A";
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (j == 0)
                    file << "\t\t\t";
                file << " " << board[i][j] << " ";
                if (j != 2)
                    file << "|";
            }
            file << "\n";
            if (i != 2)
                file << "\t\t\t-----------\n";
        }
    }
}

// checks win
bool is_winner(char ch4) {
    return ((board[0][0] == ch4 && board[0][1] == ch4 && board[0][2] == ch4) ||
        (board[1][0] == ch4 && board[1][1] == ch4 && board[1][2] == ch4) ||
        (board[2][0] == ch4 && board[2][1] == ch4 && board[2][2] == ch4) ||
        (board[0][0] == ch4 && board[1][0] == ch4 && board[2][0] == ch4) ||
        (board[0][1] == ch4 && board[1][1] == ch4 && board[2][1] == ch4) ||
        (board[0][2] == ch4 && board[1][2] == ch4 && board[2][2] == ch4) ||
        (board[0][0] == ch4 && board[1][1] == ch4 && board[2][2] == ch4) ||
        (board[0][2] == ch4 && board[1][1] == ch4 && board[2][0] == ch4));
}

// checks if there is a cat's game
bool board_full() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] == ' ')
                return false;
    return true;
}

// transfers X or O to the correct spot 
void make_move(char c1) {
    if (board[row - 1][column - 1] == ' ')
        board[row - 1][column - 1] = c1;
    else {
        cout << "\nThis Position is Already Occupied!\n\n";
        alt--;
    }
}

// calculates random comp choice
void comp_choice() {
    while (true == true) {
        srand(time(NULL));
        row = ((rand() % 3) + 1);
        column = ((rand() % 3) + 1);
        if (board[row - 1][column - 1] == ' ') {
            break;
        }
        else {
            continue;
        }
    }

}

// asks the player for choice
void player_choice() {
    while (true == true) {
        cout << "Enter Column No. you want to make move: ";
        cin >> column;
        if (column < 1 || column > 3)
            cout << "Enter Coulmn in Range 1 to 3\n";
        else
            break;
    }
    while (true == true) {
        cout << "Enter Row No. you want to make move: ";
        cin >> row;
        if (row < 1 || row > 3)
            cout << "Enter Row in Range 1 to 3\n";
        else
            break;
    }
}

// goes through the game over and over again
void play_game() {
    do {
        if (alt % 2 == 0) {
            cout << "\n" << "\n" << p1 << "'s Turn\n";
            ch1 = 'X';

            player_choice();
        }
        else {
            cout << "\n" << "\n" << p2 << "'s Turn\n";
            ch1 = 'O';

            comp_choice();
        }

        make_move(ch1);
        alt++;
        print_board();
        log_board();
    } while (!is_winner(ch1) && !board_full());
}

// plays main
int main()
{
    // header
    system("color 0a");
    cout << "\tAvi Schmookler\n\tDate: 11/3/2021" << endl;
    cout << setw(19) << "Lab#: N/A\n\t";
    cout << "\"Project_41-More_Tic_Tac_Toe\"\n\tObjectives: How could we record the entire Tic-Tac-Toe game to a File called gameresults.txt?\n\n";

    // let's you read the header for a sec
    this_thread::sleep_for(std::chrono::milliseconds(3000));

    // starts file
    fstream file;

    // randomizes time
    srand(time(NULL));
    char ch;
    // clears previous couts
    system("cls");
    do {
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cout << "\t\t\tWELCOME TO TIC-TAC-TOE\n";
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cout << "\nEnter First Player's first Name: ";
        cin >> p1;
        cout << "Symbol Assigned to " << p1 << " is 'X'\n";
        p2 = "Computer";
        cout << "Symbol Assigned to " << p2 << " is 'O'\n\n";
        // lets you read the header for a sec
        this_thread::sleep_for(std::chrono::milliseconds(3000));
        print_board();
        log_board();
        play_game();
        cout << "\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cout << "\t\t\t\tRESULT: ";
        if (board_full() && !(is_winner('X') || is_winner('O'))) {
            cout << "Tie Game!\n";
            // saves the win or loss or tie to file
            file.open("TTTwins.txt", std::ios_base::app | std::ios_base::in);
            if (file.is_open())
                file << "Tie Game!" << "\n";
            file.close();
        }
        else if (alt % 2 == 0) {
            cout << p2 << " Wins!\n";
            file.open("TTTwins.txt", std::ios_base::app | std::ios_base::in);
            if (file.is_open())
                file << p2 << " Wins!" << "\n";
            file.close();
        }
        else {
            cout << p1 << " Wins!\n";
            file.open("TTTwins.txt", std::ios_base::app | std::ios_base::in);
            if (file.is_open())
                file << p1 << " Wins!" << "\n";
            file.close();
        }
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
        cout << "\nDo You Want to Play Again? (Y / N): ";
        board_reset();
        alt = 0;
        cin >> ch;
    } while (ch != 'n' && ch != 'N');

    // prints the file
    file.open("TTTwins.txt", std::ios_base::app | std::ios_base::in);
    cout << "\nContent of log:-\n" << file.rdbuf();
    file.close();

    return 0;
}