#pragma once

#include <iostream>
#include <string>

using namespace std;

struct Date
{
	//The 3 things below are field or member variables
	string month;
	int day{};
	int year;

	void print()
	{
		cout << month << " " << day << ", " << year << "\n";
	}
};