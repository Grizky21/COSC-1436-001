#include<iostream> 
#include <string> 

using namespace std; // I wonder what this thing does???


int main()
{

	int theFirst;
	int the_second_number; //examples of ints: -234, 0, 85959

	cout << "Enter any number between 0 and 9\n";

	cin >> theFirst;

	cout << "\nNext, enter another number between 0 and 99\n";

	cin >> the_second_number;

	cout << "\nYou entered: " << theFirst <<
		" and " << the_second_number;

	return 0; // completed successfully
}