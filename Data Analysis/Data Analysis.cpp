#include <iostream>
#include <string>
#include <vector>

#include "Webtoon.h"

using namespace std;

int main()
{	
	string filename = "Webtoon.csv";

	auto toonRecords = readFileData(filename);

	string genreA = "Action";
	string genreB = "Comedy";
	string genreC = "Drama";
	string genreD = "Fantasy";
	string genreE = "Heartwarming";
	string genreF = "Historical";
	string genreG = "Mystery";
	string genreH = "Romance";
	string genreI = "Sci-fi";
	string genreJ = "Slice of life";
	string genreK = "Supernatural";
	string genreL = "Thriller";
	
	int input;
	int countLikes = 0;
	int countRating = 0;
	int countSubscribers = 0;
	int numberToonGenreA = 0;
	int numberToonGenreB = 0;
	int numberToonGenreC = 0;
	int numberToonGenreD = 0;
	int numberToonGenreE = 0;
	int numberToonGenreF = 0;
	int numberToonGenreG = 0;
	int numberToonGenreH = 0;
	int numberToonGenreI = 0;
	int numberToonGenreJ = 0;
	int numberToonGenreK = 0;
	int numberToonGenreL = 0;

	
	while (true)
	{
		cout << "\nWhat do you want to do?\n" << "1. Show Webtoons List\n" << "2. Show Analysis\n" << "3. Exit\n" << "Enter choice: ";

		cin >> input;
		cin.ignore();

        if (input == 1)
        {
			cout << "\n";

			printFileContents(filename);
        }

        else if (input == 2)
        {	       
			for (int i = 0; i < toonRecords.size(); ++i)
			{
				if (toonRecords[i].genre == genreA)
				{					
					numberToonGenreA++;
				}
				if (toonRecords[i].genre == genreB)
				{
					numberToonGenreB++;
				}
				if (toonRecords[i].genre == genreC)
				{
					numberToonGenreC++;
				}
				if (toonRecords[i].genre == genreD)
				{
					numberToonGenreD++;
				}
				if (toonRecords[i].genre == genreE)
				{
					numberToonGenreE++;
				}
				if (toonRecords[i].genre == genreF)
				{
					numberToonGenreF++;
				}
				if (toonRecords[i].genre == genreG)
				{
					numberToonGenreG++;
				}
				if (toonRecords[i].genre == genreH)
				{
					numberToonGenreH++;
				}
				if (toonRecords[i].genre == genreI)
				{
					numberToonGenreI++;
				}
				if (toonRecords[i].genre == genreJ)
				{
					numberToonGenreJ++;
				}
				if (toonRecords[i].genre == genreK)
				{
					numberToonGenreK++;
				}
				if (toonRecords[i].genre == genreL)
				{
					numberToonGenreL++;
				}
			}

			cout << "\nThere are total of 100 Webtoons in this record. This record contain: \n";

			cout << numberToonGenreA << " " << genreA << " Webtoon\n";

			cout << numberToonGenreB << " " << genreB << " Webtoon\n";

			cout << numberToonGenreC << " " << genreC << " Webtoon\n";

			cout << numberToonGenreD << " " << genreD << " Webtoon\n";

			cout << numberToonGenreE << " " << genreE << " Webtoon\n";

			cout << numberToonGenreF << " " << genreF << " Webtoon\n";

			cout << numberToonGenreG << " " << genreG << " Webtoon\n";

			cout << numberToonGenreH << " " << genreH << " Webtoon\n";

			cout << numberToonGenreI << " " << genreI << " Webtoon\n";

			cout << numberToonGenreJ << " " << genreJ << " Webtoon\n";

			cout << numberToonGenreK << " " << genreK << " Webtoon\n";

			cout << numberToonGenreL << " " << genreL << " Webtoon\n";
			
			for (int i = 0; i < toonRecords.size(); ++i)
			{
				if (toonRecords[i].likes > 10'000'000)
				{
					countLikes++;
				}
			}

			for (int i = 0; i < toonRecords.size(); ++i)
			{
				if (toonRecords[i].subscribers > 2000)
				{
					countSubscribers++;
				}
			}

			for (float i = 0; i < toonRecords.size(); ++i)
			{
				if (toonRecords[i].rating > 9.8)
				{
					countRating++;
				}
			}

			cout << "\nMoreover, there are " << countLikes << " Webtoons with over 10 Million Likes, " << countRating 
				<< " Webtoons with rating over 9.8 and " << countSubscribers << " Webtoons with 2 Million or more subscribers.\n";
        }

		else if (input == 3)
		{
			return 0;
		}

		else
		{
			cout << "\nPlease enter the right number and TRY AGAIN!\n";
		}
	}

}
