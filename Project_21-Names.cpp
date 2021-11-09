/*

Output Commands
Avi Schmookler
10/6/2021

*/
using namespace std;
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

vector<string> names{};


void get_names() {
    int counter = 0;
    string name = "A";
    while (1 == 1) {
        cout << "\nPlease enter a name.\n";
        cin >> name;
        if (name == "ctrl - z") {
            break;
        }
        else {
            names.push_back(name);
        }
    }
}

void display_results() {
    int number = 0;
    for (number = 0; number < names.size(); number++)
        std::cout << names[number] << "\n";
}

int main()
{
    system("color 0a");
    cout << "\tAvi Schmookler\n\tDate: 10/6/2021" << endl;
    cout << setw(19) << "Lab#: N/A\n\t";
    cout << "\"Project_20-Names\"\n\tObjectives: Using String Vectors, prompt the user to enter a list of names and pushback into the Vector. Continue until the user enters ctrl-z\n"
        << "Sort the names into alphabetical orderand display them\n\n";

    get_names();
    display_results();

    return 0;
}