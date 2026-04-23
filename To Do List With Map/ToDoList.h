#pragma once

#include <iostream>
#include <map>
#include <string>

using namespace std;

void addStuffToDoList(map<int, string> & toDoList)
{
	cout << "What do you want to add?\n";

	cout << "The Current number of things to do is; " << toDoList.size() << "\n";

	string thingToAdd;
	getline(cin, thingToAdd);

	int newTaskNumber = toDoList.size() + 1;

	toDoList.insert({ newTaskNumber, thingToAdd });
}

void printToDoList(map<int, string> toDoList)
{
	for (pair<int, string> currentPair : toDoList)
	{
		cout << currentPair.first << "-" << currentPair.second << "\n";
	}
}