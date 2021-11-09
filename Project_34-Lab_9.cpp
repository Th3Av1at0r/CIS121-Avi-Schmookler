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
#include <Windows.h>
#include <ctime>
#include <cstdlib>
#include <algorithm>

// creates vectors
vector <char> t1{ ' ', 'A', 'B', 'C', 'D' };
vector <char> t2{ ' ' };
vector <char> t3{ ' ' };

// prints the board
void print_board() {
    {
        cout << "\nT1:    ";
        for (char i : t1)
        {
            cout << "\t" << i;
        }
        cout << "\nT2:    ";
        for (char i : t2)
        {
            cout << "\t" << i;
        }
        cout << "\nT3:    ";
        for (char i : t3)
        {
            cout << "\t" << i;
        }
    }
}

// asks for both the from and to seclectons
int selection(int tower, string from_or_to) {
    while (true == true) {
        cout << "\n\nPlease enter the tower you want to move " << from_or_to << "\n\nTower: ";
        cin >> tower;
        if (tower < 4 && tower > 0) {
            return tower;
        }
        else {
            cout << "Error 1: That is not a valid input, please try again.";
            continue;
        }
    }

}

// swaps positions while checking if the lcharacter is worth more or less than the others
void swap(int from, int to)
{
    int size = t1.size() - 1;
    int size2 = t2.size() - 1;
    int size3 = t3.size() - 1;
    if (from == 1)
    {
        if (to == 2)
        {
            if (t2[size2] < t1[size])
            {
                t2.push_back(t1[size]);
                t1.pop_back();
            }
            else
            {
                cout << "Error 7: That is not a valid input, please try again.";
            }

        }
        else if (to == 3)
        {
            if (t3[size3] < t1[size])
            {
                t3.push_back(t1[size]);
                t1.pop_back();
            }
            else {
                cout << "Error 7: That is not a valid input, please try again.";
            }
        }
        else
        {
            cout << "Error 4";
            exit(EXIT_FAILURE);
        }
    }
    else if (from == 2)
    {
        if (to == 1)
        {
            if (t1[size] < t2[size2])
            {
                t1.push_back(t2[size2]);
                t2.pop_back();
            }
            else {
                cout << "Error 7: That is not a valid input, please try again.";
            }
        }
        else if (to == 3)
        {
            if (t3[size3] < t2[size2])
            {
                t3.push_back(t2[size2]);
                t2.pop_back();
            }
            else {
                cout << "Error 7: That is not a valid input, please try again.";
            }
        }
        else
        {
            cout << "Error 5";
            exit(EXIT_FAILURE);
        }
    }
    else if (from == 3)
    {
        if (to == 1)
        {
            if (t1[size] < t3[size3])
            {
                t1.push_back(t3[size3]);
                t3.pop_back();
            }
            else {
                cout << "Error 7: That is not a valid input, please try again.";
            }
        }
        else if (to == 2)
        {
            if (t2[size2] < t3[size3])
            {
                t2.push_back(t3[size3]);
                t3.pop_back();
            }
            else {
                cout << "Error 7: That is not a valid input, please try again.";
            }
        }
        else
        {
            cout << "Error 6";
            exit(EXIT_FAILURE);
        }
    }
    else
    {
        cout << "Error 3";
        exit(EXIT_FAILURE);
    }
}


// main
int main()
{
    system("color 0a");
    cout << "\tAvi Schmookler\n\tDate: 10/20/2021" << endl;
    cout << setw(19) << "Lab#: N/A\n\t";
    cout << "\"Project_33-Tower_Of_Hanoi\"\n\tObjectives:Students will simulate the Tower of Hanoi Puzzle \n\n";

    // creates variables
    int from_tower = 0;
    int to_tower = 0;

    // loops untill win
    while (t3.size() != 5)
    {
        print_board();
        from_tower = selection(from_tower, "from.");
        to_tower = selection(to_tower, "to.");
        if (from_tower == to_tower)
        {
            cout << "Error 2: That is not a valid input, please try again.";
            continue;
        }
        else
        {
            swap(from_tower, to_tower);
        }
    }
    // if the size is more than 5 you win (accounting for spaces)
    cout << "!You Win!";

    return 0;
}