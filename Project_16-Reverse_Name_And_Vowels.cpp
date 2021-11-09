/*

Output Commands
Avi Schmookler
9/22/2021

*/
using namespace std;
#include <iostream>
#include <iomanip>
#include <string>

// aquires your name
string get_name() {
    string name = "A";
    cout << "What is your name?\n";
    cin >> name;

    return name;
}

// finds the number of vowels in your name
int get_number_of_vowels(string name) {
    int number_of_vowels = 0;
    for (int i = 0; name[i] != '\0'; ++i)
    {
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' ||
            name[i] == 'o' || name[i] == 'u' || name[i] == 'A' ||
            name[i] == 'E' || name[i] == 'I' || name[i] == 'O' ||
            name[i] == 'U')
        {
            number_of_vowels += 1;
        }
        else {
            continue;
        }
    }
    return number_of_vowels;
}

// reverses your name
string calculate_reverse_name(string name) {
    int length = 0;
    length = name.length();
    for (int i = 0; i < length / 2; i++) {
        swap(name[i], name[length - i - 1]);
    }
    return name;
}

// displays the result
void display_result(int vowels, string reverse_name) {
    cout << "\nYour name in reverse is " << reverse_name << " and there are " << vowels << " vowels in your name.\n";
}

// initializes main
int main()
{
    system("color 0a");
    cout << "\tAvi Schmookler\n\tDate: 9/22/2021" << endl;
    cout << setw(19) << "Lab#: N/A\n\t";
    cout << "\"Project_16-Reverse_Name_And_Vowels\"\n\tObjectives: Reverse the inputed name and find the number of vowels\n\n";

    // initializes variables
    string name = "A";
    int number_of_vowels = 0;
    string reverse_name = "A";

    // calls functions
    name = get_name();
    number_of_vowels = get_number_of_vowels(name);
    reverse_name = calculate_reverse_name(name);
    display_result(number_of_vowels, reverse_name);

    return 0;
}