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
static char board_1[14] = {'_', '_', '_',' ','_','_','_',' ','_','_',' ','_','_','_'};
static char board_1_solution[14] = {'T', 'H', 'E',' ','A','R','T',' ','O','F',' ','W','A','R'};
static char board_1_reset[14] = { '_', '_', '_',' ','_','_','_',' ','_','_','_','_','_' };
static char board_2[17] = {'_','_','_',' ','_','_','_','_','_','_','\'','_',' ','_','_','_'};
static char board_2_solution[17] = {'T','H','E',' ','C','U','C','K','O','O','\'','S',' ','E','G','G'};
static char board_2_reset[17] = { '_','_','_',' ','_','_','_','_','_','_','\'','_',' ','_','_','_' };
static char board_3[38] = {'_','_','_','_','_',' ','_','_','_','_','_','_',' ','_','_','_',' ','_','_','_',' ','_','_','_','_','_','_','_','_','\'','_',' ','_','_','_','_','_'};
static char board_3_solution[38] = {'H','A','R','R','Y',' ','P','O','T','T','E','R',' ','A','N','D',' ','T','H','E',' ','S','O','R','C','E','R','E','R','\'','S',' ','S','T','O','N','E'};
static char board_3_reset[38] = { '_','_','_','_','_',' ','_','_','_','_','_','_',' ','_','_','_',' ','_','_','_',' ','_','_','_','_','_','_','_','_','\'','_',' ','_','_','_','_','_' };
static char board_4[14] = {'_','_','_','_','_','_','_','_','_','_','_','_','_'};
static char board_4_solution[14] = {'C','R','Y','P','T','O','N','O','M','I','C','O','N'};
static char board_4_reset[14] = { '_','_','_','_','_','_','_','_','_','_','_','_','_' };
static char board_5[19] = {'_','_','_',' ','_','_','_','_','_','_','_','_',' ','_','_','_','_','_'};
static char board_5_solution[19] = {'T','H','E',' ','P','R','I','N','C','E','S','S',' ','B','R','I','D','E'};
static char board_5_reset[19] = { '_','_','_',' ','_','_','_','_','_','_','_','_',' ','_','_','_','_','_' };
static char board_6[30] = {'_','_','_',' ','_','_','_','\'','_',' ','_','_','_','_',' ','_','_','_','_',' ','_','_','_',' ','_','_','_','_','_'};
static char board_6_solution[30] = {'Y','O','U',' ','D','O','N','\'','T',' ','M','E','S','S',' ','W','I','T','H',' ','T','H','E',' ','Z','O','H','A','N'};
static char board_6_reset[30] = { '_','_','_',' ','_','_','_','\'','_',' ','_','_','_','_',' ','_','_','_','_',' ','_','_','_',' ','_','_','_','_','_' };
static char board_7[30] = {'_','_','_',' ','_','_','_','_','_',' ','_','_','_','_','_','_',' ','_','_','_','_','_','_','_',' ','_','_','_','_'};
static char board_7_solution[30] = {'T','H','E',' ','R','O','C','K','Y',' ','H','O','R','R','O','R',' ','P','I','C','T','U','R','E',' ','S','H','O','W'};
static char board_7_reset[30] = { '_','_','_',' ','_','_','_','_','_',' ','_','_','_','_','_','_',' ','_','_','_','_','_','_','_',' ','_','_','_','_' };
static char board_8[28] = {'_','_','_','_','_','_','_','_','_','_',',',' ','_','_',' ','_','_','_','_',' ','_','_','_','_','_','_','.'};
static char board_8_solution[28] = {'E','L','E','M','E','N','T','A','R','Y',',',' ','M','Y',' ','D','E','A','R',' ','W','A','T','S','O','N','.'};
static char board_8_reset[28] = { '_','_','_','_','_','_','_','_','_','_',',',' ','_','_',' ','_','_','_','_',' ','_','_','_','_','_','_','.' };
static char board_9[27] = {'_','_','_',' ','_','_','_',' ','_','_','_','_','_',' ','_','_',' ','_','_','_','_',' ','_','_','_','.'};
static char board_9_solution[27] = {'M','A','Y',' ','T','H','E',' ','F','O','R','C','E',' ','B','E',' ','W','I','T','H',' ','Y','O','U','.'};
static char board_9_reset[27] = { '_','_','_',' ','_','_','_',' ','_','_','_','_','_',' ','_','_',' ','_','_','_','_',' ','_','_','_','.' };
static char board_10[26] = {'_','_','_','\'','_','_',' ','_','_','_','_','_','_','\'',' ','_','_',' ','_','_','_','_','_','_','.'};
static char board_10_solution[26] = {'Y','O','U','\'','R','E',' ','K','I','L','L','I','N','\'',' ','M','E',' ','S','M','A','L','L','S','.'};
static char board_10_reset[26] = { '_','_','_','\'','_','_',' ','_','_','_','_','_','_','\'',' ','_','_',' ','_','_','_','_','_','_','.' };
static int board_length;
static int counter;
static char guessed_char[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
static char guessed_char_reset[26] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };


class wof
{
public:
    wof()
    {
        number_of_players = 1;
        p1 = "John";
        p2 = "Computer 2";
        p3 = "Computer 3";
        alt = 0;
        board_number = 0;
    }
    fstream file_wof;
    void get_number_of_players() 
    {
        while (true == true) 
        {
            cout << "How many players are playing (1-3)?\n";
            cin >> number_of_players;
            if (number_of_players < 4 && number_of_players > 0) 
            {
                system("cls");
                break;
            }
            else 
            {
                cout << "That is not a valid number of players, please try again.\n\n";
                this_thread::sleep_for(std::chrono::milliseconds(1000));
                system("cls");
            }
        }
    }

    void aquire_player_names()
    {
        if (number_of_players == 1)
        {
            cout << "Please enter the name of player 1.\n";
            cin >> p1;
            p2 = "Computer 1";
            p3 = "Computer 2";
        }
        else if (number_of_players == 2)
        {
            cout << "Please enter the name of player 1.\n";
            cin >> p1;
            cout << "Please enter the name of player 2.\n";
            cin >> p2;
            p3 = "Computer";
        }
        else if (number_of_players == 3)
        {
            cout << "Please enter the name of player 1.\n";
            cin >> p1;
            cout << "Please enter the name of player 2.\n";
            cin >> p2;
            cout << "Please enter the name of player 3.\n";
            cin >> p3;
        }
        else 
        {
            cout << "Error 2 not a valid number of players, exiting code.";
            EXIT_FAILURE;
        }
    }

    string get_p1()
    {
        return p1;
    }

    string get_p2()
    {
        return p2;
    }

    string get_p3()
    {
        return p3;
    }

    void display_scores()
    {
        file_wof.open("wofwins.txt", std::ios_base::app | std::ios_base::in);
        if (file_wof.is_open())
        {
            cout << "\nContent of log:-\n" << file_wof.rdbuf();
            file_wof.close();
        }
    }

    void play_game()
    {

        char letter;
        do
        {
            if (alt == 0)
            {
                cout << p1 << "'s turn.\n";
                letter = player_turn();
                check_letter(letter);
                alt++;
            }
            else if (alt == 1)
            {
                cout << p2 << "'s turn.\n";
                if (number_of_players == 2 || number_of_players == 3)
                {
                    letter = player_turn();
                    check_letter(letter);
                }
                else
                {
                    letter = comp_turn();
                    check_letter(letter);
                }
                alt++;
            }
            else if (alt == 2)
            {
                cout << p3 << "'s turn.\n";
                if (number_of_players == 3)
                {
                    letter =player_turn();
                    check_letter(letter);
                }
                else
                {
                    letter = comp_turn();
                    check_letter(letter);
                }
                set_alt();
            }
            else
            {
                cout << "Error 6, Exiting code.";
                EXIT_FAILURE;
            }
            if (board_number == 1)
            {
                board_length = 14;
                display_board(board_length, board_1);
            }
            else if (board_number == 2)
            {
                board_length = 16;
                display_board(board_length, board_2);
            }
            else if (board_number == 3)
            {
                board_length = 37;
                display_board(board_length, board_3);
            }
            else if (board_number == 4)
            {
                board_length = 13;
                display_board(board_length, board_4);
            }
            else if (board_number == 5)
            {
                board_length = 18;
                display_board(board_length, board_5);
            }
            else if (board_number == 6)
            {
                board_length = 29;
                display_board(board_length, board_6);
            }
            else if (board_number == 7)
            {
                board_length = 29;
                display_board(board_length, board_7);
            }
            else if (board_number == 8)
            {
                board_length = 27;
                display_board(board_length, board_8);
            }
            else if (board_number == 9)
            {
                board_length = 26;
                display_board(board_length, board_9);
            }
            else if (board_number == 10)
            {
                board_length = 25;
                display_board(board_length, board_10);
            }
            else
            {
                cout << "Error 8, Exiting code.";
                EXIT_FAILURE;
            }
            calculate_log_board();
        } while (!win());
        who_won();
    }

    char player_turn()
    {
        char letter = 'a';
        while (true == true)
        {
            cout << "What letter would you like to guess?\n";
            cin >> letter;
            for (int i = 0; i < board_length; i++) 
            {
                if (toupper(letter) == guessed_char[i]) 
                {
                    guessed_char[i] = ' ';
                    return letter;
                }
            }
            cout << "That letter has already been guessed, please chose another.\n";
        }
    }

    char comp_turn()
    {
        while (true == true)
        {
            char letter;
            int number;
            number = rand() % 26;
            letter = 'A' + number;
            for (int i = 0; i < board_length; i++) 
            {
                if (toupper(letter) == guessed_char[i])
                {
                    guessed_char[i] = ' ';
                    cout << "The Computer guessed: " << letter;
                    return letter;
                }
            }
        }
    }

    void check_letter(char letter)
    {
        int check_counter = 0;
        if (board_number == 1)
        {
            for (int i = 0; i < board_length; i++)
            {
                if (toupper(letter) == board_1_solution[i])
                {
                    board_1[i] = toupper(letter);
                    check_counter++;
                }
            }
        }
        else if (board_number == 2)
        {
            for (int i = 0; i < board_length; i++)
            {
                if (toupper(letter) == board_2_solution[i])
                {
                    board_2[i] = toupper(letter);
                    check_counter++;
                }
            }
        }
        else if (board_number == 3)
        {
            for (int i = 0; i < board_length; i++)
            {
                if (toupper(letter) == board_3_solution[i])
                {
                    board_3[i] = toupper(letter);
                    check_counter++;
                }
            }
        }
        else if (board_number == 4)
        {
            for (int i = 0; i < board_length; i++)
            {
                if (toupper(letter) == board_4_solution[i])
                {
                    board_4[i] = toupper(letter);
                    check_counter++;
                }
            }
        }
        else if (board_number == 5)
        {
            for (int i = 0; i < board_length; i++)
            {
                if (toupper(letter) == board_5_solution[i])
                {
                    board_5[i] = toupper(letter);
                    check_counter++;
                }
            }
        }
        else if (board_number == 6)
        {
            for (int i = 0; i < board_length; i++)
            {
                if (toupper(letter) == board_6_solution[i])
                {
                    board_6[i] = toupper(letter);
                    check_counter++;
                }
            }
        }
        else if (board_number == 7)
        {
            for (int i = 0; i < board_length; i++)
            {
                if (toupper(letter) == board_7_solution[i])
                {
                    board_7[i] = toupper(letter);
                    check_counter++;
                }
            }
        }
        else if (board_number == 8)
        {
            for (int i = 0; i < board_length; i++)
            {
                if (toupper(letter) == board_8_solution[i])
                {
                    board_8[i] = toupper(letter);
                    check_counter++;
                }
            }
        }
        else if (board_number == 9)
        {
            for (int i = 0; i < board_length; i++)
            {
                if (toupper(letter) == board_9_solution[i])
                {
                    board_9[i] = toupper(letter);
                    check_counter++;
                }
            }
        }
        else if (board_number == 10)
        {
        for (int i = 0; i < board_length; i++)
        {
            if (toupper(letter) == board_10_solution[i])
            {
                board_10[i] = toupper(letter);
                check_counter++;
            }
        }
        }
        else
        {
            cout << "Error 7, Exiting code.";
            EXIT_FAILURE;
        }
        if (check_counter > 0)
        {
            alt--;
        }
    }

    bool win()
    {
        if (board_number == 1)
        {
            return (strcmp(board_1, board_1_solution) == 0);
        }
        else if (board_number == 2)
        {
            return (strcmp(board_2, board_2_solution) == 0);
        }
        else if (board_number == 3)
        {
            return (strcmp(board_3, board_3_solution) == 0);
        }
        else if (board_number == 4)
        {
            return (strcmp(board_4, board_4_solution) == 0);
        }
        else if (board_number == 5)
        {
            return (strcmp(board_5, board_5_solution) == 0);
        }
        else if (board_number == 6)
        {
            return (strcmp(board_6, board_6_solution) == 0);
        }
        else if (board_number == 7)
        {
            return (strcmp(board_7, board_7_solution) == 0);
        }
        else if (board_number == 8)
        {
            return (strcmp(board_8, board_8_solution) == 0);
        }
        else if (board_number == 9)
        {
            return (strcmp(board_9, board_9_solution) == 0);
        }
        else if (board_number == 10)
        {
            return (strcmp(board_10, board_10_solution) == 0);
        }
        else
        {
            cout << "Error 5, Exiting code.";
            EXIT_FAILURE;
        }
    }

    void who_won()
    {
        file_wof.open("wofwins.txt", std::ios_base::app | std::ios_base::in);
        if (alt == 0)
        {
            cout << p1 << " WINS!!\n";
            if (file_wof.is_open())
            {
                file_wof << p1 << " WINS!!\n";
            }
        }
        else if (alt == 1)
        {
            cout << p2 << " WINS!!\n";
            if (file_wof.is_open())
            {
                file_wof << p2 << " WINS!!\n";
            }
        }
        else if (alt == 2)
        {
            cout << p3 << " WINS!!\n";
            if (file_wof.is_open())
            {
                file_wof << p3 << " WINS!!\n";
            }
        }
        file_wof.close();
    }

    void calculate_board()
    {
        srand(time(NULL));
        board_number = ((rand() % 10) + 1);

        if (board_number == 1)
        {
            board_length = 14;
            display_board(board_length, board_1);
        }
        else if (board_number == 2)
        {
            board_length = 16;
            display_board(board_length, board_2);
        }
        else if (board_number == 3)
        {
            board_length = 37;
            display_board(board_length, board_3);
        }
        else if (board_number == 4)
        {
            board_length = 13;
            display_board(board_length, board_4);
        }
        else if (board_number == 5)
        {
            board_length = 18;
            display_board(board_length, board_5);
        }
        else if (board_number == 6)
        {
            board_length = 29;
            display_board(board_length, board_6);
        }
        else if (board_number == 7)
        {
            board_length = 29;
            display_board(board_length, board_7);
        }
        else if (board_number == 8)
        {
            board_length = 27;
            display_board(board_length, board_8);
        }
        else if (board_number == 9)
        {
            board_length = 26;
            display_board(board_length, board_9);
        }
        else if (board_number == 10)
        {
            board_length = 25;
            display_board(board_length, board_10);
        }
        else
        {
            cout << "Error 3, Exiting code.";
            EXIT_FAILURE;
        }
    }

    void display_board(int board_length, char board[])
    {
        cout << "\n\n\n\n\t\t\t\t";
        for (int i = 0; i < board_length + 1; i++)
        {
            cout << board[i];
        }
        cout << "\n\n\t\t\t\t";
        for (int i = 0; i < 25 + 1; i++)
        {
            cout << guessed_char[i];
        }
        cout << "\n\n";
    }

    void calculate_board_reset()
    {
        if (board_number == 1)
        {
            board_reset(board_1, board_1_reset);
        }
        else if (board_number == 2)
        {
            board_reset(board_2, board_2_reset);
        }
        else if (board_number == 3)
        {
            board_reset(board_3, board_3_reset);
        }
        else if (board_number == 4)
        {
            board_reset(board_4, board_4_reset);
        }
        else if (board_number == 5)
        {
            board_reset(board_5, board_5_reset);
        }
        else if (board_number == 6)
        {
            board_reset(board_6, board_6_reset);
        }
        else if (board_number == 7)
        {
            board_reset(board_7, board_7_reset);
        }
        else if (board_number == 8)
        {
            board_reset(board_8, board_8_reset);
        }
        else if (board_number == 9)
        {
            board_reset(board_9, board_9_reset);
        }
        else if (board_number == 10)
        {
            board_reset(board_10, board_10_reset);
        }
        else
        {
            cout << "Error 4, Exiting code.";
            EXIT_FAILURE;
        }
    }

    void board_reset(char board[], char board_reset[])
    {
        for (int i = 0; i < board_length + 1; i++)
        {
            board[i] = board_reset[i];
        }
    }

    void calculate_log_board()
    {
        if (board_number == 1)
        {
            log_board(board_1);
        }
        else if (board_number == 2)
        {
            log_board(board_2);
        }
        else if (board_number == 3)
        {
            log_board(board_3);
        }
        else if (board_number == 4)
        {
            log_board(board_4);
        }
        else if (board_number == 5)
        {
            log_board(board_5);
        }
        else if (board_number == 6)
        {
            log_board(board_6);
        }
        else if (board_number == 7)
        {
            log_board(board_7);
        }
        else if (board_number == 8)
        {
            log_board(board_8);
        }
        else if (board_number == 9)
        {
            log_board(board_9);
        }
        else if (board_number == 10)
        {
            log_board(board_10);
        }
        else
        {
            cout << "Error 9, Exiting code.";
            EXIT_FAILURE;
        }
    }

    void log_board(char board[])
    {
        file_wof.open("wofwins.txt", std::ios_base::app | std::ios_base::in);
        if (file_wof.is_open())
        {
            for (int i = 0; i < board_length + 1; i++)
            {
                file_wof << board[i];
            }
            file_wof << "\n\n";
        }
        file_wof.close();
    }

    void reset_guessed_char()
    {
        for (int i = 0; i < 26; i++)
        {
            guessed_char[i] = guessed_char_reset[i];
        }

    }

    void set_alt()
    {
        alt = 0;
    }

private:
    int number_of_players;
    string p1;
    string p2;
    string p3;
    int alt;
    int board_number;
};
