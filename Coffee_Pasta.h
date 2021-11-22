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
		id = 420315;
		class_list = {};
	}
	string class_list;
	string get_name() {
		return name;
	}
	int get_id() {
		return id;
	}

private:
	string name;
	int id;
};
