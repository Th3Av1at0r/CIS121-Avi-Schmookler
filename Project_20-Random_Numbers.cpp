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

// basically stolen from the internet: creates the pseudo random set of numbers
double getnumber(int x, int y)
{
    uniform_real_distribution<double> distribution(x, y);
    random_device rd;
    default_random_engine generator(rd());
    return distribution(generator);
}

// displays all of the random numbers
void display_loop(int johnothan) {
    for (int i = 0; i < 20; i++)
    {
        int number = getnumber(1, johnothan);
        cout << number << " ";
    }
    cout << "\n";
}

// initializes main
int main()
{
    system("color 0a");
    cout << "\tAvi Schmookler\n\tDate: 10/6/2021" << endl;
    cout << setw(19) << "Lab#: N/A\n\t";
    cout << "\"Project_20-Random_Numbers\"\n\tObjectives: Create a program that generates random numbers\n\n";

    // runs the loop function multiple times with different variables
    display_loop(101);
    display_loop(13);
    display_loop(7);
    display_loop(4);

    return 0;
}