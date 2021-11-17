#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

#pragma once

// creates the account class
class account {
public:
	account() {
		name = "Avi";
		id = 7812;
		balance = 375.98;
	}
	// functions do literally what their labels say
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