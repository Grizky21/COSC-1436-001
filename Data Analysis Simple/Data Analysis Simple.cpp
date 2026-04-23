#include <iostream>
#include <string>

#include "Points.h"

using namespace std;

int main()
{
	string filename = "Points.csv";

	auto listOfPoints = readFileAndStoreContents(filename);

	float sumOfAllXValues = 0.0;

	for (Point currentPoint : listOfPoints)
	{
		sumOfAllXValues = sumOfAllXValues + currentPoint.x;
	}

	int numberOfPoints = listOfPoints.size();

	float average = sumOfAllXValues / numberOfPoints;

	cout << "The average X value is: " << average << "\n";

}