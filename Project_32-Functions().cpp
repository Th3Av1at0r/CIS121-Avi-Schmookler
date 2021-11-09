/*

Output Commands
Avi Schmookler
10/20/2021

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

vector <string> names{ "Clark", "Lois", "John", "Kara", "Kal" };
vector <char> characters{ 'a', 'i', 'u', 'e', 'o' };
vector <int> numbers{ 5, 27, 20, 89, 44 };

int main()
{
    system("color 0a");
    cout << "\tAvi Schmookler\n\tDate: 10/20/2021" << endl;
    cout << setw(19) << "Lab#: N/A\n\t";
    cout << "\"Project_32-Functions()\"\n\tObjectives:Create a string, char and int Vector with random names, characters and numbers respectively."
        << "Apply the Functions above to all 3 vectors Using elem Loops display a before and after of each vector\n\n";

    cout << "String Vector: ";
    for (auto a : names)
    {
        cout << a << "   ";
    }
    cout << "\nChar Vector: ";
    for (auto b : characters)
    {
        cout << b << "   ";
    }
    cout << "\nInt Vector: ";
    for (auto c : numbers)
    {
        cout << c << "   ";
    }

    sort(begin(names), end(names));                                       // We learned in class that it can be used as vector.begin() or vector.end()
    sort(begin(characters), end(characters));                                     // Through research, found that placing them inside the parameter gives the same result.
    sort(begin(numbers), end(numbers));

    cout << "\n\nSize of string Vector: " << names.size() << "\n";             // Output the size each vector
    cout << "Sorted string Vector: " << "\n";
    for (auto i : names)                                                   // Use ranged for loop to display each sorted vector
    {                                                                       // Output until the end of the vector
        cout << i << "   ";
    }
    cout << "\n\nSize of char Vector: " << characters.size() << "\n";
    cout << "Sorted char Vector: " << "\n";
    for (auto j : characters)
    {
        cout << j << "   ";
    }
    cout << "\n\nSize of int Vector: " << numbers.size() << "\n";
    cout << "Sorted int Vector: " << "\n";
    for (auto k : numbers)
    {
        cout << k << "   ";
    }
    return 0;



    return 0;
}