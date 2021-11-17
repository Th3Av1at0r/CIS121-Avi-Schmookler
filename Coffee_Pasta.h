#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

#pragma once

class account {
public:
	account() {
		name = "John";
		id = 7812;
		balance = 375.98;
	}
	string get_name() {
		return name;
	}
	int get_id() {
		return id;
	}
	double get_balance() {
		return balance;
	}
	void deposit(double depoIn) {
		balance = balance + depoIn;
	}
	void withdraw(double withIn) {
		balance = balance - withIn;
	}

private:
	string name;
	int id;
	double balance;
};