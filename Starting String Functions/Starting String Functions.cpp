#include <iostream>
#include <string>


using namespace std;

int main()
{
	string phrase = "two words";

	char lastCharacter = phrase.back();

	cout << "Last character of \"" << phrase << "\" is " << lastCharacter << "\n";

	string theBestMortalKombatCharacter = "Subzero";

	int startIndex = 0;
	int offset = 3;

	cout << "Substring of Mortal Kombat character from " << startIndex << " to " << offset << " is "
		<< theBestMortalKombatCharacter.substr(startIndex, offset) << "\n";
}
