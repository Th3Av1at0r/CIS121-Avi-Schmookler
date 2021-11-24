/*

Output Commands
Avi Schmookler
11/17/2021

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
#include <fstream>
#include <stdlib.h>
#include <chrono>
#include <thread>
#include "Project_47-UML_Fruit.h"


int main()
{
    system("color 0a");
    cout << "\tAvi Schmookler\n\tDate: 11/17/2021" << endl;
    cout << setw(19) << "Lab#: N/A\n\t";
    cout << "\"Project_47-UML_Fruit\"\n\tObjectives: Create both the .h and .cpp for the UML Diagram Display default values, modify themand then re - display\n\n";

   
    string response = "a";
    fruit fruit;

    fruit.display();

    while (true == true) {
        cout << "Would you like to enter a fruit into the list(Y or N)? ";
        cin >> response;
        if (response == "Y" || response == "y") {
            fruit.get_fruit();
            fruit.display();
        }
        else if (response == "N" || response == "n") {
            break;
        }
        else {
            cout << "Error 1";
            EXIT_FAILURE;
        }
    }
    cout << "Thank you for using my program, exiting code";

    return 0;
}
