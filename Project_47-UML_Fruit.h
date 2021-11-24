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

#pragma once

class fruit {
public:
	fruit() {
		name = "a";
		color = "z";
		number_of = 0;
	}
	string get_name() {
		return name;
	}
	string get_color() {
		return color;
	}
	int get_number_of() {
		return number_of;
	}
	void display() {
		cout << "Name: " << get_name() << "\nColor: " << get_color() << "\nNumber: " << get_number_of() << "\n";
	}
	string aquire_name(string aquired_name) {
		cout << "What is the name of the fruit?\n";
		cin >> aquired_name;
		return aquired_name;
	}
	string aquire_color(string aquired_color) {
		cout << "What is the color of the fruit?\n";
		cin >> aquired_color;
		return aquired_color;
	}
	int aquire_number_of(int aquired_number_of) {
		cout << "How many do you have?\n";
		cin >> aquired_number_of;
		return aquired_number_of;
	}
	void get_fruit() {
		string aquired_name = "A";
		string aquired_color = "A";
		int aquired_number_of = 0;
		name = aquire_name(aquired_name);
		color = aquire_color(aquired_color);
		number_of = aquire_number_of(aquired_number_of);
	}







private:
	string name;
	string color;
	int number_of;
};