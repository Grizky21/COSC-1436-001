#pragma once

#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

struct Point
{
	int x, y;
};

vector<Point> readFileAndStoreContents(string filename)
{
	ifstream fin(filename);

	if (fin.is_open() == false)
	{
		cout << filename << " not found!\n";
		return{};
	}

	string currentRowInFile;
	vector<Point> points;

	while (getline(fin, currentRowInFile))
	{
		cout << currentRowInFile << "\n";

		stringstream ss;

		string currentPartOfRow;

		Point currentPoint;

		getline(ss, currentPartOfRow, ',');
		currentPoint.x = stoi(currentPartOfRow);

		getline(ss, currentPartOfRow, ',');
		currentPoint.y = stoi(currentPartOfRow);

		//while (getline(ss, currentPartOfRow, ','))
		//{
		//	cout << currentPartOfRow << "\n";
		//}

		points.push_back(currentPoint);
	}

	return points;
}