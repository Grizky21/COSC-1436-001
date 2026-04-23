#pragma once
#include <iostream>
#include <map>
#include <string>



{
	map<pair< float, float>, string> latitudeAndLongitudesToCityNames =
	{
		{{32.4, -93.7}, "Shreveport, LA, USA"},
		{{32.3, -95.3}, "Tyler, TX, USA"},
		{{34.1, -118,2}, "Los Angeles, CA, USA"},
		{{40.7, -74.0}, "New York City, NY, USA"},
		{{41.9, -87.6}, "Chicago, IL, USA"},
		{{29,8, -95.4}, "Houston, TX, USA"}
	};

	float latitude = 41.9;
	float longitude = -87.6;

	cout << "Enter the lat and long: \n";
	cin >> latitude >> longitude;

	pair<float, float> coordinate = { latitude, longitude };

	cout << "The name of the city at " << coordinate.first << " and " << coordinate.second <<
		" is " << latitudeAndLongitudesToCityNames.at(coordinate) << "\n";
}

void demoSIMPLEMapThing()
{
	map<> englishToSpanish =
	{
		{"I", "Yo"},
		{"have", "tengo"},
		{"hunger", "hambre"}
	};

	while (true)
	{
		cout << "Enter the ENGLISH word you'd like to translate:\n";

		string theEnglishWord;
		getline(cin, theEnglishWord);
	
		string theSpanishEquivalent = englishToSpanish.at(theEnglishWord);

		cout << "The Spanish equvalent is: " << theSpanishEquivalent
	}

}