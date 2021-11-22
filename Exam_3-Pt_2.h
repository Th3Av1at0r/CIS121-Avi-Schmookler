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
		age = 19;
	}
	string get_name() {
		return name;
	}
	int get_age() {
		return age;
	}

private:
	string name;
	int age;
};
