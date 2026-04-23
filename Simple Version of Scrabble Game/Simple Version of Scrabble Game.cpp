#include <iostream>
#include <map>
#include <string>

#include "scrabbleFunction.h"


using namespace std;


int main()
{
	//cout << "Enter the word you wanna find the score of: \n";
	//string userWord;
	//getline(cin, userWord);

	//int score = calculateScore(userWord);

	//cout << "The Score is " << score << "\n";

	string filename = "Dictionary.txt";
	auto listOfDictionaryWords = getListFromFile(filename);


}