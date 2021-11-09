/*

Output Commands
Avi Schmookler
10/13/2021

*/
using namespace std;
#include <iostream>
#include <iomanip>
#include <string>
#include <random>
#include <vector>

// aquires name
string get_name(string name) {
    cout << "Enter your name: ";
    cin >> name;

    return name;
}

// aquires age
int get_age(int age) {
    cout << "Enter your age: ";
    cin >> age;

    return age;
}

// calculates the sum of the age and length of the name
int get_sum(string name, int age, int sum) {
    int name_length = 0;
    name_length = name.size();
    sum = age + name_length;

    return sum;
}

// displays all of the information
void display_results(string name, int age, int sum) {
    cout << "\nYour name is: " << name;
    cout << "\nYour age is: " << age;
    cout << "\nSum of age and the length of your name is: " << sum << "\n";
}

// initializes main
int main()
{
    system("color 0a");
    cout << "\tAvi Schmookler\n\tDate: 10/13/2021" << endl;
    cout << setw(19) << "Lab#: N/A\n\t";
    cout << "\"Project_26-Functions\"\n\tObjectives: Write a program that will prompt the user to enter their name and age"
        << "Create a Function that will accept a string and an int and pass that information(without Global variables)"
        << "Calculate the length of the stringand add it to the age Return the results of the addition Display all 3 variables\n\n";

    // initializes various variables
    string name = "A";
    int age = 0;
    int sum = 0;

    // calls funstions
    name = get_name(name);
    age = get_age(age);
    sum = get_sum(name, age, sum);
    display_results(name, age, sum);


    return 0;
}