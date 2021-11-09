/*

Output Commands
Avi Schmookler
11/3/2021

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


int main()
{
	system("color 0a");
	cout << "\tAvi Schmookler\n\tDate: 11/3/2021" << endl;
	cout << setw(19) << "Lab#: N/A\n\t";
	cout << "\"Project_38-Pointers\"\n\tObjectives: What is a Pointer? How do we decalre & Initialize one?\n\n";

	int number = 5;
	char char_mander = 'z';
	double doublin = 58239.25;

	int* number_point;
	char* char_mander_point;
	double* doublin_point;

	number_point = &number;
	char_mander_point = &char_mander;
	doublin_point = &doublin;

	cout << *number_point << "\n";
	cout << *char_mander_point << "\n";
	cout << *doublin_point << "\n";

	return 0;
}