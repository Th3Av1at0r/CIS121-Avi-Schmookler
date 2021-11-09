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

int call_by_value(int);
int call_by_refrence(int*);

int call_by_value(int x)						//function takes in value of x and returns x^2
{
    x = x * x;								//x is now equal to x^2
    return x;								//returns x
}

int call_by_refrence(int* y)					//funciton takes in variable y
{
    *y = *y * *y;							//variable y is equal to y^2
    return *y;								//returns y
}

int main()
{
    system("color 0a");
    cout << "\tAvi Schmookler\n\tDate: 10/13/2021" << endl;
    cout << setw(19) << "Lab#: N/A\n\t";
    cout << "\"Project_29-Call_By_Value\"\n\tObjectives: Create 2 Functions int xvalue(int) and int yreference(&int)."
        << "Within main() prompt the user to enter 2 #s(x & y)."
        << "Send x as a call by value(capture the int change x to x * x)"
        << "Send y as a call by reference(capture the intand change it to y * y)"
        << "return and display both integers\n\n";

    int x, y;

    cout << "Enter two numbers:\n";
    cin >> x;
    cin >> y;
    x = call_by_value(x);
    y = call_by_refrence(&y);
    cout << "\nX: " << x << "\nY: " << y;


    return 0;
}