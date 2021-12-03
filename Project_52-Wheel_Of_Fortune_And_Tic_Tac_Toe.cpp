/*

Output Commands
Avi Schmookler
12/1/2021

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
#include "Project_52-Tic_Tac_Toe.h"
#include "Project_52-Wheel_Of_Fortune.h"

// plays main
int main()
{
    // header
    system("color 0a");
    cout << "\tAvi Schmookler\n\tDate: 12/1/2021" << endl;
    cout << setw(19) << "Lab#: N/A\n\t";
    cout << "\"Project_52-Wheel_Of_Fortune\"\n\tObjectives: Create and display a Phrase (random string) and use X instead of the real letters "
         << "Players will take turns guessing charactersand will earn 1 pt for each correct letter turned "

         << "Computer will guess random letters, but will NOT be allowed to guess an already chosen letter(by either player)"

         << "Game will continue until all letters are turned"

         << "Identify the scoresand the winner\n\n";

    // let's you read the header for a sec
    this_thread::sleep_for(std::chrono::milliseconds(3000));
    // opens .h file
    ttt ttt;
    wof wof;
    // starts file
    fstream file_ttt;
    fstream file_wof;

    // randomizes time
    srand(time(NULL));
    char ch;
    int choice = 0;
    // clears previous couts
    system("cls");
    while (choice != 5) {
        cout << "\nWhat would you like to do?\n\n";
        cout << "Play Tic Tac Toe :             1\n";
        cout << "Play Wheel Of Fortune :        2\n";
        cout << "View Tic Tac Toe Scores :      3\n";
        cout << "View Wheel Of Fortune Scores : 4\n";
        cout << "Quit :                         5\n";
        cin >> choice;
        system("cls");
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
            do
            {
                wof.who_won();
                wof.reset_guessed_char();
                cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
                cout << "\t\t\tWELCOME TO WHEEL OF FORTUNE\n";
                cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
                wof.get_number_of_players();
                wof.aquire_player_names();
                system("cls");
                cout << "Player 1's name is: " << wof.get_p1() << "\n";
                cout << "Player 2's name is: " << wof.get_p2() << "\n";
                cout << "Player 3's name is: " << wof.get_p3() << "\n";
                this_thread::sleep_for(std::chrono::milliseconds(2000));
                system("cls");
                wof.calculate_board();
                wof.calculate_log_board();
                wof.play_game();
                cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
                cout << "\nDo You Want to Play Again? (Y / N): ";
                wof.calculate_board_reset();
                wof.set_alt();
                wof.reset_guessed_char();
                cin >> ch;
                system("cls");
            } while (ch != 'n' && ch != 'N');
        }
        else if (choice == 3)
        {
            ttt.display_scores();
        }
        else if (choice == 4)
        {
            wof.display_scores();
        }
        else if (choice < 1 || choice > 6)
        {
            ttt.exit_failure();
        }
    }

    return 0;
}
