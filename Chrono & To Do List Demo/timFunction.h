#pragma once

#include <iostream>
#include <chrono>

using namespace std;

namespace MySpace
{
	int a = 123;
}

void measureReactionTIme()
{
	//using namespace MySpace; use this or MySpace::a

	//cout << MySpace::a << "\n";

	cout << "Get ready...\n";

	auto startTime = chrono::high_resolution_clock::now(); //chrono::steady_clock::time_point or auto

	cout << "Press ENTER when you are ready\n";

	string input;
	getline(cin, input);

	auto endTime = chrono::high_resolution_clock::now();

	cout << (endTime - startTime) << "\n";
}

void benchmarkComputerCountingSpeed(int theNumberToCountTo)
{
	auto startTime = chrono::high_resolution_clock::now();

	for (int i = 0; i < theNumberToCountTo; ++i)
	{

	}

	auto endTime = chrono::high_resolution_clock::now();

	cout << "It took " << (endTime - startTime) << " to count to " << theNumberToCountTo << "\n";
}