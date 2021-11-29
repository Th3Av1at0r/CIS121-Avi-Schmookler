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
#include "Project_49-Lab_13.h"

// plays main
int main()
{
    // header
    system("color 0a");
    cout << "\tAvi Schmookler\n\tDate: 11/3/2021" << endl;
    cout << setw(19) << "Lab#: N/A\n\t";
    cout << "\"Project_49-Lab_13\"\n\tObjectives: How could we record the entire Tic-Tac-Toe game to a File called gameresults.txt, using UML and .h files\n\n";

    // let's you read the header for a sec
    this_thread::sleep_for(std::chrono::milliseconds(3000));
    // opens .h file
    ttt ttt;
    // starts file
    fstream file;

    // randomizes time
    srand(time(NULL));
    char ch;
    int choice = 0;
    // clears previous couts
    system("cls");
    while (choice != 3) {
        cout << "\nWhat would you like to do?\n\n";
        cout << "Play Tic Tac Toe : 1\n";
        cout << "View Score :       2\n";
        cout << "Quit :             3\n";
        cin >> choice;
        if (choice == 1) 
        {
            do 
            {
                cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
                cout << "\t\t\tWELCOME TO TIC-TAC-TOE\n";
                cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
                ttt.enter_p1_name();
                cout << "Symbol Assigned to " << ttt.get_p1() << " is 'X'\n";
                ttt.get_p2() = "Computer";
                cout << "Symbol Assigned to " << ttt.get_p2() << " is 'O'\n\n";
                // lets you read the header for a sec
                this_thread::sleep_for(std::chrono::milliseconds(3000));
                ttt.print_board();
                ttt.log_board();
                ttt.play_game();
                cout << "\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
                cout << "\t\t\t\tRESULT: ";
                if (ttt.board_full() && !(ttt.is_winner('X') || ttt.is_winner('O')))
                {
                    ttt.tie();
                }
                else if (ttt.get_alt() % 2 == 0) 
                {
                    ttt.comp_win();
                }
                else 
                {
                    ttt.player_win();
                }
                cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
                cout << "\nDo You Want to Play Again? (Y / N): ";
                ttt.board_reset();
                ttt.set_alt();
                cin >> ch;
            } while (ch != 'n' && ch != 'N');
        }
        else if (choice == 2) 
        {
            ttt.display_scores();
        }
        else if (choice < 1 || choice > 3)
        {
            ttt.exit_failure();
        }
    }

    return 0;
}