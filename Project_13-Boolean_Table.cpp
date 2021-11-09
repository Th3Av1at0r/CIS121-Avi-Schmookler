/*

Output Commands
Avi Schmookler
9/15/2021

*/
using namespace std;
#include <iostream>
#include <iomanip>
#include <string>

void display_and(bool trugh, bool falseh)
{
    cout << "\tTrue AND True: " << (trugh && trugh) << " True\n";
    cout << "\tTrue AND False: " << (trugh && falseh) << " False\n";
    cout << "\tFalse AND True: " << (falseh && trugh) << " False\n";
    cout << "\tFalse AND False: " << (falseh && falseh) << " False\n\n";

}

void display_or(bool trugh, bool falseh)
{
    cout << "\tTrue OR True: " << (trugh || trugh) << " True\n";
    cout << "\tTrue OR False: " << (trugh || falseh) << " True\n";
    cout << "\tFalse OR True: " << (falseh || trugh) << " True\n";
    cout << "\tFalse OR False: " << (falseh || falseh) << " False\n\n";

}

void display_x_or(bool trugh, bool falseh)
{
    cout << "\tTrue XOR True: " << (trugh ^ trugh) << " False\n";
    cout << "\tTrue XOR False: " << (trugh ^ falseh) << " True\n";
    cout << "\tFalse XOR True: " << (falseh ^ trugh) << " True\n";
    cout << "\tFalse XOR False: " << (falseh ^ falseh) << " False\n\n";
}

int main()
{
    system("color 0a");
    cout << "\tAvi Schmookler\n\tDate: 9/15/2021" << endl;
    cout << setw(19) << "Lab#: N/A\n\t";
    cout << "\"Boolean_Table\"\n\tObjectives: Create a boolean output table.\n\n";

    bool trugh = true;
    bool falseh = false;

    display_and(trugh, falseh);
    display_or(trugh, falseh);
    display_x_or(trugh, falseh);


    return 0;
}