#include <iostream>
#include <string>
#include <vector>

#include "WordGuessing.h"

using namespace std;

void myCustomFind(string word, char characterToFind)
{
    for (int position = 0; position < word.size(); ++position)
    {
        if (word.at(position) == characterToFind)
        {
            cout << "Found at index = " << position << "\n";
        }
    }
}

int main()
{
    vector<string> allDictionaryWords = getAllDictionaryWords();

    int a = -123;

    string theRandomWord = getRandomWord(allDictionaryWords);

    cout << "The Random word to guess is: " << theRandomWord << "\n";

    string mysteryString;

    for (int i = 0; i < theRandomWord.size(); ++i)
    {
        mysteryString.push_back('*');
    }

    cout << "As a \"mystery\", that is: " << mysteryString << "\n";

    cout << "Player, enter a character that you think is in the word:\n";

    char letterThatWasGuess;

    int attempt = 0;

    string guessAnswer = "";

    while (guessAnswer != theRandomWord && attempt < 10)
    {
        cout << "Enter a letter: ";
        cin >> letterThatWasGuess;

        if (theRandomWord.find(letterThatWasGuess) != -1)
        {
            cout << "You guessed a correct letter!\n";

            int guessedLetterPosition = theRandomWord.find(letterThatWasGuess);

            guessAnswer.replace(guessedLetterPosition, 1, 1, letterThatWasGuess);
        }

        else
        {
            attempt++;
        }

        bool gameWon = false;

        while (gameWon == false)
        {
            cin >> letterThatWasGuess;

            int startingSearchPosition = 0;
            int locationOfGuessLetter = theRandomWord.find(letterThatWasGuess, startingSearchPosition);
            int position = 0;
            //cout << "The letter was found at index: " << (theRandomWord.find(letterThatWasGuess, startingSearchPosition)) << "\n";

            if (theRandomWord.find(letterThatWasGuess, startingSearchPosition) != string::npos)
            {
                cout << "The letter was found - and it is at index: " << locationOfGuessLetter << "\n";

                mysteryString.at(locationOfGuessLetter) = letterThatWasGuess;

                cout << "Updated the myster string to: " << mysteryString << "\n";
                            
            }

            else
            {
                cout << "You dummy.";

                attempt++;
            }

        }
    }
}
    //string answer = "Odd";

    //string input;

    //string guessAnswer;

    //string guessLetter;

    //int attempt = 0;

    //int choice;


    //cout << "Do you want to play Hangman? 1.Yes 2.No\n";
    //cin >> choice;

    //if (choice == 1)
    //{

    //    for (int i = 0; i < answer.length(); i++)
    //    {
    //        guessAnswer.append("*");
    //    }

    //    while (guessAnswer != answer && attempt < 10)
    //    {
    //        cout << "Enter a letter: ";
    //        cin >> guessLetter;  

    //        if (answer.find(guessLetter) != -1) 
    //        {
    //            cout << "You guessed a correct letter!\n";

    //            int guessedLetterPosition = answer.find(guessLetter);

    //            guessAnswer.replace(guessedLetterPosition, 1, guessLetter);
    //        }

    //        else
    //        {
    //            attempt++;
    //        }
    //    }   

    //}

    //else
    //{
    //    return 0;
    //}



