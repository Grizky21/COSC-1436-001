#pragma once

#include <fstream>
#include <iostream>
#include <random>
#include <string>
#include <vector>

using namespace std;

vector<string> getAllDictionaryWords()
{
	vector<string> wordsInDictionary;

	ifstream fin("dictionary.txt");

	string currentWord;

	while (getline(fin, currentWord))
	{
		wordsInDictionary.push_back(currentWord);
	}

	return wordsInDictionary;
}

string getRandomWord(vector<string> allDictionaryWords)
{
	random_device rd;

	mt19937 rng(rd());

	uniform_int_distribution<> distribution(0, allDictionaryWords.size());

	int randomPositionInArray = distribution(rng);

	return allDictionaryWords.at(randomPositionInArray);
}