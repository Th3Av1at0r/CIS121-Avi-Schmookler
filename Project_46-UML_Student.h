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

class account {
public:
	account() {
		name = "Avi";
		GPA = 3.5;
	}
	string get_name() {
		return name;
	}
	bool aproval(double GPA) {
		if (GPA > 3.0) {
			return true;
		}
		else {
			return false;
		}
	}
	double get_GPA() {
		return GPA;
	}

private:
	string name;
	double GPA;
};