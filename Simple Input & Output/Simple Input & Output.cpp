#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>


using namespace std;
	

int main()
{	
	cout << "There are " << pow(10, 6) << " micrometers in 1 meter.\n"; //Part 01 - A

	int angstromsPerMeters = pow(10,10); //Part 01 - B
	long long angstromsPerMetersCorrect = pow(10, 10);

	cout << "There are " << angstromsPerMeters << " Angstroms in 1 meter." << " This incorrect value is called Overflow Error.\n";

	cout << "There are " << angstromsPerMetersCorrect << " Angstroms in 1 meter.\n";


	string name1 = "Noah McHandy"; // Part 02
	string name2 = "Ullysses Grunt";

	cout << "\n" << name1 << ": " << name1.length() << " characters.\n";

	cout << name2 << ": " << name2.length() << " characters.\n";


	double userPrice1; //Part 03
	double userPrice2;

	cout << "\nEnter the first price: $ ";
	
	cin >> userPrice1;

	cout << "Enter the second price: $ ";

	cin >> userPrice2;

	double totalCost = userPrice1 + userPrice2;

	cout << "\nThe total cost: $" << fixed << setprecision(2) << totalCost << "\n";

	return 0;
}
