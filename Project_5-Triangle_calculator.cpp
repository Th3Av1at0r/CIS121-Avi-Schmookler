/*

Output Commands
Avi Schmookler
9/1/2021

*/
using namespace std;
#define _USE_MATH_DEFINES

#include <iostream>
#include <iomanip>
#include <string>
//adds the cmath library
#include <cmath>

int get_bhoth() {
    int bhoth = 0;
    cout << "\n\nDo you want to find theta and the hypotenuse (1) or the Base and height (2)?\n";
    cin >> bhoth;

    return bhoth;
}

double get_base() {
    double base = 0.0;
    cout << "\nWhat is the base of the triangle?\n";
    cin >> base;

    return base;
}

double get_height() {
    double height = 0.0;
    cout << "\nWhat is the height of the triangle?\n";
    cin >> height;

    return height;
}

double get_hypotenuse() {
    double hypotenuse = 0.0;
    cout << "\nWhat is the hypotenuse of the triangle?\n";
    cin >> hypotenuse;

    return hypotenuse;
}

double get_theta() {
    double theta = 0.0;
    cout << "\nWhat is the theta of the triangle in degrees?\n";
    cin >> theta;

    return theta;
}

double calculate_hypotenuse(double base, double height) {
    double hypotenuse = 0.0;
    //calculates the hypotenuse
    hypotenuse = sqrt((base * base) + (height * height));

    return hypotenuse;
}

double calculate_theta(double base, double hypotenuse) {
    double theta = 0.0;
    //calculates theta
    theta = asin(base / hypotenuse) * (180/ M_PI);

    return theta;
}

double calculate_base(double hypotenuse, double theta) {
    double base = 0.0;
    //calculates the base
    base = (sin((theta * (M_PI / 180)))) * hypotenuse;

    return base;
}

double calculate_height(double hypotenuse, double base) {
    double height = 0.0;
    //calculates the height
    height = sqrt((hypotenuse * hypotenuse) - (base * base));

    return height;
}

void display_results(double base, double height, double hypotenuse, double theta) {
    cout << "The base is " << base << ", the height is " << height
        << ", the hypotenuse is " << hypotenuse << ", and theta is " << theta;

}

int main()
{
    system("color 0a");
    cout << "\tAvi Schmookler\n\t9/1/2021" << endl;
    cout << setw(18) << "Lab#:N/A\n\t";
    cout << "\"Project_5-Triangle_calculator\"\n\tcalculator for base height hypotenuse and theta.";

    int bhoth = 0;
    double base = 0.0;
    double height = 0.0;
    double hypotenuse = 0.0;
    double theta = 0.0;
    int tracker = 0;

    bhoth = get_bhoth();
    // states if base height or theta hypotenuse is 1, 2, or something else 
    if (bhoth == 1) {
        base= get_base();
        height = get_height();
        hypotenuse = calculate_hypotenuse(base, height);
        theta = calculate_theta(base, hypotenuse);
        display_results(base, height, hypotenuse, theta);
    }else if (bhoth == 2) {
        while (tracker != 7) {
            hypotenuse = get_hypotenuse();
            theta = get_theta();
            base = calculate_base(hypotenuse, theta);
            height = calculate_height(hypotenuse, base);
            display_results(base, height, hypotenuse, theta);
            tracker += 1;
            }
    }else {
        //idiot proofs this one input
        cout << "\nThat is not a valid input, please restart.\n";
    }

    return 0;
}