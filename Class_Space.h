#pragma once
class names 
{

public:
	void display_1()
	{
		cout << "\nPublic variables: " << _name_1 << ", " << _number_1 << "\n";
	}
	void display_2()
	{
		cout << "\nPublic variables: " << _name_2 << ", " << _number_2 << "\n";
	
	}

	string _name_1{ "YourMiddleNameCompany" };
	int _number_1{ 12345 };

	string get_name() 
	{
		return _name_2;
	}

	int get_number() 
	{
		return _number_2;
	}

	void set_name_1(string cname) 
	{
		_name_1 = cname;
	}

	void set_name_2(string cname)
	{
		_name_2 = cname;
	}

	void set_number_1(int cnumber)
	{
		_number_1 = cnumber;
	}

	void set_number_2(int cnumber)
	{
		_number_2 = cnumber;
	}

private:
	string _name_2{ "Your FirstNameOwner" };
	int _number_2{ 54321 };

};
