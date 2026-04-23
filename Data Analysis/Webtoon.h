#pragma once

#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

struct WebtoonRecord
{
	int id{};
	string name;
	string writer;
	string genre;
	int likes{};
	double rating{};
	int subscribers{};
};

void printFileContents(string& filename)
{
	ifstream fin(filename);
	if (!fin)
	{
		cout << "Unable to open file: " << filename << '\n';
		return;
	}

	string line;
	while (getline(fin, line))
	{
		cout << line << '\n';
	}
}

vector<WebtoonRecord> readFileData(const string& filename)
{
	ifstream fin(filename);

	if (!fin.is_open())
	{
		cout << filename << " was not found.\n";
		return {};
	}

	string currentLine;

	vector<WebtoonRecord> records;

	while (getline(fin, currentLine))
	{
		WebtoonRecord currentRow;

		stringstream ss(currentLine);

		string currentPartOfLine;

		char delimiter = '\t';

		getline(ss, currentPartOfLine, delimiter);
		currentRow.id = stoi(currentPartOfLine);

		getline(ss, currentPartOfLine, delimiter);
		currentRow.name = currentPartOfLine;

		getline(ss, currentPartOfLine, delimiter);
		currentRow.writer = currentPartOfLine;

		getline(ss, currentPartOfLine, delimiter);
		currentRow.genre = currentPartOfLine;

		getline(ss, currentPartOfLine, delimiter);
		currentRow.likes = stoi(currentPartOfLine);
				
		getline(ss, currentPartOfLine, delimiter);
		currentRow.rating = stod(currentPartOfLine);

		getline(ss, currentPartOfLine, delimiter);
		currentRow.subscribers = stoi(currentPartOfLine);


		records.push_back(currentRow);
	}

	return records;

}