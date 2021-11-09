/*

Output Commands
Avi Schmookler
9/26/2021

*/
using namespace std;
#include <iostream>
#include <iomanip>
#include <string>

// aquires the user's name
string get_name(string name)
{
    cout << "\nPlease enter your name\n";
    cin >> name;

    return name;
}

// changes the name into alphabetical order
void calculate_and_display_results(string name, int name_length) {
    cout << "\nYour name is " << name << "\n";
    int value_1 = 0;
    int value_2 = 0;
    int value_3 = 0;
    char bank;

    for (value_1 = 1; value_1 <= name_length; value_1++)
    {
        for (value_2 = 0; value_2 < name_length; value_2++)
        {
            if (name[value_2] > name[value_2 + 1])
            {
                bank = name[value_2];
                name[value_2] = name[value_2 + 1];
                name[value_2 + 1] = bank;
            }
        }
    }

    cout << "\nYour name in alphabetical order is ";
    for (value_3 = 0; value_3 <= name_length; value_3++)
    {
        cout << name[value_3];
    }
}

// initializes main
int main()
{
    system("color 0a");
    cout << "\tAvi Schmookler\n\tDate: 9/26/2021" << endl;
    cout << setw(19) << "Lab#: N/A\n\t";
    cout << "\"Project_17-Bubble_Name_Sort\"\n\tObjectives: Alfabetize the name inputed.\n\n";

    // initializes variables
    string name = "A";
    int name_length = 0;

    // calls finctions and calculates the name length
    name = get_name(name);
    name_length = name.length();
    calculate_and_display_results(name, name_length);
    cout << "\n\n";

    return 0;
}