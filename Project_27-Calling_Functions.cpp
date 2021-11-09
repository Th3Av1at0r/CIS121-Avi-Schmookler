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

int counter_a = 0;

void a() {
    int counter = 0;
    counter_a++;
    while (counter < counter_a) {
        cout << "A";
        counter++;
    }
}

void b() {
    static int counter_b = 0;
    int counter = 0;
    counter_b++;
    while (counter < counter_b) {
        cout << "B";
        counter++;
    }
}

int c(int counter_c) {
    int counter = 0;
    counter_c++;
    while (counter < counter_c) {
        cout << "C";
        counter++;
    }

    return counter_c;
}

int main()
{
    system("color 0a");
    cout << "\tAvi Schmookler\n\tDate: 10/13/2021" << endl;
    cout << setw(19) << "Lab#: N/A\n\t";
    cout << "\"Project_27-Calling_Functions\"\n\tObjectives: Write 3 Functions A( ), B( ) & C(int)"
        << "In main(), create a loopand prompt the user to enter A, B, C or Q and depending on the answer, go to that Functionand display the Function name"
        << "The 2nd time that the user enters A display AA and the 3rd time display AAA(continue until Q is entered)"
        << "The user should be able to enter the 3 letters in any order and display them independently of the other 2"
        << "For A() use a Global counter, but for B() use a static counter within B() and for C(int) pass a local counter from main()\n\n";

    string letter = "A";
    int counter_c = 0;

    while (true == true) {
        cout << "\nPlease enter A, B, C, or exit with Q.\n";
        cin >> letter;
        if (letter == "a" or letter == "A") {
            a();
        }
        else if (letter == "b" or letter == "B") {
            b();
        }
        else if (letter == "c" or letter == "C") {
            counter_c = c(counter_c);
        }
        else if (letter == "q" or letter == "Q") {
            exit(0);
        }
        else {
            cout << "That is not a valid input, exiting code.";
            exit(0);
        }
    }

    return 0;
}