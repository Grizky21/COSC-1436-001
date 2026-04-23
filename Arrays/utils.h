#pragma once


#include <fstream>
#include <random> 
#include <string> // Arrays of Characters
#include <vector> //Dynamic array

using namespace std;


vector<string> getTheStudentList(string filename)
{
	ifstream fin(filename);

	if (!fin)
	{
		cout << filename << " was not found.\n";

		return {};
	}

	string currentStudent;

	vector<string> listOfStudents;

	while (getline(fin, currentStudent))
	{
		//cout << currentStudent << "\n"; //Print out the whole list before the ALGORITHM

		listOfStudents.push_back(currentStudent);
	}

	return listOfStudents;
}

/*This is ALGORITHM*/
string findLongestName(vector<string> listOfStudents)
{
	string theLongestName;
	//srand(time(0));

	//int randomIndex = rand() % listOfStudents.size();

	//mt19937 rng(random_device{}());

	//uniform_int_distribution<int> distribution(0, listOfStudents.size() - 1);

	//int randomIndex = distribution(rng); 

	//return listOfStudents.at(randomIndex); 

	for (int studentNumber = 0; studentNumber < listOfStudents.size(); ++studentNumber)

	string theLongestName = listOfStudents.at(0);

	for (string currentStudent : listOfStudents)
	{
		if (currentStudent.length() > theLongestName.length())
		{
			cout << "THe Former Longest name: " << theLongestName << " get updated to: " << currentStudent << "\n";
			theLongestName = currentStudent;
		}
	}

	return theLongestName;
}
