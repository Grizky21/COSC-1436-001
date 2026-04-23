#include <iostream>
#include <random>


using namespace std;


int getRandomNumber()
{
	
	mt19937 rng(random_device{}());

	uniform_int_distribution<int> distribution(0, 1000);
		
	return distribution(rng);

}

int main()
{
	int randomNumber = getRandomNumber();

	int guess = -134;

	int guessCount = 0;

	const int MAX_GUESSES_ALLOWED = 21;

	while (guess != randomNumber && guessCount < MAX_GUESSES_ALLOWED)
	{
		cout << "Pick a number between 0 and 1000: \n";

		cin >> guess;

		if (guess > randomNumber)
		{
			cout << "That number is HIGH! Drop Down to Earth.\n";
		}

		else if (guess < randomNumber)
		{
			cout << "That number is LOW! Climb Up to Heaven.\n";
		}

		guessCount++;
	}

	if (guessCount > MAX_GUESSES_ALLOWED)
	{
		cout << "21 chances of luck and you still LOSE the Game!\n";
	}

	else
	{
		cout << "Congratulation! You guess RIGHT! Lady Luck has smile upon YOU.\n";
	}
}