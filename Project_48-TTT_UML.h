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

#pragma once
static char board[3][3] = { {' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '} }, ch1;

class ttt
{
public:
    ttt()
    {
        p1;
        p2;
        row = 0;
        column = 0;
        alt = 0;
    }
    fstream file;
    void enter_p1_name()
    {
        cout << "\nEnter First Player's first Name: ";
        cin >> p1;
    }

    void set_alt()
    {
        alt = 0;
    }

    int get_alt()
    {
        return alt;
    }

    string get_p1()
    {
        return p1;
    }

    string get_p2()
    {
        p2 = "Computer";

        return p2;
    }

    // logs the board to a file
    void log_board()
    {
        fstream file;

        file.open("TTTwins.txt", std::ios_base::app | std::ios_base::in);
        if (file.is_open())
        {

            string string_board = "A";
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
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
            file << "\n\n";
        }
    }

    void tie()
    {
        cout << "Tie Game!\n";
        // saves the win or loss or tie to file
        file.open("TTTwins.txt", std::ios_base::app | std::ios_base::in);
        if (file.is_open())
            file << "Tie Game!" << "\n";
        file.close();
    }

    void comp_win()
    {
        cout << p2 << " Wins!\n";
        file.open("TTTwins.txt", std::ios_base::app | std::ios_base::in);
        if (file.is_open())
            file << p2 << " Wins!" << "\n";
        file.close();
    }

    void player_win()
    {
        cout << p1 << " Wins!\n";
        file.open("TTTwins.txt", std::ios_base::app | std::ios_base::in);
        if (file.is_open())
            file << p1 << " Wins!" << "\n";
        file.close();
    }

    void display_scores()
    {
        // prints the file
        file.open("TTTwins.txt", std::ios_base::app | std::ios_base::in);
        cout << "\nContent of log:-\n" << file.rdbuf();
        file.close();
    }

    void exit_failure()
    {
        cout << "That is not a valid input, error 1, exiting code.";
        EXIT_FAILURE;
    }

    // goes through the game over and over again
    void play_game()
    {
        char ch1 = 'a';
        do {
            if (alt % 2 == 0)
            {
                cout << "\n" << "\n" << p1 << "'s Turn\n";
                ch1 = 'X';

                player_choice();
            }
            else
            {
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

    // asks the player for choice
    void player_choice()
    {
        while (true == true)
        {
            cout << "Enter Column No. you want to make move: ";
            cin >> column;
            if (column < 1 || column > 3)
                cout << "Enter Coulmn in Range 1 to 3\n";
            else
                break;
        }
        while (true == true)
        {
            cout << "Enter Row No. you want to make move: ";
            cin >> row;
            if (row < 1 || row > 3)
                cout << "Enter Row in Range 1 to 3\n";
            else
                break;
        }
    }

    // calculates random comp choice
    void comp_choice()
    {
        // randomizes time
        srand(time(NULL));
        while (true == true)
        {
            srand(time(NULL));
            row = ((rand() % 3) + 1);
            column = ((rand() % 3) + 1);
            if (board[row - 1][column - 1] == ' ')
            {
                break;
            }
            else
            {
                continue;
            }
        }

    }

    // transfers X or O to the correct spot 
    void make_move(char c1)
    {
        if (board[row - 1][column - 1] == ' ')
        {
            board[row - 1][column - 1] = c1;
        }
        else
        {
            cout << "\nThis Position is Already Occupied!\n\n";
            alt--;
        }
    }

    // checks if there is a cat's game
    bool board_full()
    {
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                if (board[i][j] == ' ')
                    return false;
        return true;
    }

    // checks win
    bool is_winner(char ch4)
    {
        return ((board[0][0] == ch4 && board[0][1] == ch4 && board[0][2] == ch4) ||
            (board[1][0] == ch4 && board[1][1] == ch4 && board[1][2] == ch4) ||
            (board[2][0] == ch4 && board[2][1] == ch4 && board[2][2] == ch4) ||
            (board[0][0] == ch4 && board[1][0] == ch4 && board[2][0] == ch4) ||
            (board[0][1] == ch4 && board[1][1] == ch4 && board[2][1] == ch4) ||
            (board[0][2] == ch4 && board[1][2] == ch4 && board[2][2] == ch4) ||
            (board[0][0] == ch4 && board[1][1] == ch4 && board[2][2] == ch4) ||
            (board[0][2] == ch4 && board[1][1] == ch4 && board[2][0] == ch4));
    }

    // prints the board
    void print_board()
    {
        system("cls");
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
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

    // resets the board
    void board_reset()
    {
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                board[i][j] = ' ';
    }
private:
    string p1;
    string p2;
    int row;
    int column;
    int alt;
};