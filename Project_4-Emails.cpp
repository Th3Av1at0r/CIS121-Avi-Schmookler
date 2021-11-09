/*

Output Commands
Avi Schmookler
9/1/2021

*/

using namespace std;
#include <iostream>
#include <iomanip>
#include <string>
#include <stdio.h>

string get_first_name() {
    string first_name = "A";
    cout << "\nWhat is your first name?\n";
    cin >> first_name;

    return first_name;
}

string get_last_name() {
    string last_name = "A";
    cout << "\nWhat is your last name?\n";
    cin >> last_name;

    return last_name;
}

string get_first_email(string first_name, string last_name) {
    string first_email = "A";

    //uses the first character in first_name in the email
    first_email = first_name[0] + last_name + "@company.com";

    return first_email;
}

string get_second_email(string first_name, string last_name, int name_length) {
    string second_email = "A";

    //uses the first character in first_name and in last_name in the email
    second_email = first_name.substr(0, 1) + last_name.substr(0, 1) + to_string(name_length) + "@whatsInaName.com";

    return second_email;
}

int get_name_length(string first_name, string last_name) {
    int name_length = 0;
    //finds the length of the full name
    name_length = first_name.length() + last_name.length();

    return name_length;
}

void print_emails(string first_email, string second_email) {

    cout << "\n\nYour new emails are " << first_email << " and " << second_email << ".";
}

int main()
{
    system("color 0a");
    cout << "\tAvi Schmookler\n\t9/1/2021" << endl;
    cout << setw(18) << "Lab#:N/A\n\t";
    cout << "\"Age_Calculator\"\n\tCalculate birth year";

    string first_name = "A";
    string last_name = "A";
    string first_email = "A";
    string second_email = "A";
    int name_length = 0;

    first_name = get_first_name();
    last_name = get_last_name();
    //starts functions using variables
    name_length = get_name_length(first_name, last_name);
    first_email = get_first_email(first_name, last_name);
    second_email = get_second_email(first_name, last_name, name_length);
    print_emails(first_email, second_email);
}