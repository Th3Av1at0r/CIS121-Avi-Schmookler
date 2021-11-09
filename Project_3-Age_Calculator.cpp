/*

Output Commands
Avi Schmookler
9/1/2021

*/
using namespace std;
#include <iostream>
#include <iomanip>
#include <string>
//Adds the stdio.h library
#include <stdio.h>

//initializes the year constant
const double year = 2021.0;

//opens get_age
int get_age() {
    
    //initializes age
    int age;

    //asks for age
    cout << "Please enter your age.\n";
    //inputs age
    cin >> age;


    //returns age
    return age;
}

//opens calculate_birth_year
int calculate_birth_year(int age) {
    //initializes birth_year
    int birth_year = 0;

    //calculates birth_year
    birth_year = year - age;


    //returns birth_year
    return birth_year;
}

string get_name() {
    //initializes name
    string name = "0";
    //asks for name
    cout << "\n\nPlease enter your name.\n";
    //inputs name
    getline(cin, name);

    return name;
}

double get_money(int age) {
    //initializes age
    age = age;
    //initializes money
    double money = 5.0;
    //calculates money
    money = (year - age) / 100.0;

    return money;
}

//opens display_results
void display_results(string name, int birth_year, double money) {
    //initializes birth_year
    birth_year = birth_year;
    //prints birth year
    cout << "Your name is " << name << "."
        << "\nYou were probably born in " << birth_year << "."
        << "\nYou have $" << money << ".";
}

int main()
{
    system("color 0a");
    cout << "\tAvi Schmookler\n\t9/1/2021" << endl;
    cout << setw(18) << "Lab#:N/A\n\t";
    cout << "\"Age_Calculator\"\n\tCalculate birth year";

    //initializes age
    int age = 0;
    //initializes birth_year
    int birth_year = 0;
    //inilializes money
    double money = 5.0;
    // initializes name
    string name = "0";

    //runs multiple functions
    name = get_name();
    age = get_age();
    birth_year = calculate_birth_year(age);
    money = get_money(age);
    display_results(name, birth_year, money);

    return 0;
}