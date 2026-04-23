#pragma once

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct Weapon
{
	// These are called Attributes or member variables
	int attackPower{}; // or int attackPower = 0

	string name;

	float price;

	void print()
	{
		const int NAME_COLUMN_WIDTH = 20;
		const int ATTACK_POWER_COLUMN_WIDTH = 5;
		const int PRICE_COLUMN_WIDTH = 5;

		cout << left << setw(NAME_COLUMN_WIDTH) << name;
		cout << left << setw(ATTACK_POWER_COLUMN_WIDTH) << attackPower;
		cout << left << setw(PRICE_COLUMN_WIDTH) << price;

		//cout << left << name;
		//cout << left << attackPower;
		//cout << left << price;
	}
};